# Задания по программированию

## Задание 1: Факториал

Напишите функцию, которая

* называется `Factorial`
* возвращает `int`
* принимает `int` и возвращает факториал своего аргумента. Гарантируется, что аргумент функции по модулю не превышает 10. Для отрицательных аргументов функция должна возвращать 1.

|        Аргумент функции        |            Результат           |
|:------------------------------:|:------------------------------:|
| 1                              | 1                              |
| -2                             | 1                              |
| 4                              | 24                             |

## Задание 2: Палиндром

Напишите функцию, которая

* называется `IsPalindrom`
* возвращает `bool`
* принимает параметр типа string и возвращает, является ли переданная строка палиндромом.

Палиндром - это слово или фраза, которые одинаково читаются слева направо и справа налево.

|        Аргумент функции        |            Результат           |
|:------------------------------:|:------------------------------:|
| madam                          | true                           |
| gentleman                      | false                          |

## Задание 3: Отбор палиндромов

Напишите функцию, которая

* называется `PalindromFilter`
* возвращает `vector<string>`
* принимает `vector<string> words` и `int minLength` и возвращает все строки из вектора words, которые являются палиндромами и имеют длину не меньше `minLength`.

Входной вектор содержит не более 100 строк, длина каждой строки не больше 100 символов.

|              words             |            minLength           |            результат           |
|:------------------------------:|:------------------------------:|:------------------------------:|
| abacaba, aba                   | 5                              |  abacaba                       |
| abacaba, aba                   | 2                              |  abacaba, aba                  |
| weew, bro, code                | 4                              |  weew                          |

## Задание 4: Максимизатор

Напишите функцию `UpdateIfGreater`, которая принимает два целочисленных аргумента: `first` и `second`. Если `first` оказался больше `second`, Ваша функция должна записывать в `second` значение параметра `first`. При этом изменение параметра `second` должно быть видно на вызывающей стороне.

```cpp
int a = 4;
int b = 2;
UpdateIfGreater(a, b);
// b должно стать равно 4
```

## Задание 5: Перемещение строк

Напишите функцию `MoveStrings`, которая принимает два вектора строк, `source` и `destination`, и дописывает все строки из первого вектора в конец второго. После выполнения функции вектор `source` должен оказаться пустым.

Чтобы очистить содержимое вектора, надо вызвать у него метод clear:

```cpp
vector<string> words = {"hey", "hi"};
words.clear();
// Теперь вектор words пуст
```

```cpp
vector<string> source = {"a", "b", "c"};
vector<string> destination = {"z"};
MoveStrings(source, destination);
// source должен оказаться пустым
// destination должен содержать строки "z", "a", "b", "c" именно в таком порядке
```

## Задание 6: Разворот последовательности

Реализуйте функцию `void Reverse(vector<int>& v)`, которая переставляет элементы вектора в обратном порядке.

```cpp
vector<int> numbers = {1, 5, 3, 4, 2};
Reverse(numbers);
// numbers должен оказаться равен {2, 4, 3, 5, 1}
```

## Задание 7: Разворот последовательности — 2

Реализуйте функцию `vector<int> Reversed(const vector<int>& v)`, возвращающую копию вектора v, в которой числа переставлены в обратном порядке.

|           Вектор v             |        Результат функции       |
|:------------------------------:|:------------------------------:|
| 1, 5, 3, 4, 2                  | 2, 4, 3, 5, 1                  |

## Задание 8: Средняя температура

Даны значения температуры, наблюдавшиеся в течение `N` подряд идущих дней. Найдите номера дней (в нумерации с нуля) со значением температуры выше среднего арифметического за все `N` дней.

Гарантируется, что среднее арифметическое значений температуры является целым числом.

### Формат ввода в задании 8

Вводится число `N`, затем `N` неотрицательных целых чисел — значения температуры в 0-й, 1-й, ... (N−1)-й день.

```console
5
7 6 3 0 9
```

### Формат вывода в задании 8

Первое число `K` — количество дней, значение температуры в которых выше среднего арифметического. Затем `K` целых чисел — номера этих дней.

```console
3
0 1 4
```

