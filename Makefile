all:
		cd cxx && mkdir build && cd build && \
		cmake -DCMAKE_BUILD_TYPE=Release .. && \
		cmake --build . --config Release

build:
		cmake --build cxx/build --config Release

clean:
		rm -rf cxx/build

cxx:
		cd cxx/build && ./cxx

rs:
		cd rust && cargo +nightly bench

go:
		cd go && go test -bench=.

.PHONY: all build clean cxx go rs
