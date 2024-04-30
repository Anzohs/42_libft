<h1>Libft Project at 42</h1>

![](https://img.shields.io/badge/Grade-122-green)


## Files

### Makefile
- [Makefile](https://github.com/Anzohs/42_libft/blob/main/Makefile)


-Compile the library
<details>
  <summary>How to Compile</summary>
  
```bash
#compile 
make
#clean the .o files
make clean
#clean all the files and the library
make fclean
```

</details>

-How to include the lib in C
<details>
  <summary>Include the lib in C file</summary>
  
```C
//We include the header file
#include 'libft.h' 

//example with split
int  main(void)
{
  char **p = ft_split("Hello World", ' ');
}
```
</details>

-How to run the main with the lib
<details>
  <summary>How to Compile the main with the library</summary>
  
```bash
cc main.c libft.a
```

</details>
