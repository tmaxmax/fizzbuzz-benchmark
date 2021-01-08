package fizzbuzz

import (
	"math/rand"
	"testing"
)

func BenchmarkFizzBuzz(b *testing.B) {
	for i := 0; i < b.N; i++ {
		FizzBuzz(rand.Uint64())
	}
}
