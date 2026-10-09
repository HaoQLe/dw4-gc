#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igInverseKinematicsJoint_fieldInit();
void *igInverseKinematicsJoint_getMeta();
void igInverseKinematicsJoint_vtableRead();
void igJoint_register();
extern char lbl_804AEE70[];
extern void *lbl_80564DBC;
extern void *lbl_80564DE4;
void igInverseKinematicsJoint_register();
void *igInverseKinematicsJoint_getMetaCall();
void *igInverseKinematicsJoint_parentMeta();
}
extern "C" {
void fn_801BC980(){
 fn_80066188((int)igInverseKinematicsJoint_register);
}
void igInverseKinematicsJoint_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DE4,(int)igJoint_register,(int)igInverseKinematicsJoint_parentMeta,(int)igInverseKinematicsJoint_getMetaCall,(int)lbl_804AEE70,368,(int)igInverseKinematicsJoint_vtableRead,(int)igInverseKinematicsJoint_fieldInit,0,0);
}
void *igInverseKinematicsJoint_getMetaCall(){return igInverseKinematicsJoint_getMeta();}
void *igInverseKinematicsJoint_parentMeta(){return lbl_80564DBC;}
}
#pragma pop
