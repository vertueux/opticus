#pragma once

#include <core/window.h>
#include <core/platform_detection.h>

namespace opticus {

class Win32Window : public opticus::Window {
 public:
  virtual void open_window() override;
  virtual void update_window() override;

  void get_window_size(uint32_t *width, uint32_t* height);
  HWND hWnd;
 private:
  int width = 1300;
  int height = 700;

  wchar_t window_class[256];
  wchar_t title[256];
  MSG msg = { 0 };

  LRESULT CALLBACK window_process(HWND hWnd, UINT message, WPARAM wparam, LPARAM lparam);
};

} // namespace opticus
