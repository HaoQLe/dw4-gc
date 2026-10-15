#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804CF94C[];
extern char lbl_804CF954[];
extern char lbl_804CF95C[];
extern char lbl_804CF964[];
extern void *beXboxImage24k_meta;
}
extern "C" {
void beXboxImage24k_fieldInit(){
 void *value0=beXboxImage24k_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF94C,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 meta_setupFields(value0,lbl_804CF954,lbl_804CF95C,lbl_804CF964,value1);
}
}
#pragma pop
