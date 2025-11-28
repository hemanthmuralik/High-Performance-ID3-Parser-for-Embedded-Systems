#include <stdio.h>
#include "tag_reader.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <mp3_file>\n", argv[0]);
        return 1;
    }

    TagData tag;
    if (read_mp3_tags(argv[1], &tag) == 0) {
        print_tag_info(&tag);
    } else {
        printf("Failed to read MP3 tags.\n");
    }

    return 0;
}
