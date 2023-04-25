

// WARNING: Could not reconcile some variable overlaps

void __cdecl16far FUN_1008_6a88(char *param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined2 unaff_SS;
  undefined4 local_1e [3];
  undefined4 *local_10;
  uint local_e;
  int local_c;
  uint local_a;
  uint local_8;
  int local_6;
  byte *local_4;

  local_a = 0;
  local_c = 0;
  if (*param_1 != '\0') {
    local_10 = param_2;
    do {
      if (*param_1 == '*') {
        local_a = local_a + 1;
      }
      else {
        iVar5 = (int)*param_1;
        if ((*(byte *)(iVar5 + 0x4ca5) & 3) != 0) {
          bVar4 = *(byte *)(iVar5 + 0x4ca5);
          local_e = bVar4 & 1;
          if ((bVar4 & 1) == 0) {
            local_8 = iVar5 - 0x61;
          }
          else {
            local_8 = iVar5 - 0x41;
          }
          if (-1 < (int)local_8) {
            local_6 = local_c;
            if (local_c < param_3) {
              local_4 = (byte *)((int)param_2 + local_c * 0xe + 10);
              do {
                if ((*local_4 & 0x78) >> 3 == local_8) break;
                local_4 = local_4 + 0xe;
                local_6 = local_6 + 1;
              } while (local_6 < param_3);
            }
            if (local_6 != param_3) {
              puVar6 = (undefined4 *)(local_6 * 0xe + (int)param_2);
              puVar1 = (uint *)((int)puVar6 + 10);
              *puVar1 = *puVar1 ^ (*(byte *)(undefined2 *)((int)puVar6 + 10) ^ (byte)local_a) & 7;
              puVar1 = (uint *)((int)puVar6 + 10);
              *puVar1 = *puVar1 ^ (byte)(*(byte *)(undefined2 *)((int)puVar6 + 10) ^
                                        (byte)(local_e << 7)) & 0x80;
              if (local_c != local_6) {
                puVar9 = local_1e;
                puVar8 = puVar6;
                for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar3 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar2 = puVar8;
                  puVar8 = puVar8 + 1;
                  *puVar3 = *puVar2;
                }
                *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
                puVar9 = local_10;
                for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar3 = puVar6;
                  puVar6 = puVar6 + 1;
                  puVar2 = puVar9;
                  puVar9 = puVar9 + 1;
                  *puVar3 = *puVar2;
                }
                *(undefined2 *)puVar6 = *(undefined2 *)puVar9;
                puVar6 = local_1e;
                puVar9 = local_10;
                for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar3 = puVar9;
                  puVar9 = puVar9 + 1;
                  puVar2 = puVar6;
                  puVar6 = puVar6 + 1;
                  *puVar3 = *puVar2;
                }
                *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
              }
              local_10 = (undefined4 *)((int)local_10 + 0xe);
              local_c = local_c + 1;
            }
          }
        }
      }
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
  }
  if (local_c < param_3) {
    puVar7 = (uint *)((int)param_2 + local_c * 0xe + 10);
    local_c = param_3 - local_c;
    do {
      if ((*(byte *)puVar7 & 7) < local_a) {
        puVar1 = puVar7;
        *puVar1 = *puVar1 ^ (byte)(*(byte *)puVar7 ^ (byte)local_a) & 7;
      }
      puVar7 = puVar7 + 7;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}



void __cdecl16far FUN_1008_6bf6(undefined2 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  WINDOWPLACEMENT16 *unaff_SS;
  undefined2 local_18 [7];
  undefined4 local_a;
  undefined4 uStack_6;

  local_18[0] = 0x16;
  GETWINDOWPLACEMENT((HWND16)local_18,unaff_SS);
  *param_2 = local_a;
  param_2[1] = uStack_6;
  puVar1 = param_2 + 1;
  *(int *)puVar1 = *(int *)puVar1 - *(int *)param_2;
  piVar2 = (int *)((int)param_2 + 6);
  *piVar2 = *piVar2 - *(int *)((int)param_2 + 2);
  return;
}



void __cdecl16far FUN_1008_6c2c(undefined2 param_1_00,HWND16 param_2)

{
  bool16 bVar1;
  VA_LIST16 local_c;
  char local_3;

  bVar1 = ISZOOMED(param_2);
  if (bVar1 == 0) {
    bVar1 = ISICONIC(param_2);
    local_3 = (-(bVar1 == 0) & 9U) + 0x49;
  }
  else {
    local_3 = 'M';
  }
  FUN_1008_6bf6(param_2,(undefined4 *)&local_c);
  _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x54610a8,(LPCSTR)CONCAT22((int)local_3,0x10a8),local_c);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_1008_6c82(void)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  VA_LIST16 unaff_SI;
  int iVar6;
  uint *puVar7;
  undefined2 unaff_SS;
  undefined uVar8;
  undefined uVar9;
  char local_3e [16];
  char local_2e [16];
  char local_1e [16];
  int local_e;
  int local_c;
  int local_a;
  char *local_8;
  uint local_6;
  undefined2 local_4;

  if (PTR_DAT_10a8_0001_10a8_00c0 != (undefined *)0xffff) {
    FUN_1018_50de(0x66,local_2e);
    FUN_1018_50de(0x67,local_3e);
    FUN_1018_50de(0x7c,local_1e);
    bVar3 = (int)PTR_DAT_10a8_0000_10a8_839c < 5;
    if ((DAT_10a8_0a48 & 6) == 0) {
      bVar3 = bVar3 | 2;
    }
    local_6 = (uint)bVar3;
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x55910a8,(LPCSTR)(ulong)CONCAT12(bVar3,0x10a8),
              unaff_SI);
    uVar8 = (undefined)unaff_SS;
    uVar9 = (undefined)((uint)unaff_SS >> 8);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x68,local_1e);
    FUN_1008_6c2c((int)&DAT_10a8_86de,PTR_DAT_10a8_0000_10a8_58b4);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x74,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x55c10a8,
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_573a,0x10a8),unaff_SI);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x75,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x55f10a8,
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_5770,0x10a8),unaff_SI);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x76,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x56210a8,
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_5772,0x10a8),unaff_SI);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x77,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x56510a8,
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_5774,0x10a8),unaff_SI);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x78,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x56810a8,
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_5776,0x10a8),unaff_SI);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x79,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x56b10a8,
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_5778,0x10a8),unaff_SI);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x7a,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x56e10a8,
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_577a,0x10a8),unaff_SI);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    local_e = 2;
    iVar6 = 0xa4a;
    local_a = 5;
    FUN_1018_50de(0x6a,local_1e);
    while (local_e != 0) {
      local_8 = (char *)&DAT_10a8_86de;
      uVar5 = 0;
      puVar7 = (uint *)(iVar6 + 10);
      local_4 = puVar7;
      for (uVar4 = 0; (int)uVar4 < local_a; uVar4 = uVar4 + 1) {
        if (uVar5 < (*(byte *)puVar7 & 7)) {
          do {
            *local_8 = '*';
            local_8 = local_8 + 1;
            uVar5 = uVar5 + 1;
            local_6 = uVar4;
            local_4 = puVar7;
          } while (uVar5 < (*(byte *)puVar7 & 7));
        }
        *local_8 = (-((*(byte *)puVar7 & 0x80) == 0) & 0x20U) + 0x41;
        puVar1 = puVar7;
        puVar7 = puVar7 + 7;
        pcVar2 = local_8;
        *pcVar2 = *pcVar2 + ((byte)(*puVar1 >> 3) & 0xf);
        local_8 = local_8 + 1;
      }
      *local_8 = '\0';
      local_e = local_e + -1;
      local_c = iVar6;
      WRITEPRIVATEPROFILESTRING
                ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
                 (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
      FUN_1018_50de(0x69,local_1e);
      iVar6 = 0xd16;
      local_a = 7;
    }
    local_e = local_e + -1;
    FUN_1018_50de(0x6c,local_1e);
    if (PTR_DAT_10a8_0000_10a8_7b4c == (undefined *)0x0) {
      local_4 = (uint *)CONCAT11(0x4e,(undefined)local_4);
    }
    else if (PTR_DAT_10a8_0000_10a8_7b4c == (undefined *)&DAT_10a8_0001) {
      local_4 = (uint *)CONCAT11(0x50,(undefined)local_4);
    }
    else if (PTR_DAT_10a8_0000_10a8_7b4c == (undefined *)&DAT_10a8_0002) {
      local_4 = (uint *)CONCAT11(0x53,(undefined)local_4);
    }
    else if (PTR_DAT_10a8_0000_10a8_7b4c == (undefined *)&PTR_LOOP_10a8_0004) {
      local_4 = (uint *)CONCAT11(0x45,(undefined)local_4);
    }
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x57110a8,(LPCSTR)CONCAT22((int)local_4._1_1_,0x10a8),
              (VA_LIST16)(int)(char)((char)PTR_DAT_10a8_0001_10a8_00c0 + 'B'));
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x7b,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x57810a8,
              (LPCSTR)CONCAT22((int)_PTR_DAT_10a8_0000_10a8_0030,0x10a8),
              (VA_LIST16)((ulong)_PTR_DAT_10a8_0000_10a8_0030 >> 0x10));
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_1018_50de(0x6b,local_1e);
    DAT_10a8_86de = (char)PTR_DAT_10a8_0000_10a8_08b2 + '4';
    DAT_10a8_86df = 0;
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_10a0_037e();
    FUN_1018_50de(0x71,local_1e);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_3e)),&DAT_10a8_86de,
               (LPCSTR)CONCAT22(unaff_SS,local_1e),(LPCSTR)CONCAT22(unaff_SS,local_2e));
    FUN_10a0_037e();
    FUN_1018_50de(0x72,local_1e);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT22(unaff_SS,local_3e),&DAT_10a8_86de,
               (LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_1e)),(LPCSTR)CONCAT22(unaff_SS,local_2e))
    ;
    FUN_10a0_037e();
    FUN_1018_50de(0x73,local_1e);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT22(unaff_SS,local_3e),&DAT_10a8_86de,
               (LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_1e)),(LPCSTR)CONCAT22(unaff_SS,local_2e))
    ;
    FUN_1018_50de(0x6d,local_2e);
    FUN_1018_50de(0x6e,local_1e);
    DAT_10a8_86de = '1' - (PTR_DAT_10a8_0000_10a8_00d0 == (undefined *)0x0);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT22(unaff_SS,local_3e),&DAT_10a8_86de,
               (LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_1e)),(LPCSTR)CONCAT22(unaff_SS,local_2e))
    ;
    FUN_10a0_037e();
    FUN_1018_50de(0x70,local_1e);
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT22(unaff_SS,local_3e),&DAT_10a8_86de,
               (LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_1e)),
               (LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_2e)));
    FUN_1018_50de(0x6f,local_1e);
    _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x57c10a8,(LPCSTR)0x85dc10a8,
              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
    WRITEPRIVATEPROFILESTRING
              ((LPCSTR)CONCAT22(unaff_SS,local_3e),&DAT_10a8_86de,
               (LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_1e)),
               (LPCSTR)CONCAT13(uVar9,CONCAT12(uVar8,local_2e)));
  }
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void __cdecl16far FUN_1008_71ca(void)

