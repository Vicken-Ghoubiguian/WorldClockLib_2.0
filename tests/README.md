# test

Tests folder of the [WorldClockLib_2.0](https://github.com/Vicken-Ghoubiguian/WorldClockLib_2.0) library...

## Contents

* [Presentation](#presentation),
* [Tests](#tests),
    * [Test 1](#test_1),
    * [Test 2](#test_2),
    * [Test 3](#test_3),
    * [Test 4](#test_4),
    * [Test 5](#test_5),
    * [Test 6](#test_6).
* [Conclusion](#conclusion).

<a name="presentation"></a>
## Presentation

<a name="tests"></a>
## Tests

<a name="test_1"></a>
### Test 1 : get date and time of the choosen timezone as a struct worldClock_2_0 value

#### Tested function : [getWorldClock_2_0ForWishedTZ]()

#### Compilation

```bash
gcc test_1.c ../WorldClockLib_2.0/WorldClockLib_2.0.c -o test_1
```

#### Execution

```bash
./test_1
```

<a name="test_2"></a>
### Test 2 : display all existing timezones

#### Tested function : [getListOfAllKnownTZ]()

#### Compilation

```bash
gcc test_2.c ../WorldClockLib_2.0/WorldClockLib_2.0.c -o test_2
```

#### Execution

```bash
./test_2
```

<a name="test_3"></a>
### Test 3 : get date and time of the choosen timezone as a struct like_time_t value

#### Tested function : [getLike_time_tForWishedTZ]()

#### Compilation

```bash
gcc test_3.c ../WorldClockLib_2.0/WorldClockLib_2.0.c -o test_3
```

#### Execution

```bash
./test_3
```

<a name="test_4"></a>
### Test 4 :

#### Tested function : [getListOfAllKnownTZ]()

#### Compilation

#### Execution

<a name="test_5"></a>
### Test 5 : get and display the corresponding interpreter on which the current test is running

#### Tested function : [getCurrentInterpreter]()

#### Compilation

#### Execution

<a name="test_6"></a>
### Test 6 : check if the wished timezome exist

#### Tested function : [isWishedTZExist]()

#### Compilation

#### Execution

<a name="conclusion"></a>
## Conclusion