#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beModelCtrlNode2_metaObject();
extern char lbl_804D0B44[];
extern char lbl_804D0B54[];
extern char lbl_804D0B64[];
extern char lbl_804D0B74[];
extern void *beModelCtrlInfoRideOn_meta;
}
extern "C" {
void beModelCtrlInfoRideOn_fieldInit(){
 void *value0=beModelCtrlInfoRideOn_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0B44,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=beModelCtrlNode2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D0B54,lbl_804D0B64,lbl_804D0B74,value1);
}
}
#pragma pop
