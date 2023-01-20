# cpp_module_06
### 이슈 관리: [전체 이슈 list](https://github.com/brixxt27/cpp_module_06/issues/1)

## Additional rule
- The following rule applies to the entire module and is not optional.
- For each exercise, the type conversion must be solved using one specific type of casting. Your choice will be checked during defense.

# Exercise 00: Conversion of scalar types
## Usage
```
git clone https://github.com/brixxt27/cpp_module_06.git
cd cpp_module_06/ex00
make
./conversion_of_scalar_types 42.42
```
- 프로그램 인자에 대한 파싱은 std::strtod() 에 의존적이며 가장 처음 찾는 숫자를 다룬다. 숫자를 찾지 못하고, 처음 문자를 만난다면 0으로 이를 인식한다.
## Summary
- Turn-in directory : ex00/
- Files to turn in : Makefile, *.cpp, *.{h, hpp}
- Allowed functions : Any function to convert from a string to an int, a float or a double. This will help, but won’t do the whole job.
## Detail
- scalar 타입(char, int, float, double) 을 std::string으로 받는 프로그램을 작성하세요. char 를 제외하고 decimal notation 을 받습니다.
- char
	- non displayable character는 넣으면 안 된다. 이는 관련 메시지를 띄워야 한다.
- int
	- 0, -42, 42 ...
- float
	- 0.0f, -4.2f, 4.2f...
	- pueudo literals 인 -inff, +inff, nanf 도 처리해야 한다.
- double
	- 0.0, -4.2, 4.2...
	- pueudo literals 인 -inf, +inf, nan 도 처리해야 한다. 
- 처음으로 감지한 literal 값을 실제 타입의 값으로 변환하고, 세 개의 다른 값으로도 명시적으로 변환하여 보여주세요. 결과는 아래와 같습니다.
```
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
```
- 만약 변환이 의미 없거나 오버플로우가 난다면 사용자에게 유형 변환이 불가능하다는 것을 알리는 메시지를 출력하세요. 숫자 제한 및 특수 값을 처리하기 위해 필요한 모든 헤더를 포함합니다.
<bt> </bt>

# Exercise 01: Serialization 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_06.git
cd cpp_module_06/ex01
make
./serialization
```
## Summary
- Turn-in directory : ex01/
- Files to turn in : Makefile, *.cpp, *.{h, hpp}
- Forbidden functions : None
## Detail
```
uintptr_t serialize(Data* ptr);
- It takes a pointer and converts it to the unsigned integer type uintptr_t.

Data* deserialize(uintptr_t raw);
- It takes an unsigned integer parameter and converts it to a pointer to Data.
```
- member를 가지고 있는 Data 구조체를 생성해야 한다.
- 원본값과 deserialize()의 반환값을 비교해야 한다.
- Data 구조체 파일을 넣는 것을 잊지 마라!
<bt> </bt>

# Exercise 02: Identify real type 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_06.git
cd cpp_module_06/ex02
make
./identify_real_type
```
## Summary
- Turn-in directory : ex02/
- Files to turn in : Makefile, *.cpp, *.{h, hpp}
- Forbidden functions : std::typeinfo
## Detail
- public virtual 소멸자만 가지고 있는 Base 클래스를 구현해라. 세 개의 비어 있는 클래스 A, B, C를 구현하여 Base 를 public하게 상속 받아라.
- 네 개의 class는 Orthodox Canonical Form을 맞추지 않아도 된다.
- Base * generate(void);
	- It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free to use anything you like for the random choice implementation.
- void identify(Base* p);
	- It prints the actual type of the object pointed to by p: "A", "B" or "C".
- void identify(Base& p);
	- It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer inside this function is forbidden.
- Including the typeinfo header is forbidden.
- 모두 예상대로 작동하는지 main문을 작성하시오.
<bt> </bt>
