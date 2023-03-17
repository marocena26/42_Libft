int main() {
    char dest = "Hola";
    char src = " Mundo!";
    size_t dest_size = sizeof(dest);

    strlcat(dest, src, dest_size);

    printf("%s\n", dest);

    return 0;
}
