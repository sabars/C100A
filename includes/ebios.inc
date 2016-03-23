;/*
;*********************************************************************************************************
;*											        ePOS
;*						           the Easy Portable/Player Operation System
;*									           epos headfile
;*
;*						        (c) Copyright 2006-2007, Steven.ZGJ China
;*											All	Rights Reserved
;*
;* File    : ebios.inc
;* By      : Steven.ZGJ
;* Version : V0.1
;*
;* note�����е�ģ���ڲ������ȫ���Եĳ���������Ҫ����"ģ����_xxx", ����"MEMS_xxx", "EXEC_xxx"
;************************************************************************************************************************
;*/

    if :LNOT::DEF:_EBIOS_INC_
	GBLA  _EBIOS_INC_

    include  cfgs.inc
    include  arch\arm9.inc


    IF EPDK_ARCH = EPDK_ARCH_SUNIII
	    include arch\suniii\suniii.inc
    ENDIF
    
    IF EPDK_ARCH = EPDK_ARCH_SUNIV
	    include arch\suniv\suniv.inc
    ENDIF
    
    ENDIF

    end         ;//_EBIOS_INC_
