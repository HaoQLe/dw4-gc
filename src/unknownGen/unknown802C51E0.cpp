#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
void *igMovieManager_metaObject();
extern char lbl_804D0590[];
extern char lbl_804D0598[];
extern char lbl_804D05A0[];
extern char lbl_804D05A8[];
extern void *beMovie_meta;
}
extern "C" {
void beMovie_fieldInit(){
 void *value0=beMovie_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0590,2);
 void *value2=meta_field(value0,value1);
 void *value3=igMovieManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value4,0);
 meta_setupFields(value0,lbl_804D0598,lbl_804D05A0,lbl_804D05A8,value1);
}
}
#pragma pop
