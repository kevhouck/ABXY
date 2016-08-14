# ABXY
ABXY Kickstarter project, 2013, project was successfully funded with over 40 backers.

These are Arduino libraries I wrote for my ABXY Kickstarter project. Since I wrote this in high school, it needs to be rewritten:
* Create a non-blocking version that works by:
  * Using user created functions that process button input to create button output
  * Pass function pointer to library
  * library uses an event loop to execute user functions
  * Event loop polls button state on every iteration
  * User functions accept context object with history of button states to make decisions
  * Have flags that block multiple functions from trying to output to the same button
  * Also need to use flags to avoid reading from buttons that have their state programmatically set
* Update the blocking version of the library:
  * Move each class into its own file (if arduino allows, it may not)
  * Use enums for if button is pressed rather than 0 or 1
  * Create library setup class that sets the config values for debouncing time and other things
