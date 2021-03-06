// This may look like C code, but it's really -*- C++ -*-
/*
 * Copyright (C) 2013 Emweb bvba, Leuven, Belgium.
 *
 * See the LICENSE file for terms of use.
 */

#include "Wt/Chart/WLegend"

namespace Wt {
  namespace Chart {

WLegend::WLegend()
  : legendEnabled_(false),
    legendLocation_(LegendOutside),
    legendSide_(Right),
    legendAlignment_(AlignMiddle),
    legendColumns_(1),
    legendColumnWidth_(100),
    legendBorder_(NoPen),
    legendBackground_(NoBrush)
{
  legendFont_.setFamily(WFont::SansSerif);
  legendFont_.setSize(WFont::FixedSize, WLength(10, WLength::Point));
}
    
void WLegend::setLegendEnabled(bool enabled) {
  if (legendEnabled_ != enabled) {
    legendEnabled_ = enabled;
  }
}
    
void WLegend::setLegendLocation(LegendLocation location, 
				Side side, 
				AlignmentFlag alignment)
{
  legendLocation_ = location;
  legendSide_ = side;
  legendAlignment_ = alignment;
}
    
void WLegend::setLegendStyle(const WFont &font, 
			     const WPen &border, 
			     const WBrush &background)
{
  legendFont_ = font;
  legendBorder_ = border;
  legendBackground_ = background;  
}

void WLegend::setLegendColumns(int columns)
{
  legendColumns_ = columns;
}

void WLegend::setLegendColumnWidth(const WLength &columnWidth)
{
  legendColumnWidth_ = columnWidth;
}

  }
}
