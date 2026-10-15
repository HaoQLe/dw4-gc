#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800BAC98();
extern char lbl_804D2194[];
extern char lbl_804D21A0[];
extern char lbl_804D21AC[];
extern char lbl_804D21B8[];
extern void *beFontGeomAttrPair_meta;
}
extern "C" {
void beFontGeomAttrPair_fieldInit(){
 void *value0=beFontGeomAttrPair_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2194,3);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_800BAC98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D21A0,lbl_804D21AC,lbl_804D21B8,value1);
}
}
#pragma pop
