#ifndef TAG_READER_H
#define TAG_READER_H

typedef struct {
    char title[31];
    char artist[31];
    char album[31];
    char year[5];
    char comment[31];
    unsigned char genre;
} TagData;

int read_mp3_tags(const char *filename, TagData *tag);
void print_tag_info(const TagData *tag);

#endif
