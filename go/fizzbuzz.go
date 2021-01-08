package fizzbuzz

import "strconv"

func FizzBuzz(number uint64) string {
	var res string

	if number%3 == 0 {
		res += "Fizz"
	}
	if number%5 == 0 {
		res += "Buzz"
	}
	if len(res) == 0 {
		res += strconv.FormatUint(number, 10)
	}

	return res
}