{
  bool16 bVar1;
  int16 *piVar2;
  int16 *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 uVar6;
  HMENU16 HVar7;
  HMENU16 hmenu;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined6 in_stack_00000000;
  undefined6 in_stack_00000006;
  unkbyte10 in_stack_0000000c;
  undefined6 in_stack_00000016;
  unkbyte10 in_stack_0000001c;
  bool16 in_stack_00000026;
  undefined *puVar8;
  undefined *puVar9;
  undefined *in_stack_0000fff6;
  int16 *in_stack_0000fff8;
  int16 *in_stack_0000fffa;
  int16 *in_stack_0000fffc;

  if (PTR_DAT_10a8_0000_10a8_58b4 == (undefined *)0x0) {
    return;
  }
  puVar9 = PTR_DAT_10a8_0000_10a8_58b4;
  bVar1 = ISICONIC((HWND16)PTR_DAT_10a8_0000_10a8_58b4);
  if (bVar1 != 0) {
    return;
  }
  if ((((int)PTR_DAT_10a8_0000_10a8_573a < 1) || (SBORROW2((int)PTR_DAT_10a8_0000_10a8_573a,1))) ||
     (1 < (int)(PTR_DAT_10a8_0000_10a8_573a + -1))) {
    PTR_DAT_10a8_0000_10a8_576a = PTR_DAT_10a8_0000_10a8_5770;
    if ((int)PTR_DAT_10a8_0000_10a8_5766 - (int)PTR_DAT_10a8_0000_10a8_5770 < 100) {
      PTR_DAT_10a8_0000_10a8_576a = PTR_DAT_10a8_0000_10a8_5766 + -100;
    }
    if ((int)PTR_DAT_10a8_0000_10a8_576a < 0xc6) {
      PTR_DAT_10a8_0000_10a8_576a = (undefined *)&PTR_DAT_10a8_0000_10a8_00c6;
    }
    in_stack_0000fffa = (int16 *)(((int)PTR_DAT_10a8_0000_10a8_5794 * 0xd >> 1) + 10);
    in_stack_0000fffc = (int16 *)((int)PTR_DAT_10a8_0000_10a8_5794 * 0xd + -0x24);
    piVar2 = in_stack_0000fffa;
    if ((int)in_stack_0000fffa < (int)PTR_DAT_10a8_0000_10a8_5772) {
      piVar2 = (int16 *)PTR_DAT_10a8_0000_10a8_5772;
    }
    piVar3 = in_stack_0000fffc;
    if ((int)in_stack_0000fffc < (int)PTR_DAT_10a8_0000_10a8_5774) {
      piVar3 = (int16 *)PTR_DAT_10a8_0000_10a8_5774;
    }
    PTR_DAT_10a8_0000_10a8_5772 = (undefined *)piVar2;
    PTR_DAT_10a8_0000_10a8_5774 = (undefined *)piVar3;
    if ((int)(PTR_DAT_10a8_0000_10a8_5768 + (-(int)piVar2 - (int)piVar3) + -0x10) < 0x32) {
      in_stack_0000fff8 = (int16 *)((int)piVar3 + (int)piVar2);
      in_stack_0000fff6 = PTR_DAT_10a8_0000_10a8_5768 + -0x42;
      piVar2 = MULDIV(in_stack_0000fff8,
                      (int16)CONCAT214(in_stack_0000fffa,
                                       CONCAT212(in_stack_0000fff8,
                                                 CONCAT210(in_stack_0000fff6,
                                                           CONCAT28(unaff_DI,CONCAT26(unaff_SI,
                                                  CONCAT24(puVar9,CONCAT22(in_stack_0000fff6,piVar2)
                                                          )))))),
                      (int16)CONCAT610(in_stack_00000006,
                                       CONCAT64(in_stack_00000000,
                                                CONCAT22(unaff_BP,in_stack_0000fffc))),
                      (int16)CONCAT610(in_stack_00000016,in_stack_0000000c));
      piVar3 = MULDIV(in_stack_0000fff8,
                      (int16)CONCAT214(in_stack_0000fffa,
                                       CONCAT212(in_stack_0000fff8,
                                                 CONCAT210(in_stack_0000fff6,
                                                           CONCAT28(unaff_DI,CONCAT26(unaff_SI,
                                                  CONCAT24(puVar9,CONCAT22(in_stack_0000fff6,piVar3)
                                                          )))))),
                      (int16)CONCAT610(in_stack_00000006,
                                       CONCAT64(in_stack_00000000,
                                                CONCAT22(unaff_BP,in_stack_0000fffc))),
                      (int16)CONCAT610(in_stack_00000016,in_stack_0000000c));
      if ((int)piVar2 < (int)in_stack_0000fffa) {
        iVar4 = (int)piVar2 - (int)in_stack_0000fffa;
        piVar2 = in_stack_0000fffa;
        piVar3 = (int16 *)((int)piVar3 + iVar4);
      }
      else if ((int)piVar3 < (int)in_stack_0000fffc) {
        piVar2 = (int16 *)((int)piVar2 + ((int)piVar3 - (int)in_stack_0000fffc));
        piVar3 = in_stack_0000fffc;
      }
    }
    PTR_DAT_10a8_0000_10a8_576c = PTR_DAT_10a8_0000_10a8_5768 + (-(int)piVar2 - (int)piVar3) + -0x10
    ;
    PTR_DAT_10a8_0000_10a8_576e = PTR_DAT_10a8_0000_10a8_576c + (int)piVar2 + 8;
    if (PTR_DAT_10a8_0000_10a8_00c4 == (undefined *)0x0) goto LAB_1008_7449;
    MOVEWINDOW(1,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(puVar9,CONCAT28(
                                                  PTR_DAT_10a8_0000_10a8_00c4,
                                                  CONCAT26(PTR_DAT_10a8_0000_10a8_576a + 8,
                                                           (uint6)CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5766 +
                                                  (-8 - (int)PTR_DAT_10a8_0000_10a8_576a),
                                                  PTR_DAT_10a8_0000_10a8_5768)))))),
               (int16)CONCAT610(in_stack_00000000,
                                CONCAT28(unaff_BP,CONCAT26(in_stack_0000fffc,
                                                           CONCAT24(in_stack_0000fffa,
                                                                    CONCAT22(in_stack_0000fff8,
                                                                             in_stack_0000fff6))))),
               (int16)CONCAT106(in_stack_0000000c,in_stack_00000006),
               (int16)CONCAT106(in_stack_0000001c,in_stack_00000016),in_stack_00000026);
    MOVEWINDOW(1,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(puVar9,CONCAT28(
                                                  PTR_DAT_10a8_0000_10a8_00ca,
                                                  (qword)CONCAT22(PTR_DAT_10a8_0000_10a8_576a,
                                                                  PTR_DAT_10a8_0000_10a8_576c))))),
               (int16)CONCAT610(in_stack_00000000,
                                CONCAT28(unaff_BP,CONCAT26(in_stack_0000fffc,
                                                           CONCAT24(in_stack_0000fffa,
                                                                    CONCAT22(in_stack_0000fff8,
                                                                             in_stack_0000fff6))))),
               (int16)CONCAT106(in_stack_0000000c,in_stack_00000006),
               (int16)CONCAT106(in_stack_0000001c,in_stack_00000016),in_stack_00000026);
    MOVEWINDOW(1,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(puVar9,CONCAT28(
                                                  PTR_DAT_10a8_0000_10a8_00cc,
                                                  (qword)CONCAT24(PTR_DAT_10a8_0000_10a8_576c + 8,
                                                                  CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_576a,piVar2)))))),
               (int16)CONCAT610(in_stack_00000000,
                                CONCAT28(unaff_BP,CONCAT26(in_stack_0000fffc,
                                                           CONCAT24(in_stack_0000fffa,
                                                                    CONCAT22(in_stack_0000fff8,
                                                                             in_stack_0000fff6))))),
               (int16)CONCAT106(in_stack_0000000c,in_stack_00000006),
               (int16)CONCAT106(in_stack_0000001c,in_stack_00000016),in_stack_00000026);
    puVar8 = (undefined *)0x0;
    puVar5 = PTR_DAT_10a8_0000_10a8_576a;
  }
  else {
    PTR_DAT_10a8_0000_10a8_576a = PTR_DAT_10a8_0000_10a8_5776;
    if ((int)PTR_DAT_10a8_0000_10a8_5766 - (int)PTR_DAT_10a8_0000_10a8_5776 < 200) {
      PTR_DAT_10a8_0000_10a8_576a = PTR_DAT_10a8_0000_10a8_5766 + -200;
    }
    if ((int)PTR_DAT_10a8_0000_10a8_576a < 0xc6) {
      PTR_DAT_10a8_0000_10a8_576a = (undefined *)&PTR_DAT_10a8_0000_10a8_00c6;
    }
    puVar5 = (undefined *)(((int)PTR_DAT_10a8_0000_10a8_5794 * 0xd >> 1) + 10);
    if ((int)puVar5 < (int)PTR_DAT_10a8_0000_10a8_5778) {
      puVar5 = PTR_DAT_10a8_0000_10a8_5778;
    }
    piVar2 = (int16 *)((int)PTR_DAT_10a8_0000_10a8_5794 * 0xd + -0x24);
    if ((int)piVar2 < (int)PTR_DAT_10a8_0000_10a8_577a) {
      piVar2 = (int16 *)PTR_DAT_10a8_0000_10a8_577a;
    }
    puVar8 = puVar5;
    if ((int)(PTR_DAT_10a8_0000_10a8_5768 + (-8 - (int)puVar5)) < 100) {
      puVar8 = PTR_DAT_10a8_0000_10a8_5768 + -0x6c;
    }
    piVar3 = piVar2;
    if ((int)(PTR_DAT_10a8_0000_10a8_5768 + (-8 - (int)piVar2)) < 100) {
      piVar3 = (int16 *)(PTR_DAT_10a8_0000_10a8_5768 + -0x6c);
    }
    PTR_DAT_10a8_0000_10a8_576c = PTR_DAT_10a8_0000_10a8_5768 + (-8 - (int)puVar8);
    PTR_DAT_10a8_0000_10a8_576e = PTR_DAT_10a8_0000_10a8_5768 + (-8 - (int)piVar3);
    PTR_DAT_10a8_0000_10a8_5778 = puVar5;
    PTR_DAT_10a8_0000_10a8_577a = (undefined *)piVar2;
    if (PTR_DAT_10a8_0000_10a8_00c4 == (undefined *)0x0) goto LAB_1008_7449;
    MOVEWINDOW(1,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(puVar9,CONCAT28(
                                                  PTR_DAT_10a8_0000_10a8_00c4,
                                                  CONCAT26(PTR_DAT_10a8_0000_10a8_576a + 8,
                                                           (uint6)CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5766 +
                                                  (-8 - (int)PTR_DAT_10a8_0000_10a8_576a),
                                                  PTR_DAT_10a8_0000_10a8_576e)))))),
               (int16)CONCAT610(in_stack_00000000,
                                CONCAT28(unaff_BP,CONCAT26(in_stack_0000fffc,
                                                           CONCAT24(in_stack_0000fffa,
                                                                    CONCAT22(in_stack_0000fff8,
                                                                             in_stack_0000fff6))))),
               (int16)CONCAT106(in_stack_0000000c,in_stack_00000006),
               (int16)CONCAT106(in_stack_0000001c,in_stack_00000016),in_stack_00000026);
    MOVEWINDOW(1,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(puVar9,CONCAT28(
                                                  PTR_DAT_10a8_0000_10a8_00ca,
                                                  (qword)CONCAT22(PTR_DAT_10a8_0000_10a8_576a,
                                                                  PTR_DAT_10a8_0000_10a8_576c))))),
               (int16)CONCAT610(in_stack_00000000,
                                CONCAT28(unaff_BP,CONCAT26(in_stack_0000fffc,
                                                           CONCAT24(in_stack_0000fffa,
                                                                    CONCAT22(in_stack_0000fff8,
                                                                             in_stack_0000fff6))))),
               (int16)CONCAT106(in_stack_0000000c,in_stack_00000006),
               (int16)CONCAT106(in_stack_0000001c,in_stack_00000016),in_stack_00000026);
    MOVEWINDOW(1,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(puVar9,CONCAT28(
                                                  PTR_DAT_10a8_0000_10a8_00cc,
                                                  (qword)CONCAT24(PTR_DAT_10a8_0000_10a8_576c + 8,
                                                                  CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_576a,puVar8)))))),
               (int16)CONCAT610(in_stack_00000000,
                                CONCAT28(unaff_BP,CONCAT26(in_stack_0000fffc,
                                                           CONCAT24(in_stack_0000fffa,
                                                                    CONCAT22(in_stack_0000fff8,
                                                                             in_stack_0000fff6))))),
               (int16)CONCAT106(in_stack_0000000c,in_stack_00000006),
               (int16)CONCAT106(in_stack_0000001c,in_stack_00000016),in_stack_00000026);
    puVar8 = PTR_DAT_10a8_0000_10a8_576a + 8;
    puVar5 = PTR_DAT_10a8_0000_10a8_5766 + (-8 - (int)PTR_DAT_10a8_0000_10a8_576a);
  }
  MOVEWINDOW(1,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(puVar9,CONCAT28(
                                                  PTR_DAT_10a8_0000_10a8_00c8,
                                                  CONCAT26(puVar8,CONCAT24(
                                                  PTR_DAT_10a8_0000_10a8_576e + 8,
                                                  CONCAT22(puVar5,piVar3))))))),
             (int16)CONCAT610(in_stack_00000000,
                              CONCAT28(unaff_BP,CONCAT26(in_stack_0000fffc,
                                                         CONCAT24(in_stack_0000fffa,
                                                                  CONCAT22(in_stack_0000fff8,
                                                                           in_stack_0000fff6))))),
             (int16)CONCAT106(in_stack_0000000c,in_stack_00000006),
             (int16)CONCAT106(in_stack_0000001c,in_stack_00000016),in_stack_00000026);
