# Implementacion de estructuras y algoritmos
![](https://img.shields.io/badge/code-c++-blue.svg?style=flat-square)
## competitive_coding :heart: (cheat sheet :tea:) 
Necesito tener una biblioteca de todas las estructuras de datos y algoritmos utiles para avanzar en _HackerRank_ y en _UVA_. Las referencias y estructura estan basadas del libro __Competitive Programming 3__.

<!-- START doctoc -->
<!-- END doctoc -->

# General

## Includes
```c++
#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>		 // sort, lower_bound, min, max, next_permutation
#include <bitset> 			 // Criba de Eratostenes
#include <string>   		 // C++ string
#include <cmath> 			 // abs, pow, etc
#include <ctype.h> 			 // rutinas de char
#include <climits>
#include <stack>
#include <queue> 			 // queue y priority_queue
#include <vector>
#include <list>
```

## Shortcuts
### typedef:
```c++
typedef long long 		    ll;
typedef pair<int, int>      ii;
typedef vector<ii> 			vii;
typedef vector<int> 		vi;
typedef map<int, int>       mii;
typedef set<int>            si;
typedef map<string, int>    msi;
typedef vector<bool>        vb;
typedef long double         ld;
```
### Compresiones
```c++
ans = a ? b : c;         		 // if(a) ans = b ; else ans = c;
ans += val;              		 // ans = ans + val;
index = (index+1)%n;     		 // index++; if(index>n) index = 0;
index = (index+n-1)%n;   		 // index--; if(index<0) index = n-1;
int ans = (int)((double)d + 0.5);// redondeo al int mas cercano
ans = min(ans, new_computation); // Mejor que comparar if(min > ans) ans = min;
ans <?= new_computation; 		 // 
```
### Convenciones
```c++
#define INF 2147483647 // 2^31-1
#define SIZE(c) (int((c).size()))
#define LOG(x) cerr << #x << " = " << x << endl;
```

## IO
Considerar definir `ios::sync_with_stdio(false);` al inicio de `main()`. 

### Input
#### Multiples casos
N casos (explicito)
```c++
int N, a,b;
cin >> N;
while(N--){
  // cin >> a >> b
}
```
Finalizacion con valores especiales
```c++
int a, b;
while(scanf("%d %d", &a, &b), (a||b)){ // stop when a,b == 0
  // cout << a << b;
}
```
EOF
```c++
int a,b;
while(scanf(%d %d, &a,&b) == 2 ){
  // o puede ser while(scanf(%d %d, &a,&b) != EOF )
}
```

#### Numeración de casos y lineas blancas
De la forma _Caso [numero]: [respuesta]_
```c++
while(//){
  if (c > 1) printf("\n"); // Genera espacios entre respuestas < 2
  printf("Caso %d: %d\n", c++, a);
}
```
#### C++String

leer lineas
```c++
int a;
string in;
cin >> a;
cin.ignore(); //ignores an end of line character
getline(cin, in);
```
transformar char arr
```c++
string str = "Un string";
char target[1024];
strcpy(target, str.c_str());
```
#### C String
lectura
```c++
char in[50];
gets(in);
```

transformacion a c++string
```c++
char str[] = "a string";
string target = string(str);
```

### Output
> TODO

## STL
La libreria estandar
>`#include <algorithm>`

### Sort
* O(n*log(n))
```c++
void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
void stable_sort ( RandomAccessIterator first, RandomAccessIterator last, Compare comp );
```
### Binary Search
* O(n)
```c++
bool binary_search (ForwardIterator first, ForwardIterator last, const T& val, Compare comp);
//True si encuentra, false si no
ForwardIterator upper_bound (ForwardIterator first, ForwardIterator last, const T& val);
//Iterador al elemento mayor a val
ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last, const T& val);
//Iterador al elemento menor a val
```
### Permutaciones
> En un `while()`, permite chequear combinaciones.
```c++
bool next_permutation (BidirectionalIterator first, BidirectionalIterator last, Compare comp);
```
### Bitsets
>`#include <bitset>`

### Bitmask
> Mucho mas liviano y rapido que utilizar `vector`, `set` o `bitset`
```c++
// bit operations
#define isOn(i, bitmask)  (bitmask & (1 << i))
#define setOn(i, bitmask) (bitmask | (1 << i))
```
## STL Containers

### Stack (LIFO)
> `#include <stack>`

Caracteristico O(1) en `push()` y `pop()`.

```c++
// vector como container; Copia el contenido de datos a stack
stack<int, vector<int> > stack (datos);

void push (const value_type& val);
void pop();
bool empty() const;
size_type size() const;
const_reference& top() const;
```
### Queue (FIFO)(usado en BFS)
> `#include <queue>`

Caracteristico O(1) en `push()` por atrás y `pop()` por delante.
```c++
priority_queue<int> priority_queue;
priority_queue<int, vector<int>, Comparator_class> priority_queue (datos.begin(), datos.end()); // Copia el contenido de datos a el queue

void push(const value_type& val); // inserta back
void pop(); // remueve top

bool empty() const; // true si empty
size_type size() const;
const_reference top() const; // obtiene la referencia a top()
```
### Deque
> `#include <deque>`

Caracteristico O(1) en `push()` y  `pop()` en ambos lados.
```c++
void push_back (const value_type& val);
void pop_front();
```

### Vector
> `#include <vector>`

```c++
vector<int> vector (100,0);  // 100 elementos en 0
vector.push_back(val);
vector.pop_back();
vector.front();
vector.back();
vector.clear();
vector.size();
```

### List
> `#include <list>`

```c++
list<int> list (100,0);  // 100 elementos en 0
list.push_front(const value_type& val)
list.push_back(const value_type& val)
list.pop_front(): remove the first element.
list.pop_back(): remove the last element.
```

## Estructuras de datos
> TODO
