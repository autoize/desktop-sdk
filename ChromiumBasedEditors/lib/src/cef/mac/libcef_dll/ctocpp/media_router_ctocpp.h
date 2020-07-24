// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=e3d62de09a699415a839cadda52cca2582d90063$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_MEDIA_ROUTER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MEDIA_ROUTER_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_media_router_capi.h"
#include "include/cef_media_router.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefMediaRouterCToCpp : public CefCToCppRefCounted<CefMediaRouterCToCpp,
                                                        CefMediaRouter,
                                                        cef_media_router_t> {
 public:
  CefMediaRouterCToCpp();
  virtual ~CefMediaRouterCToCpp();

  // CefMediaRouter methods.
  CefRefPtr<CefRegistration> AddObserver(
      CefRefPtr<CefMediaObserver> observer) OVERRIDE;
  CefRefPtr<CefMediaSource> GetSource(const CefString& urn) OVERRIDE;
  void NotifyCurrentSinks() OVERRIDE;
  void CreateRoute(CefRefPtr<CefMediaSource> source,
                   CefRefPtr<CefMediaSink> sink,
                   CefRefPtr<CefMediaRouteCreateCallback> callback) OVERRIDE;
  void NotifyCurrentRoutes() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_MEDIA_ROUTER_CTOCPP_H_
