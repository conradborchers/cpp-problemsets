# Useful code snippets

## C++

### Vectors

* concatenating two vectors
> a.insert(a.end(), b.begin(), b.end());

* sorting a vector
> sort(v.begin(), v.end()); 

* sum of a vector
> accumulate(v.begin(), v.end(), 0);

## Python

* custom sort
> l.sort(key=lambda x : len(x), reverse=True)

* if else in one line
> print("YES") if okay else print("NO")

* map lambda function to list elements
> list(map(lambda x : True if x%2 != 0 else False, l))

* regex split with import re
> l = re.split("A|E|I|O|U", s)
