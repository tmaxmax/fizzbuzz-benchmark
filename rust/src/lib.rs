#![feature(test)]
extern crate test;

use rand::Rng;

pub fn fizzbuzz(number: usize) -> String {
    let mut s = String::new();

    if number % 3 == 0 {
        s += "Fizz";
    }
    if number % 5 == 0 {
        s += "Buzz";
    }
    if s.is_empty() {
        s += &number.to_string();
    }

    s
}


#[cfg(test)]
mod tests {
    use super::*;

    #[bench]
    fn bench_fizzbuzz(b: &mut test::Bencher) {
        let mut rng = rand::thread_rng();

        b.iter(|| fizzbuzz(rng.gen()));
    }
}
