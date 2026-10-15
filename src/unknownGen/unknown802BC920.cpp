#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beXboxImage24k_fieldTypes[];
extern char beXboxImage24k_fieldNames[];
extern char beXboxImage24k_fieldStorage[];
extern char beXboxImage24k_fieldOffsets[];
extern void *beXboxImage24k_meta;
}
extern "C" {
void beXboxImage24k_fieldInit(){
 void *value0=beXboxImage24k_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beXboxImage24k_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 meta_setupFields(value0,beXboxImage24k_fieldNames,beXboxImage24k_fieldStorage,beXboxImage24k_fieldOffsets,value1);
}
}
#pragma pop
