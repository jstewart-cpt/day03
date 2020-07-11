void    ft_putchar(char a) {
    write(1, &a, 1);
}
int     ft_strlen(char *str) {
    int     inp;
    inp = 0;
    while (str[inp] != 0)
    {
        inp++;
    }
    return inp;
}