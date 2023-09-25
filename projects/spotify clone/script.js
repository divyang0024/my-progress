let songindex = 0;
let audioelement = new Audio('/songs/Nikes.mp3');
let masterplay = document.getElementById('masterplay');
let myprogressbar = document.getElementById('myprogressbar');
let gif = document.getElementById('gif');
let songs = [
    {
        songname: "white ferrari", filepath: "/songs/nights.mp4", coverpath: '/images/Blonde_-_Frank_Ocean.jpeg'
    },
    {
        songname: "white ferrari", filepath: "/songs/nights.mp4", coverpath: '/images/Blonde_-_Frank_Ocean.jpeg'
    },
    {
        songname: "white ferrari", filepath: "/songs/nights.mp4", coverpath: '/images/Blonde_-_Frank_Ocean.jpeg'
    },
    {
        songname: "white ferrari", filepath: "/songs/nights.mp4", coverpath: '/images/Blonde_-_Frank_Ocean.jpeg'
    },
    {
        songname: "white ferrari", filepath: "/songs/nights.mp4", coverpath: '/images/Blonde_-_Frank_Ocean.jpeg'
    },
]

masterplay.addEventListener('click', () => {
    if (audioelement.paused || audioelement.currentTime <= 0) {
        audioelement.play();
        masterplay.classList.remove('fa-circle-play');
        masterplay.classList.add('fa-circle-pause');
        gif.style.visibility = "visible"
    }
    else {
        audioelement.pause();
        masterplay.classList.add('fa-circle-play');
        masterplay.classList.remove('fa-circle-pause');
        gif.style.visibility = "hidden"
    }
})
audioelement.addEventListener('timeupdate', () => {
    let progress = parseInt((audioelement.currentTime / audioelement.duration) * 100);
    myprogressbar.value = progress;
})
myprogressbar.addEventListener('change', () => {
    audioelement.currentTime = myprogressbar.value * audioelement.duration / 100;
})