## Задание 9: Очередь

Люди стоят в очереди, но никогда не уходят из её начала, зато могут приходить в конец и уходить оттуда. Более того, иногда некоторые люди могут прекращать и начинать беспокоиться из-за того, что очередь не продвигается.

Реализуйте обработку следующих операций над очередью:

* `WORRY i`: пометить i-го человека с начала очереди (в нумерации с 0) как беспокоящегося;
* `QUIET i`: пометить i-го человека как успокоившегося;
* `COME k`: добавить k спокойных человек в конец очереди;
* `COME -k`: убрать k человек из конца очереди;
* `WORRY_COUNT`: узнать количество беспокоящихся людей в очереди.

Изначально очередь пуста.

### Формат ввода в задании 9

Количество операций `Q`, затем описания операций.

Для каждой операции `WORRY i` и `QUIET i` гарантируется, что человек с номером i существует в очереди на момент операции.

Для каждой операции `COME -k` гарантируется, что k не больше текущего размера очереди.

```console
8
COME 5
WORRY 1
WORRY 4
COME -2
WORRY_COUNT
COME 3
WORRY 3
WORRY_COUNT
```

### Формат вывода в задании 9

Для каждой операции `WORRY_COUNT` выведите одно целое число — количество беспокоящихся людей в очереди.

```console
1
2
```

## Задание 10: Ежемесячные дела

У каждого из нас есть ежемесячные дела, каждое из которых нужно выполнять в конкретный день каждого месяца: оплата счетов за электричество, абонентская плата за связь и пр. Вам нужно реализовать работу со списком таких дел, а именно, обработку следующих операций:

### Операция `ADD i s`

Добавить дело с названием `s` в день `i`.

### Операция `NEXT`

Закончить текущий месяц и начать новый. Если новый месяц имеет больше дней, чем текущий, добавленные дни изначально не будут содержать дел. Если же в новом месяце меньше дней, дела со всех удаляемых дней необходимо будет переместить на последний день нового месяца.

Обратите внимание, что количество команд этого типа может превышать 11.

### Операция  `DUMP i`

Вывести все дела в день `i`.

### Указание к заданию 10

Изначально текущим месяцем считается январь. Количества дней в месяцах соответствуют Григорианскому календарю с той лишь разницей, что в феврале всегда 28 дней.

Для дописывания всех элементов вектора `v2` в конец вектора `v1` удобно использовать метод `insert`:

```cpp
v1.insert(end(v1), begin(v2), end(v2));
```

### Формат ввода в задании 10

Сначала число операций `Q`, затем описания операций.

Названия дел `s` уникальны и состоят только из латинских букв, цифр и символов подчёркивания. Номера дней `i` являются целыми числами и нумеруются от 1 до размера текущего месяца.

```console
12
ADD 5 Salary
ADD 31 Walk
ADD 30 WalkPreparations
NEXT
DUMP 5
DUMP 28
NEXT
DUMP 31
DUMP 30
DUMP 28
ADD 28 Payment
DUMP 28
```

### Формат вывода в задании 10

Для каждой операции типа `DUMP` в отдельной строке выведите количество дел в соответствующий день, а затем их названия, разделяя их пробелом. Порядок вывода дел в рамках каждой операции значения не имеет.

```console
1 Salary
2 WalkPreparations Walk
0
0
2 WalkPreparations Walk
3 WalkPreparations Walk Payment
```

## Задание 11: Анаграммы

Слова называются анаграммами друг друга, если одно из них можно получить перестановкой букв в другом. Например, слово «eat» можно получить перестановкой букв слова «tea», поэтому эти слова являются анаграммами друг друга. Даны пары слов, проверьте для каждой из них, являются ли слова этой пары анаграммами друг друга.

Один из способов проверки того, являются ли слова анаграммами друг друга, заключается в следующем. Для каждого слова с помощью словаря подсчитаем, сколько раз в нём встречается каждая буква. Если для обоих слов эти словари равны (а это проверяется с помощью обычного оператора ==), то слова являются анаграммами друг друга, в противном случае не являются.

При этом построение такого словаря по слову удобно вынести в отдельную функцию `BuildCharCounters`.

