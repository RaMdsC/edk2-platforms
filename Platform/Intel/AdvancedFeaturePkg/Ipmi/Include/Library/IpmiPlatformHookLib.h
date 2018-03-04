/** @file
  This library abstract the platform specific hook for IPMI.

Copyright (c) 2018, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials are licensed and made available under
the terms and conditions of the BSD License that accompanies this distribution.
The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php.

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef _IPMI_PLATFORM_UPDATE_LIB_H_
#define _IPMI_PLATFORM_UPDATE_LIB_H_

#include <Uefi.h>
#include <IndustryStandard/Acpi.h>
#include <Protocol/Smbios.h>

EFI_STATUS
EFIAPI
PlatformIpmiIoRangeSet(
  UINT16 IpmiIoBase
  );

#endif

