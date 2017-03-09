# Ruby Extension Exercises.
This repository contains solutions to the challenges in Brian Hogan's "Exercises for Programmers" as Native C(and/or C++) Extensions to Ruby.

## About
Each directory is appropriately labeled to match the challenge title in the book. For example: in chapter 2, the first challenge is called "Saying Hello", thus the directory is named `01_saying_hello`. The solution, without the additional challenges, is labeled as `constraint`. The additional challenges are numbered as they appear in the book (ie `01_saying_hello/01_challenge`).

Due to the nature of C and the Ruby API, it may not be possible to complete the additional challenges.

This repository is intended for the exploration of the Ruby C/C++ API.

## How to use
To use this repository, navigate to the directory of the challenge you wish to compile. 
```
$ cd 01_saying_hello/
```

You must install any dependencies to compile the native gem with bundler.

```
$ bundle install
```

A Rake task is provided to compile the gem for most operating systems.

```
$ rake compile
```

You can then run the supporting unit test(s).

```
$ rake test
```

## Contributing
Fork this repository and send a pull request. Any solutions to challenges, updates and/or fixes are greatly appreciated.

## License
MIT