### Формат ввода в задании 11

Сначала дано число пар слов `N`, затем в `N` строках содержатся пары слов, которые необходимо проверить. Гарантируется, что все слова состоят лишь из строчных латинских букв.

```console
3
eat tea
find search
master stream
```

### Формат вывода в задании 11

Выведите _N_ строк: для каждой введённой пары слов **YES**, если эти слова являются анаграммами, и **NO** в противном случае.

```console
YES
NO
YES
```

## Задание 12: Справочник столиц

Реализуйте справочник столиц стран.

На вход программе поступают следующие запросы:

* `CHANGE_CAPITAL country new_capital` — изменение столицы страны `country` на `new_capital`, либо добавление такой страны с такой столицей, если раньше её не было.
* `RENAME old_country_name new_country_name` — переименование страны из `old_country_name` в `new_country_name`.
* `ABOUT country` — вывод столицы страны `country`.
* `DUMP` — вывод столиц всех стран.

### Формат ввода в задании 12

В первой строке содержится количество запросов `Q`, в следующих `Q` строках — описания запросов. Все названия стран и столиц состоят лишь из латинских букв, цифр и символов подчёркивания.

### Формат вывода в задании 12

Выведите результат обработки каждого запроса:

В ответ на запрос `CHANGE_CAPITAL country new_capital` выведите

* Introduce new country _country_ with capital _new_capital_, если страны country раньше не существовало;
* Country _country_ hasn't changed its capital, если страна `country` до текущего момента имела столицу `new_capital`;
* Country _country_ has changed its capital from _old_capital_ to _new_capital_, если страна `country` до текущего момента имела столицу `old_capital`, название которой не совпадает с названием `new_capital`.

В ответ на запрос `RENAME old_country_name new_country_name` выведите

* Incorrect rename, skip, если новое название страны совпадает со старым, страна _old_country_name_ не существует или страна _new_country_name_ уже существует;
* Country _old_country_name_ with capital _capital_ has been renamed to _new_country_name_, если запрос корректен и страна имеет столицу `capital`.

В ответ на запрос `ABOUT country` выведите

* Country _country_ doesn't exist, если страны с названием `country` не существует;
* Country _country_ has capital _capital_, если страна `country` существует и имеет столицу `capital`.

В ответ на запрос `DUMP` выведите

* There are no countries in the world, если пока не было добавлено ни одной страны;
* разделённые пробелами пары `country/capital`, описывающие столицы всех стран и упорядоченные по названию страны, если в мире уже есть хотя бы одна страна.

### Пример 1 к заданию 12

Ввод

```console
6
CHANGE_CAPITAL RussianEmpire Petrograd
RENAME RussianEmpire RussianRepublic
ABOUT RussianRepublic
RENAME RussianRepublic USSR
CHANGE_CAPITAL USSR Moscow
DUMP
```

Вывод

```console
Introduce new country RussianEmpire with capital Petrograd
Country RussianEmpire with capital Petrograd has been renamed to RussianRepublic
Country RussianRepublic has capital Petrograd
Country RussianRepublic with capital Petrograd has been renamed to USSR
Country USSR has changed its capital from Petrograd to Moscow
USSR/Moscow
```

### Пример 2 к заданию 12

Ввод

```console
24
RENAME FakeCountry FarFarAway
ABOUT FarFarAway
DUMP
CHANGE_CAPITAL TsardomOfRussia Moscow
CHANGE_CAPITAL TsardomOfRussia Moscow
CHANGE_CAPITAL ColonialBrazil Salvador
CHANGE_CAPITAL TsardomOfRussia SaintPetersburg
RENAME TsardomOfRussia RussianEmpire
CHANGE_CAPITAL RussianEmpire Moscow
CHANGE_CAPITAL RussianEmpire SaintPetersburg
CHANGE_CAPITAL ColonialBrazil RioDeJaneiro
DUMP
RENAME ColonialBrazil EmpireOfBrazil
ABOUT RussianEmpire
RENAME EmpireOfBrazil UnitedStatesOfBrazil
CHANGE_CAPITAL RussianEmpire Petrograd
RENAME RussianEmpire RussianRepublic
RENAME RussianRepublic USSR
CHANGE_CAPITAL USSR Moscow
CHANGE_CAPITAL UnitedStatesOfBrazil Brasilia
RENAME UnitedStatesOfBrazil FederativeRepublicOfBrazil
ABOUT RussianEmpire
DUMP
RENAME USSR USSR
```

