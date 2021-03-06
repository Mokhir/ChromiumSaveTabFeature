// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_VR_ASSETS_LOAD_STATUS_H_
#define CHROME_BROWSER_VR_ASSETS_LOAD_STATUS_H_

namespace vr {

// Status of loading assets.
//
// Keep this enum aligned with VRAssetsLoadStatus in
// //tools/metrics/histograms/enums.xml.
// If you rename this file update the
// reference in
// //tools/metrics/histograms/histograms.xml.
enum class AssetsLoadStatus : int {
  kSuccess = 0,         // Assets loaded successfully.
  kParseFailure = 1,    // Failed to load assets.
  kInvalidContent = 2,  // Content of assets files is invalid.
};

}  // namespace vr

#endif  // CHROME_BROWSER_VR_ASSETS_LOAD_STATUS_H_
