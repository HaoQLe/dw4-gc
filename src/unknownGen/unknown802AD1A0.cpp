#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igMovieManager_metaObject();
extern char lbl_804CDD64[];
extern char lbl_804CDD68[];
extern char lbl_804CDD6C[];
extern char lbl_804CDD70[];
extern void *igMovieRenderer_meta;
}
extern "C" {
void igMovieRenderer_fieldInit(){
 void *value0=igMovieRenderer_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CDD64,1);
 void *value2=meta_field(value0,value1);
 void *value3=igMovieManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 meta_setupFields(value0,lbl_804CDD68,lbl_804CDD6C,lbl_804CDD70,value1);
}
}
#pragma pop