Вывод

```console
Incorrect rename, skip
Country FarFarAway doesn't exist
There are no countries in the world
Introduce new country TsardomOfRussia with capital Moscow
Country TsardomOfRussia hasn't changed its capital
Introduce new country ColonialBrazil with capital Salvador
Country TsardomOfRussia has changed its capital from Moscow to SaintPetersburg
Country TsardomOfRussia with capital SaintPetersburg has been renamed to RussianEmpire
Country RussianEmpire has changed its capital from SaintPetersburg to Moscow
Country RussianEmpire has changed its capital from Moscow to SaintPetersburg
Country ColonialBrazil has changed its capital from Salvador to RioDeJaneiro
ColonialBrazil/RioDeJaneiro RussianEmpire/SaintPetersburg
Country ColonialBrazil with capital RioDeJaneiro has been renamed to EmpireOfBrazil
Country RussianEmpire has capital SaintPetersburg
Country EmpireOfBrazil with capital RioDeJaneiro has been renamed to UnitedStatesOfBrazil
Country RussianEmpire has changed its capital from SaintPetersburg to Petrograd
Country RussianEmpire with capital Petrograd has been renamed to RussianRepublic
Country RussianRepublic with capital Petrograd has been renamed to USSR
Country USSR has changed its capital from Petrograd to Moscow
Country UnitedStatesOfBrazil has changed its capital from RioDeJaneiro to Brasilia
Country UnitedStatesOfBrazil with capital Brasilia has been renamed to FederativeRepublicOfBrazil
Country RussianEmpire doesn't exist
FederativeRepublicOfBrazil/Brasilia USSR/Moscow
Incorrect rename, skip
```

## Задание 13: Автобусные остановки - 1

Реализуйте систему хранения автобусных маршрутов. Вам нужно обрабатывать следующие запросы:

* `NEW_BUS bus stop_count stop1 stop2 ...` — добавить маршрут автобуса с названием `bus` и `stop_count` остановками с названиями `stop1`, `stop2`, ...
* `BUSES_FOR_STOP stop` — вывести названия всех маршрутов автобуса, проходящих через остановку `stop`.
* `STOPS_FOR_BUS bus` — вывести названия всех остановок маршрута `bus` со списком автобусов, на которые можно пересесть на каждой из остановок.
* `ALL_BUSES` — вывести список всех маршрутов с остановками.

### Формат ввода в задании 13

В первой строке ввода содержится количество запросов `Q`, затем в `Q` строках следуют описания запросов.

Гарантируется, что все названия маршрутов и остановок состоят лишь из латинских букв, цифр и знаков подчёркивания.

Для каждого запроса `NEW_BUS bus stop_count stop1 stop2 ...` гарантируется, что маршрут `bus` отсутствует, количество остановок больше 0, а после числа `stop_count` следует именно такое количество названий остановок, причём все названия в каждом списке различны.

### Формат вывода в задании 13

Для каждого запроса, кроме `NEW_BUS`, выведите соответствующий ответ на него:

* На запрос `BUSES_FOR_STOP stop` выведите через пробел список автобусов, проезжающих через эту остановку, в том порядке, в котором они создавались командами `NEW_BUS`. Если остановка `stop` не существует, выведите No stop.
* На запрос `STOPS_FOR_BUS bus` выведите описания остановок маршрута `bus` в отдельных строках в том порядке, в котором они были заданы в соответствующей команде `NEW_BUS`. Описание каждой остановки `stop` должно иметь вид Stop _stop_: _bus1_ _bus2_ ..., где `bus1 bus2 ...` — список автобусов, проезжающих через остановку `stop`, в порядке, в котором они создавались командами `NEW_BUS`, за исключением исходного маршрута `bus`. Если через остановку `stop` не проезжает ни один автобус, кроме `bus`, вместо списка автобусов для неё выведите no interchange. Если маршрут `bus` не существует, выведите No bus.
* На запрос `ALL_BUSES` выведите описания всех автобусов в алфавитном порядке. Описание каждого маршрута `bus` должно иметь вид Bus _bus_: _stop1_ _stop2_ ..., где `stop1 stop2 ...` — список остановок автобуса `bus` в порядке, в котором они были заданы в соответствующей команде `NEW_BUS`. Если автобусы отсутствуют, выведите No buses.

