<h1><b>Custom printf</b></h1>

<b>Description</b>

This function `_printf` can handle four conversion specifiers (%c, %s, %i, %d) and can also handle "%%", which prints a percent sign. Formatted output is printed to stdout, and the return value is the number of characters printed.  

<b>Usage</b>

When a string and any number of arguments are passed to `_printf`, the string will be formatted, printed to stdout, and subsequent arguments will be plugged into corresponding format specifiers in the inital string.

<b>Flowchart</b>

Flowchart of what `_printf` is doing under the hood:
![Screenshot](https://github.com/blythelockhart/holbertonschool-printf/blob/5b81dffd7c3b7851fd2dc2062e2da1a987321413/_printf_flowchart.png)

<b>Authors</b>

* Blythe Lockart <[blythelockart](https://github.com/blythelockhart)>
* Dillon Gage <[dillonjgage](https://github.com/dillonjgage)>

<b>Acknowledgements</b>

The `_printf` function emulates functionality of the C standard library
function `printf`.

This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information, visit [this link](https://www.holbertonschool.com/).
