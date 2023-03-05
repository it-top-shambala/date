# Библиотека для работы с датой

## Конструкторы

+ `Date(int year, int month, int day)` - принимает год, месяц и день в числовом обозначении
+ `Date(string date)` - принимает дату в виде строки `dd.mm.yyyy`
+ `Date(string date, char format)` - принимает дату в виде строки и обозначение формата даты (`char format`):
  - `M` - `dd.mm.yyyy`
  - `S` - `yyyy.mm.dd`

## Методы

+ `string ToString()` - возвращает строку даты формата `dd.mm.yyyy`
+ `string ToString(char format)` - возвращает строку в формате в зависимости от значения `char format`:
  - `M` - `dd.mm.yyyy`
  - `S` - `yyyy.mm.dd`