LAB_1008_7449:
  uVar6 = FUN_1008_5196(PTR_DAT_10a8_0000_10a8_58b4,1);
  HVar7 = GETSUBMENU(3,(int16)CONCAT214(in_stack_0000fffc,
                                        CONCAT212(in_stack_0000fffa,
                                                  CONCAT210(in_stack_0000fff8,
                                                            CONCAT28(in_stack_0000fff6,
                                                                     CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(puVar9,uVar6))))))));
  iVar4 = 0x82;
  do {
    if (iVar4 - (int)PTR_DAT_10a8_0000_10a8_573a == 0x82) {
      hmenu = 8;
    }
    else {
      hmenu = 0;
    }
    CHECKMENUITEM(hmenu,(uint16)CONCAT214(in_stack_0000fffa,
                                          CONCAT212(in_stack_0000fff8,
                                                    CONCAT210(in_stack_0000fff6,
                                                              CONCAT28(unaff_DI,CONCAT26(unaff_SI,
                                                  CONCAT24(puVar9,CONCAT22(HVar7,iVar4))))))),
                  (uint16)CONCAT610(in_stack_00000006,
                                    CONCAT64(in_stack_00000000,CONCAT22(unaff_BP,in_stack_0000fffc))
                                   ));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x85);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong __stdcall16far TITLEWNDPROC(HWND16 param_1,undefined4 param_2,ulong param_3)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  HWND16 HVar8;
  int iVar9;
  bool16 bVar10;
  HDC16 HVar11;
  int *plf16;
  int16 *piVar12;
  int16 *piVar13;
  char *pcVar14;
  uint16 *puVar15;
  HPALETTE16 hpal;
  uint16 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined2 unaff_BP;
  undefined *unaff_SI;
  int iVar19;
  HWND16 *pHVar20;
  HRGN16 unaff_DI;
  int iVar21;
  int *piVar22;
  int *piVar23;
  PAINTSTRUCT16 *unaff_SS;
  ulong uVar24;
  dword in_stack_00000000;
  undefined2 uVar25;
  undefined *puVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined *in_stack_0000ffb2;
  undefined2 uVar33;
  undefined2 in_stack_0000ffb8;
  WPARAM16 in_stack_0000ffba;
  WPARAM16 in_stack_0000ffbc;
  undefined2 in_stack_0000ffbe;
  undefined2 in_stack_0000ffc0;
  undefined2 in_stack_0000ffc2;
  undefined4 in_stack_0000ffc4;
  undefined4 in_stack_0000ffc8;
  undefined2 in_stack_0000ffcc;
  HICON16 in_stack_0000ffce;
  undefined2 in_stack_0000ffd0;
  undefined8 in_stack_0000ffd2;
  undefined2 in_stack_0000ffda;
  undefined4 in_stack_0000ffdc;
  undefined2 in_stack_0000ffe0;
  HWND16 in_stack_0000ffe2;
  HMENU16 in_stack_0000ffe4;
  HINSTANCE16 in_stack_0000ffe6;
  LPVOID in_stack_0000ffe8;
  undefined4 in_stack_0000ffec;
  int in_stack_0000fff0;
  undefined2 in_stack_0000fff2;
  undefined2 in_stack_0000fff4;
  int in_stack_0000fff6;
  undefined2 in_stack_0000fff8;

  uVar31 = (undefined)(param_3 >> 0x10);
  if ((uint)param_3 != 0xf) {
    if ((uint)param_3 < 0x10) {
      if ((uint)param_3 == 1) {
        if (((7 < (int)PTR_DAT_10a8_0000_10a8_839c) &&
            (PTR_DAT_10a8_0000_10a8_0586 = (undefined *)FUN_1018_6f20(0x1c1),
            PTR_DAT_10a8_0000_10a8_0584 == (undefined *)0x0)) &&
           (PTR_DAT_10a8_0000_10a8_0586 != (undefined *)0x0)) {
          PTR_DAT_10a8_0000_10a8_0584 =
               (undefined *)FUN_1018_6b08((HGLOBAL16)PTR_DAT_10a8_0000_10a8_0586);
        }
        GETCLIENTRECT((HWND16)&stack0xffe0,(RECT16 *)(param_3 & 0xffff0000 | ZEXT24(unaff_SS)));
        iVar19 = (int)in_stack_0000ffe4 >> 3;
        if (iVar19 < 100) {
          iVar19 = 100;
        }
        if ((int)in_stack_0000ffe6 < 0x28a) {
          iVar19 = iVar19 + iVar19 / 6;
        }
        iVar4 = -(iVar19 * 4 - in_stack_0000ffe4);
        iVar5 = iVar4 >> 2;
        iVar4 = iVar4 >> 3;
        if ((int)in_stack_0000ffe6 < 0x1f5) {
          iVar6 = (int)PTR_DAT_10a8_0000_10a8_5794 * 2;
        }
        else {
          iVar6 = ((int)PTR_DAT_10a8_0000_10a8_5794 * 5) / 2;
        }
        iVar21 = 0;
        pHVar20 = (HWND16 *)&PTR_DAT_10a8_0000_10a8_0588;
        do {
          uVar7 = FUN_1018_5112(iVar21 + 0x13b);
          HVar8 = CREATEWINDOW((LPCSTR)0x0,(LPCSTR)CONCAT22(iVar21,PTR_DAT_10a8_0000_10a8_839a),
                               CONCAT22(iVar6,param_3._2_2_),
                               (int16)CONCAT115(5,CONCAT114(0x90,CONCAT212(0x10a8,CONCAT210(uVar7,
                                                  CONCAT28(0x5000,(qword)CONCAT24(iVar4,CONCAT22((
                                                  in_stack_0000ffe6 - iVar6) -
                                                  (int)PTR_DAT_10a8_0000_10a8_5794,iVar19))))))),
                               (int16)CONCAT214(in_stack_0000ffc0,
                                                CONCAT212(in_stack_0000ffbe,
                                                          CONCAT210(in_stack_0000ffbc,
                                                                    CONCAT28(in_stack_0000ffba,
                                                                             CONCAT26(
                                                  in_stack_0000ffb8,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,0x10a8))))))),
                               (int16)CONCAT214(in_stack_0000ffd0,
                                                CONCAT212(in_stack_0000ffce,
                                                          CONCAT210(in_stack_0000ffcc,
                                                                    CONCAT46(in_stack_0000ffc8,
                                                                             CONCAT42(
                                                  in_stack_0000ffc4,in_stack_0000ffc2))))),
                               (int16)CONCAT214(in_stack_0000ffe0,
                                                CONCAT410(in_stack_0000ffdc,
                                                          CONCAT28(in_stack_0000ffda,
                                                                   in_stack_0000ffd2))),
                               in_stack_0000ffe2,in_stack_0000ffe4,in_stack_0000ffe6,
                               in_stack_0000ffe8);
          *pHVar20 = HVar8;
          if (pHVar20 == (HWND16 *)&PTR_DAT_10a8_0000_10a8_058c) {
            if (DAT_10a8_85dc != '\0') {
              unaff_DI = 0;
              unaff_SI = (undefined *)&DAT_10a8_85dc;
              iVar9 = FUN_10a0_0752();
              if (iVar9 != -1) goto LAB_1008_75c5;
            }
            unaff_SI = PTR_DAT_10a8_0000_10a8_058c;
            ENABLEWINDOW(0,(bool16)PTR_DAT_10a8_0000_10a8_058c);
          }
LAB_1008_75c5:
          if ((int)in_stack_0000ffe6 < 500) {
            SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffba,
                                            CONCAT212(in_stack_0000ffb8,
                                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  *pHVar20,(uint6)CONCAT14(0x30,ZEXT24(
                                                  PTR_DAT_10a8_0000_10a8_59c6) << 0x10)))))),
                        in_stack_0000ffbc,CONCAT22(in_stack_0000ffc0,in_stack_0000ffbe));
          }
          iVar4 = iVar4 + iVar5 + iVar19;
          iVar21 = iVar21 + 1;
          pHVar20 = pHVar20 + 1;
          if ((HWND16 *)s_BUTTON_10a8_0590 <= pHVar20) {
            return 0;
          }
        } while( true );
      }
      if ((uint)param_3 == 2) {
        if (PTR_DAT_10a8_0000_10a8_0586 != (undefined *)0x0) {
          in_stack_0000ffb2 = PTR_DAT_10a8_0000_10a8_0586;
          FREERESOURCE((HGLOBAL16)PTR_DAT_10a8_0000_10a8_0586);
          PTR_DAT_10a8_0000_10a8_0586 = (undefined *)0x0;
        }
        if (PTR_DAT_10a8_0000_10a8_0244 == (undefined *)0x0) {
          in_stack_0000ffb2 = PTR_DAT_10a8_0000_10a8_02ee;
          POSTQUITMESSAGE((int16)CONCAT214(in_stack_0000ffc0,
                                           CONCAT212(in_stack_0000ffbe,
                                                     CONCAT210(in_stack_0000ffbc,
                                                               CONCAT28(in_stack_0000ffba,
                                                                        CONCAT26(in_stack_0000ffb8,
                                                                                 CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,PTR_DAT_10a8_0000_10a8_02ee)))))
                                                  )));
        }
      }
