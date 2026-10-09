#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igAnimation_register();
void igInverseKinematicsAnimation_fieldInit();
void *igInverseKinematicsAnimation_getMeta();
void igInverseKinematicsAnimation_vtableRead();
extern char lbl_804AEFAC[];
extern char lbl_804AEFB8[];
extern void *lbl_80564E0C;
extern void *lbl_80565510;
void igInverseKinematicsAnimation_register();
void *igInverseKinematicsAnimation_getMetaCall();
void *igInverseKinematicsAnimation_parentMeta();
}
extern "C" {
void fn_801BD3DC(){
 fn_80066188((int)igInverseKinematicsAnimation_register);
}
void igInverseKinematicsAnimation_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E0C,(int)igAnimation_register,(int)igInverseKinematicsAnimation_parentMeta,(int)igInverseKinematicsAnimation_getMetaCall,(int)lbl_804AEFB8,176,(int)igInverseKinematicsAnimation_vtableRead,(int)igInverseKinematicsAnimation_fieldInit,0,(int)lbl_804AEFAC);
}
void *igInverseKinematicsAnimation_getMetaCall(){return igInverseKinematicsAnimation_getMeta();}
void *igInverseKinematicsAnimation_parentMeta(){return lbl_80565510;}
}
#pragma pop
