#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CDB44[];
extern char lbl_804CDB58[];
extern char lbl_804CDB6C[];
extern char lbl_804CDB80[];
extern void *lbl_805343EC;
}
extern "C" {
void igCriMovieData_fieldInit(){
 void *value0=lbl_805343EC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CDB44,5);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value2)+20)=4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value4)+20)=4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+38)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value6)+20)=4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+38)=0;
 fn_800659C0(value0,lbl_804CDB58,lbl_804CDB6C,lbl_804CDB80,value1);
}
}
#pragma pop
