import { Client, GatewayIntentBits } from "discord.js";
import { mySecret } from "./sercret.js";
const client = new Client({
  intents: [
    GatewayIntentBits.Guilds,
    GatewayIntentBits.GuildMessages,
    GatewayIntentBits.MessageContent,
  ],
}); //it creates a virtual clint that interacts with your server.

client.on("messageCreate", (message) => {
  if (message.author.bot) return;
  message.reply({
    content:
      "I don't tip because society says I have to but atleast i can wave a hi!!!! to you.",
  });
});

client.login(mySecret);
