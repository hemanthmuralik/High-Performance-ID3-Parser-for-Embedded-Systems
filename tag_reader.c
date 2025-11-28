#include <stdio.h>
#include <string.h>
#include "tag_reader.h"

int read_mp3_tags(const char *filename, TagData *tag) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) return -1;

    fseek(fp, -128, SEEK_END);
    char buffer[128];
    fread(buffer, 1, 128, fp);
    fclose(fp);

    if (strncmp(buffer, "TAG", 3) != 0) return -1;

    memcpy(tag->title, buffer + 3, 30); tag->title[30] = '\0';
    memcpy(tag->artist, buffer + 33, 30); tag->artist[30] = '\0';
    memcpy(tag->album, buffer + 63, 30); tag->album[30] = '\0';
    memcpy(tag->year, buffer + 93, 4); tag->year[4] = '\0';
    memcpy(tag->comment, buffer + 97, 30); tag->comment[30] = '\0';
    tag->genre = buffer[127];

    return 0;
}

void print_tag_info(const TagData *tag) {
    printf("Title   : %s\n", tag->title);
    printf("Artist  : %s\n", tag->artist);
    printf("Album   : %s\n", tag->album);
    printf("Year    : %s\n", tag->year);
    printf("Comment : %s\n", tag->comment);
    printf("GenreID : %d\n", tag->genre);
}
