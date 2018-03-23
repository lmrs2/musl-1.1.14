#ifndef ___ANNOTATIONS_H__
#define ___ANNOTATIONS_H__

// tags for function pointers - NOTE: atm the tag must be different from function names
// ADVICE: use
//	- tage name as TAG_<PROJECT>_ANNOTATION, eg TAG_MUSL_file_read
// 	- annotation as tag_<project>_annotation, eg tag_musl_file_read
// this will avoid annotation collision with other modules
#define TAG_MUSL_FILE_READ __attribute__((type_annotate("tag_musl_file_read")))
#define TAG_MUSL_FILE_WRITE __attribute__((type_annotate("tag_musl_file_write")))
#define TAG_MUSL_FILE_CLOSE __attribute__((type_annotate("tag_musl_file_close")))
#define TAG_MUSL_FILE_SEEK __attribute__((type_annotate("tag_musl_file_seek")))

// eg 
#define TAG_PROJECT_XXX __attribute__((type_annotate("tag_project_xxx")))

#endif // ___ANNOTATIONS_H__
