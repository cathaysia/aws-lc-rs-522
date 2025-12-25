fn main() {
    let target = std::env::var("TARGET").unwrap();
    if target == "mips-unknown-linux-musl" {
        cc::Build::new()
            .file("unwind.c")
            .warnings(false)
            .compile("unwind");
    }
}