LAB_1008_79de:
      uVar24 = DEFWINDOWPROC(param_1,(uint16)CONCAT214(in_stack_0000ffb8,
                                                       CONCAT212(unaff_DI,CONCAT210(unaff_SI,
                                                  CONCAT28(in_stack_0000ffb2,
                                                           CONCAT17((char)(param_3 >> 0x18),
                                                                    CONCAT16(uVar31,CONCAT24((uint)
                                                  param_3,param_2))))))),in_stack_0000ffba,
                             CONCAT22(in_stack_0000ffbe,in_stack_0000ffbc));
      return uVar24;
    }
    if ((uint)param_3 == 0x111) {
      if (param_2._2_2_ != (undefined *)0x0) {
        if (param_2._2_2_ != (undefined *)&DAT_10a8_0001) {
          if (param_2._2_2_ != (undefined *)&DAT_10a8_0002) {
            if (param_2._2_2_ != (undefined *)&DAT_10a8_0003) {
              return 0;
            }
            POSTQUITMESSAGE((int16)CONCAT214(in_stack_0000ffc0,
                                             CONCAT212(in_stack_0000ffbe,
                                                       CONCAT210(in_stack_0000ffbc,
                                                                 CONCAT28(in_stack_0000ffba,
                                                                          CONCAT26(in_stack_0000ffb8
                                                                                   ,CONCAT24(
                                                  unaff_DI,CONCAT22(unaff_SI,
                                                  PTR_DAT_10a8_0000_10a8_02ee))))))));
            return 0;
          }
          PTR_DAT_10a8_0000_10a8_56fa._0_1_ = (byte)PTR_DAT_10a8_0000_10a8_56fa | 1;
        }
        iVar19 = FUN_1008_532c(param_3._2_2_,0);
        if (iVar19 < 1) {
          SETFOCUS((HWND16)param_3._2_2_);
        }
        else {
          if (PTR_DAT_10a8_0000_10a8_0244 == (undefined *)0x0) {
            PTR_DAT_10a8_0000_10a8_0244 = (undefined *)&DAT_10a8_0001;
            DESTROYWINDOW((HWND16)PTR_DAT_10a8_0000_10a8_0242);
            PTR_DAT_10a8_0000_10a8_0242 = (undefined *)0x0;
          }
          if (PTR_DAT_10a8_0001_10a8_00c0 != (undefined *)0xffff) {
            SHOWWINDOW(5,(int16)CONCAT214(in_stack_0000ffc0,
                                          CONCAT212(in_stack_0000ffbe,
                                                    CONCAT210(in_stack_0000ffbc,
                                                              CONCAT28(in_stack_0000ffba,
                                                                       CONCAT26(in_stack_0000ffb8,
                                                                                CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,PTR_DAT_10a8_0000_10a8_58b4)))))
                                                  )));
          }
          FUN_1008_2db8(0,(undefined1  [10])
                          CONCAT28(in_stack_0000ffbc,
                                   CONCAT26(in_stack_0000ffba,
                                            CONCAT24(in_stack_0000ffb8,CONCAT22(unaff_DI,unaff_SI)))
                                  ));
          POSTMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffba,
                                          CONCAT212(in_stack_0000ffb8,
                                                    CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  PTR_DAT_10a8_0000_10a8_58b4,0x1110fa10000))))),
                      in_stack_0000ffbc,CONCAT22(in_stack_0000ffc0,in_stack_0000ffbe));
          if ((((byte)PTR_DAT_10a8_0000_10a8_0040 & 8) != 0) &&
             (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0x0)) {
            FUN_1090_86cc(0);
          }
        }
        PTR_DAT_10a8_0000_10a8_56fa._0_1_ = (byte)PTR_DAT_10a8_0000_10a8_56fa & 0xfe;
        return 0;
      }
      FUN_1008_4138(param_3._2_2_);
      if ((_PTR_DAT_10a8_0000_10a8_006a == 0) && (_PTR_DAT_10a8_0000_10a8_0030 == 0)) {
        SETFOCUS((HWND16)param_3._2_2_);
        return 0;
      }
      if (PTR_DAT_10a8_0000_10a8_0244 == (undefined *)0x0) {
        PTR_DAT_10a8_0000_10a8_0244 = (undefined *)&DAT_10a8_0001;
        DESTROYWINDOW((HWND16)PTR_DAT_10a8_0000_10a8_0242);
        PTR_DAT_10a8_0000_10a8_0242 = (undefined *)0x0;
      }
      SHOWWINDOW(5,(int16)CONCAT214(in_stack_0000ffc0,
                                    CONCAT212(in_stack_0000ffbe,
                                              CONCAT210(in_stack_0000ffbc,
                                                        CONCAT28(in_stack_0000ffba,
                                                                 CONCAT26(in_stack_0000ffb8,
                                                                          CONCAT24(unaff_DI,CONCAT22
                                                  (unaff_SI,PTR_DAT_10a8_0000_10a8_58b4))))))));
      return 0;
    }
    if ((uint)param_3 != 0x30f) {
      if ((uint)param_3 != 0x311) goto LAB_1008_79de;
      if (param_2._2_2_ == param_3._2_2_) {
        return 0;
      }
    }
    if ((int)PTR_DAT_10a8_0000_10a8_839c < 8) {
      return 0;
    }
    puVar15 = (uint16 *)GETDC((HWND16)param_3._2_2_);
    hpal = SELECTPALETTE(0,(HPALETTE16)PTR_DAT_10a8_0000_10a8_0584,(bool16)puVar15);
    puVar16 = REALIZEPALETTE(puVar15,(HDC16)unaff_SI);
    SELECTPALETTE(0,hpal,(bool16)puVar15);
    RELEASEDC((int16 *)puVar15,(HWND16)param_3._2_2_,(HDC16)unaff_SI);
    if (puVar16 == (uint16 *)0x0) {
      return 0;
    }
    INVALIDATERECT(1,(RECT16 *)0x0,0);
    return 1;
  }
  bVar10 = ISICONIC((HWND16)param_3._2_2_);
  if (bVar10 != 0) {
    HVar11 = BEGINPAINT((HWND16)&stack0xffc0,
                        (PAINTSTRUCT16 *)(param_3 & 0xff000000 | (ulong)CONCAT12(uVar31,unaff_SS)));
    DRAWICON((HDC16)PTR_DAT_10a8_0000_10a8_0246,
             (int16)CONCAT214(in_stack_0000ffbc,
                              CONCAT212(in_stack_0000ffba,
                                        CONCAT210(in_stack_0000ffb8,
                                                  CONCAT28(unaff_DI,CONCAT26(unaff_SI,CONCAT24(
                                                  HVar11,0x20002)))))),
             (int16)CONCAT214(in_stack_0000ffcc,
                              CONCAT410(in_stack_0000ffc8,
                                        CONCAT46(in_stack_0000ffc4,
                                                 CONCAT24(in_stack_0000ffc2,
                                                          CONCAT22(in_stack_0000ffc0,
                                                                   in_stack_0000ffbe))))),
             in_stack_0000ffce);
    ENDPAINT((HWND16)&stack0xffc0,unaff_SS);
    return 0;
  }
  plf16 = (int *)LOCALALLOC(0x32,0x40);
  puVar15 = (uint16 *)
            BEGINPAINT((HWND16)&stack0xffb8,
                       (PAINTSTRUCT16 *)(param_3 & 0xff000000 | (ulong)CONCAT12(uVar31,unaff_SS)));
  SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HRGN16)puVar15,(HRGN16)unaff_SI,unaff_DI,
               (int16)CONCAT412(in_stack_0000ffc4,
                                CONCAT210(in_stack_0000ffc2,
                                          CONCAT28(in_stack_0000ffc0,
                                                   CONCAT26(in_stack_0000ffbe,
                                                            CONCAT24(in_stack_0000ffbc,
                                                                     CONCAT22(in_stack_0000ffba,
                                                                              in_stack_0000ffb8)))))
                               ));
  GETCLIENTRECT((HWND16)&stack0xfff0,(RECT16 *)(param_3 & 0xffff0000 | ZEXT24(unaff_SS)));
  if ((int)PTR_DAT_10a8_0000_10a8_839c < 8) {
    FUN_1010_24b2(puVar15,(undefined4 *)&stack0xfff0);
    *plf16 = in_stack_0000fff6 / -3;
    piVar23 = plf16 + 9;
    uVar18 = 0xffff;
    pcVar14 = PTR_s_Arial_Bold_Italic_10a8_0a0b_10a8_0a24;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar2 = pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (*pcVar2 != '\0');
    uVar18 = ~uVar18;
    piVar22 = (int *)(pcVar14 + -uVar18);
    for (uVar17 = uVar18 >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
      piVar3 = piVar23;
      piVar23 = piVar23 + 1;
      piVar1 = piVar22;
      piVar22 = piVar22 + 1;
      *piVar3 = *piVar1;
    }
    for (uVar18 = (uint)((uVar18 & 1) != 0); uVar18 != 0; uVar18 = uVar18 - 1) {
      piVar3 = piVar23;
      piVar23 = (int *)((int)piVar23 + 1);
      piVar1 = piVar22;
      piVar22 = (int *)((int)piVar22 + 1);
      *(undefined *)piVar3 = *(undefined *)piVar1;
    }
    piVar12 = (int16 *)CREATEFONTINDIRECT((LOGFONT16 *)plf16);
    SETTEXTCOLOR(0x9b,(COLORREF)CONCAT22(puVar15,0x9b));
    if (piVar12 != (int16 *)0x0) {
      piVar13 = SELECTOBJECT(piVar12,(HRGN16)puVar15,(HRGN16)unaff_SI,unaff_DI,
                             (int16)CONCAT412(in_stack_0000ffc4,
                                              CONCAT210(in_stack_0000ffc2,
                                                        CONCAT28(in_stack_0000ffc0,
                                                                 CONCAT26(in_stack_0000ffbe,
                                                                          CONCAT24(in_stack_0000ffbc
                                                                                   ,CONCAT22(
                                                  in_stack_0000ffba,in_stack_0000ffb8)))))));
      SETBKMODE((int16 *)&DAT_10a8_0001,(HDC16)puVar15,
                (int16)CONCAT214(in_stack_0000ffc2,
                                 CONCAT212(in_stack_0000ffc0,
                                           CONCAT210(in_stack_0000ffbe,
                                                     CONCAT28(in_stack_0000ffbc,
                                                              CONCAT26(in_stack_0000ffba,
                                                                       CONCAT24(in_stack_0000ffb8,
                                                                                CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
      FUN_1018_5580(puVar15,(int *)&stack0xffe8,(LPCSTR)0x60597,
                    (int16)CONCAT214(in_stack_0000ffc2,
                                     CONCAT212(in_stack_0000ffc0,
                                               CONCAT210(in_stack_0000ffbe,
                                                         CONCAT28(in_stack_0000ffbc,
                                                                  CONCAT26(in_stack_0000ffba,
                                                                           CONCAT24(
                                                  in_stack_0000ffb8,CONCAT22(unaff_DI,unaff_SI))))))
                                    ));
      SELECTOBJECT(piVar13,(HRGN16)puVar15,(HRGN16)unaff_SI,unaff_DI,
                   (int16)CONCAT412(in_stack_0000ffc4,
                                    CONCAT210(in_stack_0000ffc2,
                                              CONCAT28(in_stack_0000ffc0,
                                                       CONCAT26(in_stack_0000ffbe,
                                                                CONCAT24(in_stack_0000ffbc,
                                                                         CONCAT22(in_stack_0000ffba,
                                                                                  in_stack_0000ffb8)
                                                                        ))))));
      DELETEOBJECT((HGDIOBJ16)piVar12);
    }
  }
  else {
    SETTEXTCOLOR(0x7fff,(COLORREF)CONCAT22(puVar15,0x2ff));
    if (PTR_DAT_10a8_0000_10a8_0586 == (undefined *)0x0) goto LAB_1008_7864;
    SELECTPALETTE(0,(HPALETTE16)PTR_DAT_10a8_0000_10a8_0584,(bool16)puVar15);
    REALIZEPALETTE(puVar15,(HDC16)unaff_SI);
    uVar31 = 0x20;
    uVar32 = 0;
    uVar33 = 0xcc;
    uVar29 = 0x280;
    uVar30 = 0x1e0;
    uVar27 = 0;
    uVar28 = 0;
    uVar25 = 1;
    puVar26 = PTR_DAT_10a8_0000_10a8_0586;
    piVar12 = GETSYSTEMMETRICS((int16 *)&DAT_10a8_0001,
                               (int16)CONCAT214(unaff_SI,CONCAT212(0xcc,ZEXT1112(CONCAT110(0x20,
                                                  CONCAT28(0x1e0,CONCAT26(0x280,ZEXT26(
                                                  PTR_DAT_10a8_0000_10a8_0586))))))));
    uVar7 = 0;
    piVar13 = GETSYSTEMMETRICS((int16 *)0x0,
                               (int16)CONCAT115(uVar32,CONCAT114(uVar31,CONCAT212(uVar30,CONCAT210(
                                                  uVar29,CONCAT28(uVar28,CONCAT26(uVar27,CONCAT24(
                                                  puVar26,CONCAT22(uVar25,piVar12)))))))));
    FUN_1018_6c46(puVar15,0,0,piVar13,uVar7,(HGLOBAL16)piVar12,uVar25,puVar26,uVar27,uVar28,
                  CONCAT22(uVar30,uVar29),
                  CONCAT210(in_stack_0000ffba,
                            CONCAT28(in_stack_0000ffb8,
                                     CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(uVar33,CONCAT11(
                                                  uVar32,uVar31)))))),
                  CONCAT22(in_stack_0000ffbe,in_stack_0000ffbc),
                  CONCAT48(in_stack_0000ffc8,
                           CONCAT44(in_stack_0000ffc4,CONCAT22(in_stack_0000ffc2,in_stack_0000ffc0))
                          ),
                  (int16)CONCAT214(in_stack_0000ffda,
                                   CONCAT86(in_stack_0000ffd2,
                                            CONCAT24(in_stack_0000ffd0,
                                                     CONCAT22(in_stack_0000ffce,in_stack_0000ffcc)))
                                  ),
                  (int16)CONCAT412(in_stack_0000ffe8,
                                   CONCAT210(in_stack_0000ffe6,
                                             CONCAT28(in_stack_0000ffe4,
                                                      CONCAT26(in_stack_0000ffe2,
                                                               CONCAT24(in_stack_0000ffe0,
                                                                        in_stack_0000ffdc))))),
                  (void *)in_stack_0000ffec,(bitmapinfo *)((ulong)in_stack_0000ffec >> 0x10),
                  (uint16)CONCAT214(unaff_BP,CONCAT212(puVar15,CONCAT210(plf16,CONCAT28(
                                                  in_stack_0000fff8,
                                                  CONCAT26(in_stack_0000fff6,
                                                           CONCAT24(in_stack_0000fff4,
                                                                    CONCAT22(in_stack_0000fff2,
                                                                             in_stack_0000fff0))))))
                                   ),in_stack_00000000);
  }
  SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_7a68,(HRGN16)puVar15,(HRGN16)unaff_SI,unaff_DI,
               (int16)CONCAT412(in_stack_0000ffc4,
                                CONCAT210(in_stack_0000ffc2,
                                          CONCAT28(in_stack_0000ffc0,
                                                   CONCAT26(in_stack_0000ffbe,
                                                            CONCAT24(in_stack_0000ffbc,
                                                                     CONCAT22(in_stack_0000ffba,
                                                                              in_stack_0000ffb8)))))
                               ));
  SETBKMODE((int16 *)&DAT_10a8_0001,(HDC16)puVar15,
            (int16)CONCAT214(in_stack_0000ffc2,
                             CONCAT212(in_stack_0000ffc0,
                                       CONCAT210(in_stack_0000ffbe,
                                                 CONCAT28(in_stack_0000ffbc,
                                                          CONCAT26(in_stack_0000ffba,
                                                                   CONCAT24(in_stack_0000ffb8,
                                                                            CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
  FUN_1008_4ece();
  GETWINDOWRECT((HWND16)&stack0xffd8,(RECT16 *)CONCAT22(PTR_DAT_10a8_0000_10a8_0588,unaff_SS));
  pcVar14 = (char *)&DAT_10a8_86de;
  uVar18 = 0xffff;
  do {
    if (uVar18 == 0) break;
    uVar18 = uVar18 - 1;
    pcVar2 = pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (*pcVar2 != '\0');
  FUN_1018_5580(puVar15,(int *)&stack0xfff0,(LPCSTR)CONCAT22(~uVar18 - 1,0x86de),
                (int16)CONCAT214(in_stack_0000ffc2,
                                 CONCAT212(in_stack_0000ffc0,
                                           CONCAT210(in_stack_0000ffbe,
                                                     CONCAT28(in_stack_0000ffbc,
                                                              CONCAT26(in_stack_0000ffba,
                                                                       CONCAT24(in_stack_0000ffb8,
                                                                                CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
  OFFSETRECT((RECT16 *)(ulong)(uint)(((int)PTR_DAT_10a8_0000_10a8_5794 * 3) / 2),
             (int16)CONCAT214(in_stack_0000ffbe,
                              CONCAT212(in_stack_0000ffbc,
                                        CONCAT210(in_stack_0000ffba,
                                                  CONCAT28(in_stack_0000ffb8,
                                                           CONCAT26(unaff_DI,CONCAT24(unaff_SI,
                                                  CONCAT22(unaff_SS,&stack0xfff0))))))),
             (int16)CONCAT214(in_stack_0000ffce,
                              CONCAT212(in_stack_0000ffcc,
                                        CONCAT48(in_stack_0000ffc8,
                                                 CONCAT44(in_stack_0000ffc4,
                                                          CONCAT22(in_stack_0000ffc2,
                                                                   in_stack_0000ffc0))))));
  FUN_1018_5580(puVar15,(int *)&stack0xfff0,(LPCSTR)0x59e,
                (int16)CONCAT214(in_stack_0000ffc2,
                                 CONCAT212(in_stack_0000ffc0,
                                           CONCAT210(in_stack_0000ffbe,
                                                     CONCAT28(in_stack_0000ffbc,
                                                              CONCAT26(in_stack_0000ffba,
                                                                       CONCAT24(in_stack_0000ffb8,
                                                                                CONCAT22(unaff_DI,
                                                  unaff_SI))))))));
LAB_1008_7864:
  ENDPAINT((HWND16)&stack0xffb8,unaff_SS);
  LOCALFREE((HLOCAL16)plf16);
  return 0;
}

