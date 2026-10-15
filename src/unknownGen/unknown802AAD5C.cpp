#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void igFileNameList_registerNow();
extern char lbl_804CD950[];
extern char lbl_804CD958[];
extern char lbl_804CD960[];
extern char lbl_804CD968[];
extern void *igAdxAfsFile_meta;
extern void *igFileNameList_meta;
}
extern "C" {
void igAdxAfsFile_fieldInit(){
 void *meta=igAdxAfsFile_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804CD950,0x2);
 meta_setupFields(meta,lbl_804CD958,lbl_804CD960,lbl_804CD968,field);
}
void *igFileNameList_getMeta(){
 if(!igFileNameList_meta || !(reinterpret_cast<unsigned int *>(igFileNameList_meta)[0x24/4]&4)) igFileNameList_registerNow();
 return igFileNameList_meta;
}
}
#pragma pop
