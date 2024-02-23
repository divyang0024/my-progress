let hid = document.getElementById("elem1") ?? "name does not exist";
console.log(hid);
console.log(hid.id); //returns element id.
console.log(hid.className); //returns element class name.
console.log(hid.getAttribute("class")); //returns the specific attribute
hid.setAttribute("style", "background-color:cornflowerblue;"); //sets attribute value to element ('attr','val'),NOTE:it overides the existing attribute value.

// inline style:

// hid.style.cssText = "color:white";overides the internal css.
hid.style.color = "crimson";

// element contents:

console.log(hid.innerHTML); //inner content as well as tags embeded inside of the element.
console.log(hid.innerText); //only returns  inner content does not return any tags.
console.log(hid.textContent); //returns content as well as its child element content but not the tags.
