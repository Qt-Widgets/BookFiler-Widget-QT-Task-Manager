/*
 * @name BookFiler Widget w/ QT - Task Manager
 * @version 1.00
 * @license MIT
 * @brief Task Manager Widget tracks task progress
 */

#ifndef BOOKFILER_WIDGET_QT_TASK_MANAGER_TOOL_BAR_H
#define BOOKFILER_WIDGET_QT_TASK_MANAGER_TOOL_BAR_H

// config
#include "../core/config.hpp"

// C++17
//#include <filesystem>
#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <functional>
#include <initializer_list>
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <thread>
#include <utility>
#include <vector>

/* boost 1.72.0
 * License: Boost Software License (similar to BSD and MIT)
 */
#include <boost/signals2.hpp>

/* sqlite3 3.33.0
 * License: PublicDomain
 */
#include <sqlite3.h>

/* QT 5.13.2
 * License: LGPLv3
 */
#include <QWidget>

// Local Project
#include "WidgetTaskList.hpp"

/*
 * bookfiler - widget
 */
namespace bookfiler {
namespace widget {

class TaskToolbar : public QWidget {
  Q_OBJECT
private:
  std::shared_ptr<TaskList> taskListWidget;

public:
  TaskToolbar();
  ~TaskToolbar();

  /* Sets the TaskList widget that the toolbar will
   * act on
   * @param widget a shared pointer of the TaskList widget
   * @return 0 on success, else error code
   */
  int setTaskList(std::shared_ptr<TaskList> widget);
};

} // namespace widget
} // namespace bookfiler

#endif
// end BOOKFILER_WIDGET_QT_TASK_MANAGER_TOOL_BAR_H