### Пример к заданию 13

Ввод

```console
10
ALL_BUSES
BUSES_FOR_STOP Marushkino
STOPS_FOR_BUS 32K
NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo
NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
BUSES_FOR_STOP Vnukovo
NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo
STOPS_FOR_BUS 272
ALL_BUSES
```

Вывод

```console
No buses
No stop
No bus
32 32K
Stop Vnukovo: 32 32K 950
Stop Moskovsky: no interchange
Stop Rumyantsevo: no interchange
Stop Troparyovo: 950
Bus 272: Vnukovo Moskovsky Rumyantsevo Troparyovo
Bus 32: Tolstopaltsevo Marushkino Vnukovo
Bus 32K: Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
Bus 950: Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
```

## Задание 14: Автобусные остановки — 2

В этой задаче вам нужно присваивать номера автобусным маршрутам.

А именно, для каждого маршрута, заданного набором названий остановок, нужно либо выдать новый номер (первому маршруту — 1, второму — 2 и т. д.), либо вернуть номер существующего маршрута, которому соответствует такой набор остановок.

Наборы остановок, полученные друг из друга перестановкой остановок, считаются различными (см. пример).

### Указание к заданию 14

В C++ ключом словаря может быть не только число или строка, но и другой контейнер, например, `vector`.

### Формат ввода в задании 14

Сначала вводится количество запросов `Q`, затем `Q` описаний запросов.

Каждый запрос представляет собой положительное количество остановок `N`, за которым следуют разделённые пробелом `N` различных названий остановок соответствующего маршрута. Названия остановок состоят лишь из латинских букв и символов подчёркивания.

### Формат вывода в задании 14

Выведите ответ на каждый запрос в отдельной строке.

Если маршрут с данным набором остановок уже существует, в ответ на соответствующий запрос выведите Already exists for _i_, где `i` — номер маршрута с таким набором остановок. В противном случае нужно выделить введённому набору остановок новый номер `i` и вывести его в формате New bus _i_.

Ввод

```console
4
2 Marushkino Kokoshkino
1 Kokoshkino
2 Marushkino Kokoshkino
2 Kokoshkino Marushkino
```

Вывод

```console
New bus 1
New bus 2
Already exists for 1
New bus 3
```

### Замечание к заданию 14

Будьте внимательны при обновлении словаря: если одновременно в одном выражении вычислять размер словаря и добавлять в него новый элемент, результат может отличаться от ожидаемого на единицу. Чтобы этого избежать, используйте временную переменную.

Например, вместо кода

```cpp
map<string, int> m;
// ...
m["two"] = m.size();
// что нужно сделать раньше: вычислить size или добавить новый ключ?
```

стоит написать такой код:

```cpp
map<string, int> m;
// ...
int new_value = m.size();
m["two"] = new_value;
// теперь всё однозначно: нужен размер до добавления элемента
```

## Задание 15: Количество уникальных строк

Дан набор строк. Найдите количество уникальных строк в этом наборе.

### Формат ввода в задании 15

Сначала вводится количество строк `N`, затем — сами `N` строк, разделённые пробелом. Все строки состоят лишь из латинских букв, цифр и символов подчёркивания.

### Формат вывода в задании 15

Выведите единственное целое число — количество уникальных строк в данном наборе.

### Пример к заданию 15

Ввод

```console
6
first
second
first
third
second
second
```

Вывод

```console
3
```

## Задание 16: Множество значений словаря

Напишите функцию `BuildMapValuesSet`, принимающую на вход словарь `map<int, string>` и возвращающую множество значений этого словаря:

