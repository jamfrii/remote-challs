int hv_necklace(char *s1, char *s2)
{
    int i;
    int j;
    int k;
    char    c;

    i = 0;
    while (s1[i])
        i++;
    j = 0;
    while (j < i)
    {
        k = 0;
        while (s1[k] == s2[k] && s1[k])
            k++;
        if (k == i && s1[k] == 0 && s2[k] == 0)
            return (1);
        c = s1[0];
        s1++;
        s1[i - 1] = c;
        s1[i] = 0;
        j++;
    }
    return (0);
}
