# Implementacion de estructuras y algoritmos
![](https://img.shields.io/badge/code-c++-blue.svg?style=flat-square)
## competitive_coding :heart: (cheat sheet :tea:) 
Necesito tener una biblioteca de todas las estructuras de datos y algoritmos utiles para avanzar en _HackerRank_ y en _UVA_. Las referencias y estructura estan basadas del libro __Competitive Programming 3__.

<!-- START doctoc -->
<!-- END doctoc -->

## General

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

### Shortcuts
#### typedef:
```
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int>
```
#### Compresiones
```
ans = a ? b : c;         // if(a) ans = b ; else ans = c;
ans += val;              // ans = ans + val;
index = (index+1)%n;     // index++; if(index>n) index = 0;
index = (index+n-1)%n;   // index--; if(index<0) index = n-1;
int ans = (int)((double)d + 0.5); // redondeo al int mas cercano
ans = min(ans, new_computation); // Mejor que comparar if(min > ans) ans = min;
ans <?= new_computation; // 
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
