/**
 * ***** BEGIN LICENSE BLOCK *****
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 * 
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * The Original Code is BrowserPlus (tm).
 * 
 * The Initial Developer of the Original Code is Yahoo!.
 * Portions created by Yahoo! are Copyright (C) 2006-2008 Yahoo!.
 * All Rights Reserved.
 * 
 * Contributor(s): 
 * ***** END LICENSE BLOCK ***** */

#pragma once

#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>

namespace bp {
namespace time {


class Stopwatch
{
public:
    Stopwatch();

    bool running();
    
    void start();
    void stop();
    void reset();

    double elapsedSec();
    
  private:
    unsigned int m_cur_ms;
    unsigned int m_cur_s;
    unsigned int m_tot_ms;
    unsigned int m_tot_s;
};

} // namespace time
} // namespace bp

