let radio_grp = document.getElementsByClassName("radio-btn");
let done = document.getElementById("done");
let undone = document.getElementById("undone");
let fbtn_grp = document.getElementsByClassName("f-btn");
let qbtn_grp = document.getElementsByClassName("q-btn");
let add = 0;
let sub = 10;
let move_p = document.getElementById("move_p");
let move_n = document.getElementById("move_n");
for (let i = 0; i < radio_grp.length; i++) {
    radio_grp[i].addEventListener("change", function () {
        if (add < 10) {
            done.innerHTML = `<i class="fa-solid fa-circle-check"></i> Attempted : ${++add}`;
            undone.innerHTML = `<i class="fa-solid fa-circle-xmark"></i> Remaining : ${--sub}`;
        }
    });
}

