export default function (n, r, s) {
    obj_gen(n, r, s);
}
let obj_gen = (n, r, s) => {
    function students(name, rollno, section) {
        this.name = name;
        this.rollno = rollno;
        this.section = section;
    }
    let st = new students();
    st.name = n;
    st.rollno = r;
    st.section = s;
    for (let i in st) {
        alert(st[i]);
    }
}