```cpp
set<string> BuildMapValuesSet(const map<int, string>& m) {
  // ...
}
```

### Пример к заданию 16

Код

```cpp
set<string> values = BuildMapValuesSet({
    {1, "odd"},
    {2, "even"},
    {3, "odd"},
    {4, "even"},
    {5, "odd"}
});

for (const string& value : values) {
  cout << value << endl;
}
```

Вывод

```cpp
even
odd
```

## Задание 17: Синонимы

Два слова называются синонимами друг друга, если они имеют похожие значения. Реализуйте следующие операции над словарём синонимов:

* `ADD word1 word2` — добавить в словарь пару синонимов (`word1`, `word2`).
* `COUNT word` — узнать количество синонимов слова `word`.
* `CHECK word1 word2` — проверить, являются ли слова `word1` и `word2` синонимами. Слова `word1` и `word2` считаются синонимами, если среди запросов `ADD` был хотя бы один запрос `ADD word1 word2` или `ADD word2 word1`.

### Формат ввода в задании 17

Сначала вводится количество запросов `Q`, затем `Q` строк с описаниями запросов. Гарантируется, что в каждом запросе `CHECK` и `ADD` слова `word1` и `word2` различны. Все слова состоят лишь из латинских букв, цифр и символов подчёркивания.

### Формат вывода в задании 17

Для каждого запроса в соответствующей строке выведите ответ на него:

* В ответ на запрос `COUNT word` выведите единственное целое число — количество синонимов слова `word`.
* В ответ на запрос `CHECK word1 word2` выведите строку _YES_, если `word1` и `word2` являются синонимами, и _NO_ в противном случае.

### Пример к заданию 17

Ввод

```console
8
ADD program code
COUNT cipher
ADD code cipher
COUNT code
COUNT program
CHECK code program
CHECK program cipher
CHECK cpp java
```

Вывод

```console
0
2
1
YES
NO
NO
```

## Задание 18: Автобусные остановки — 3

В этой задаче вам нужно присваивать номера автобусным маршрутам.

А именно, для каждого маршрута, заданного множеством названий остановок, нужно либо выдать новый номер (первому маршруту — 1, второму — 2 и т. д.), либо вернуть номер существующего маршрута, которому соответствует такое множество остановок.

В отличие от задачи «Автобусные остановки — 2», наборы остановок, которые можно получить друг из друга перестановкой элементов или добавлением/удалением повторяющихся, следует считать одинаковыми.

### Формат ввода в задании 18

Сначала вводится количество запросов `Q`, затем `Q` описаний запросов.

Каждый запрос представляет собой положительное количество остановок `N`, за которым следуют разделённые пробелом `N` названий остановок соответствующего маршрута (не обязательно различных). Названия остановок состоят лишь из латинских букв и символов подчёркивания.

### Формат вывода в задании 18

Выведите ответ на каждый запрос в отдельной строке.

Если маршрут с данным набором остановок уже существует, в ответ на соответствующий запрос выведите Already exists for _i_, где `i` — номер маршрута с таким набором остановок. В противном случае нужно выделить введённому набору остановок новый номер `i` и вывести его в формате New bus _i_.

Ввод

```console
5
2 Marushkino Kokoshkino
1 Kokoshkino
2 Marushkino Kokoshkino
2 Kokoshkino Marushkino
2 Kokoshkino Kokoshkino
```

Вывод

```console
New bus 1
New bus 2
Already exists for 1
Already exists for 1
Already exists for 2
```

### Замечание к заданию 18

Будьте внимательны при обновлении словаря: если одновременно в одном выражении вычислять размер словаря и добавлять в него новый элемент, результат может отличаться от ожидаемого на единицу. Чтобы этого избежать, используйте временную переменную.

Например, вместо кода

```cpp
map<string, int> m;
// ...
m["two"] = m.size();
// что нужно сделать раньше: вычислить size или добавить новый ключ?
```

стоит написать такой код:

```cpp
map<string, int> m;
// ...
int new_value = m.size();
m["two"] = new_value;
// теперь всё однозначно: нужен размер до добавления элемента
```
