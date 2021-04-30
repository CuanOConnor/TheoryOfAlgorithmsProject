# TheoryOfAlgorithmsProject
## Cuan O'Conchuir - G00300230
## Project Concept
 - The main fucntionality of the project is to calculate and return the SHA512 digest value of the contents of a arbitrary input file.
 - Using a C compiler it can be run and the input.txt file is added as a command line arguement in the run command.
 - use Make to compile the c program then run it with its args.
 - i.e. **Make SHA512**, then -> **./SHA512 input.txt**
 - The included preproc512 file can also be run this way.

## Contents
 - Contains a folder called LabWork, which encompases all the labs and learning examples completed throughout the semester.
 - ProjectWork includes all the files specific to the main project itself.
 - A Make file.

## What is SHA512 and Why it's important

SHA512 is a particular cryptographic hashing function,  derived from its parent SHA-2. It can be considered very similar to its sister function sha256 except it's messages are broken up into larger 1024-bit chunks. A **hash function** is an algorithm that maps data to a bit array of a set size. The main use of this is that they are near impossible to revert. By this I mean that to find the original message of the subsequent hash digest, you would need a quantum computer running for 1000s of years checking combinations in order to find the original message. The uses of this are many in scope, one such popular use in that of hashing the vlues of a cryptocurrency in order to more securely store a block in a blockchains message value as a hash. Sha-256 and Sha-512 are very similar. The main difference being the shift amounts and constants. They are also execute a different number of rounds. Another practical application of sha-512 is for hashing passwords for an added layer of security. Internet security is a proverbial warzone when it comes to protecting users data, and being able to hash users data as securely as sha-512 does is a very valuable asset.

## Why we cant just reverse SHA-512 to retrieve the original message

A good description of why a hash cannot be reverse is if you take the result of the *sum* of two numbers [4]. You are given the result but *not* the two numbers used. If the number is for example 200, then there are *n power the result* possibilities of combinations. The idea is that if you know the hash value it is extrememly difficult to determine the original message or input. Hundreds of one-way operations take place on the "message/input" simultaneously and the results from earlier operations are used in later operations. So when you try to reverse it (and guess the two inputs in a later stage), the only way to tell if the numbers you are guessing are correct is to work all the way back through the hash algorithm. Guesses made later down the stage have their own rate of error when you guess, this has a butterfly affect on any subsequent guesses you make, thus reducing your correctness and increases the amount of times you must guess again. There are simply too many combinations of numbers, and the more combinations, the more secure it is.

## Can you design an algorithm that, given enough time, will find input messages that give each of the possible 512-bit strings?

A feature of SHA is that it makes use of non-linear operations AND linear operations. This means that attempting to use algebreic methods to solve the input from the output hash is extremely difficult. It serves to add randomness and non-logic to the digested hash. While it is "theoretically possible" to find the given input messages, the sheer number of attempts it would take as outlined above, makes such an event a non-issue when considering what hashing algorithm to use.
  
Given enough time, assuming that time is infinite then the direct answer is yes, however there will never be a scenario where time is infinite so the answer is then no you could no feasibly create an algorithm to find the input messages with our current technological limitations and the time it takes them to check potential combinations.

## How difficult is it to find a hash digest beginning with at least twelve zeros?





## *References*
 - [1] Sha-512; BitcoinWiki; https://en.bitcoinwiki.org/wiki/SHA-512
 - [2] Hashing blocks; From a blockchain perspective; https://blockgeeks.com/guides/what-is-hashing/#:~:text=In%20simple%20terms%2C%20hashing%20means,output%20of%20a%20fixed%20length.
 - [3]  sha-2; Wiki; https://en.wikipedia.org/wiki/SHA-2
 - [4] Numbers example drawn from StackExchange question; Crypto StackExchange; https://crypto.stackexchange.com/questions/45377/why-cant-we-reverse-hashes
 - [5] Cryptographic hash functions; tutorialspoint; helpful for research;  https://www.tutorialspoint.com/cryptography/cryptography_hash_functions.htm
 - [6] SHA512 hash calculator; For testing my input file on SHA512.c; https://abunchofutils.com/u/computing/sha512-hash-calculator/
 - [7] Understanding command line args in c; https://www.cprogramming.com/tutorial/c/lesson14.html
 - [8] Info for utilizing uncommon data types in c; tutorialspoint; https://www.tutorialspoint.com/cprogramming/c_data_types.htm
