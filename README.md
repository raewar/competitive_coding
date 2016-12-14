# Implementacion de estructuras y algoritmos
![](https://img.shields.io/badge/code-c++-blue.svg?style=flat-square)
## competitive_coding :heart: (cheat sheet :tea:) 
Necesito tener una biblioteca de todas las estructuras de datos y algoritmos utiles para avanzar en _HackerRank_ y en _UVA_. Las referencias y estructura estan basadas del libro __Competitive Programming 3__.

## Contenidos
- Shortcuts

### Includes
```
#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <stack>
#include <queue>
#include <vector>
#include <list>
```

### 1. Shortcuts
standar typedef:
```
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int>
```

### IO
considerar definir `ios::sync_with_stdio(false);`.

#### C++String

__leer lineas__
```
int a;
string in;
cin >> a;
cin.ignore(); //ignores an end of line character
getline(cin, in);
```
__transformar char arr__
```
string str = "Un string";
char target[1024];
strcpy(target, cppstr.c_str());
```
#### C String
```
char in[50];
gets(in);
```
