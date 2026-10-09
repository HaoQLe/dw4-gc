#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AB984();
void igTransformSequence1_5_fieldInit();
void *igTransformSequence1_5_getMeta();
void igTransformSequence1_5_vtableRead();
void igTransformSequence_register();
extern char lbl_804AB510[];
extern char lbl_804AB520[];
extern void *lbl_8056469C;
extern void *lbl_805646D0;
void igTransformSequence1_5_register();
void *igTransformSequence1_5_getMetaCall();
void *igTransformSequence1_5_parentMeta();
}
extern "C" {
void fn_801AB6FC(){
 fn_80066188((int)igTransformSequence1_5_register);
}
void igTransformSequence1_5_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056469C,(int)igTransformSequence_register,(int)igTransformSequence1_5_parentMeta,(int)igTransformSequence1_5_getMetaCall,(int)lbl_804AB520,104,(int)igTransformSequence1_5_vtableRead,(int)igTransformSequence1_5_fieldInit,(int)fn_801AB984,(int)lbl_804AB510);
}
void *igTransformSequence1_5_getMetaCall(){return igTransformSequence1_5_getMeta();}
void *igTransformSequence1_5_parentMeta(){return lbl_805646D0;}
}
#pragma pop
