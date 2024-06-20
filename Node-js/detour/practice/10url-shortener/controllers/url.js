import { nanoid } from "nanoid";
import { URL } from "../models/url.js";

const handleGenrateNewUrlShortURL = async (req, res) => {
  const body = req.body;
  if (!body.url) {
    res.status(400).json({ error: "url is required" });
  }

  const shortID = nanoid(8);
  try {
    await URL.create({
      shortId: shortID,
      redirectURL: body.url,
      visitHistory: [],
    });
    res.render("home", { id: shortID });
  } catch (err) {
    console.log(err);
  }
};

const handleRedirection = async (req, res) => {
  const shortId = req.params.shortId;
  try {
    const entry = await URL.findOneAndUpdate(
      { shortId },
      {
        $push: {
          visitHistory: {
            timestamp: Date.now(),
          },
        },
      }
    );
    res.redirect(`http://${entry.redirectURL}`);
  } catch (err) {
    console.log(err);
  }
};

const handleAnalytics = async (req, res) => {
  const shortId = req.params.shortId;
  const result = await URL.findOne({ shortId });
  res.json({
    counts: result.visitHistory.length,
    analytics: result.visitHistory,
  });
};

export { handleGenrateNewUrlShortURL, handleRedirection, handleAnalytics };
