; Basic Drush Make file
;
; Usage:
; drush make --prepare-install thor-equities.make

; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.

core = 7.x
api = 2

; Drupal Core
projects[drops-7][type] = "core"
projects[drops-7][download][type] = "get"
projects[drops-7][download][url] = "https://github.com/pantheon-systems/drops-7/archive/master.zip"

; Projects
; --------
; Each project that you would like to include in the makefile should be
; declared under the 'projects' key.

; Add contributed modules to the 'contrib' directory
defaults[projects][subdir] = "contrib"

projects[addressfield][version] = 1.0
projects[advanced_help][version] = 1.1
projects[backup_migrate][version] = 3.0
projects[blockify][version] = 1.2
projects[borealis][version] = 2.2
projects[ckeditor][version] = 1.16
projects[colorbox][version] = 2.8
projects[ctools][version] = 1.7
projects[date][version] = 2.8
projects[devel][version] = 1.5
projects[draggableviews][version] = 2.0
projects[ds][version] = 2.7
projects[elements][version] = 1.4
projects[email][version] = 1.3
projects[entity][version] = 1.6
projects[entity_view_mode][version] = 1.0-rc1
projects[entityreference][version] = 1.1
projects[features][version] = 2.3
projects[fences][version] = 1.0
projects[field_collection][version] = 1.0-beta8
projects[field_formatter_settings][version] = 1.1
projects[field_group][version] = 1.4
projects[file_entity][version] = 2.0-beta1
projects[filefield_paths][version] = 1.0-beta4
; projects[geocoder][version] = 1.2
; projects[geofield][version] = 2.3
; projects[geophp][version] = 1.7
projects[globalredirect][version] = 1.5
projects[html5_tools][version] = 1.2
projects[job_scheduler][version] = 2.0-alpha3
projects[jquery_update][version] = 2.5
projects[libraries][version] = 2.2
projects[link][version] = 1.3
projects[magic][version] = 2.2
projects[manualcrop][version] = 1.4
projects[master][version] = 2.0-beta4
projects[modernizr][version] = 3.4
projects[navbar][version] = 1.6
projects[panels][version] = 3.5
projects[panels_everywhere][version] = 1.0-rc2
projects[paragraphs][version] = 1.0-beta6
projects[pathauto][version] = 1.2
projects[plupload][version] = 1.7
projects[prev_next][version] = 2.x-dev
; projects[scald][version] = 1.3
; projects[scald_file][version] = 1.01
projects[search_krumo][version] = 1.5
projects[seckit][version] = 1.9
projects[semantic_fields][version] = 1.1-beta2
projects[strongarm][version] = 2.0
projects[token][version] = 1.5
; projects[underscore][version] = 1.5
projects[views][version] = 3.10
projects[viewfield][version] = 2.0
projects[waypoints][version] = 1.0
projects[wysiwyg][version] = 2.2

; Themes
projects[aurora] = 3.5
projects[adminimal_theme] = 1.21

; Libraries
; ---------

; CKEditor 4.2.1
;libraries[ckeditor][download][type]= "get"
;libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.2.1/ckeditor_4.2.1_full.zip"
;libraries[ckeditor][directory_name] = "ckeditor"
;libraries[ckeditor][destination] = "libraries"

; NicEdit
;libraries[nicedit][download][type]= "get"
;This version of the js file does not work.  need the version from personal blog.
;libraries[nicedit][download][url] = "https://github.com/danishkhan/NicEdit/archive/master.zip"
;libraries[nicedit][directory_name] = "nicedit"
;libraries[nicedit][destination] = "libraries"

; modernizr
libraries[html5shiv][download][type]= "get"
;libraries[html5shiv][download][url] = "https://cdnjs.cloudflare.com/ajax/libs/modernizr/2.8.3/modernizr.min.js"
libraries[html5shiv][download][url] = "https://github.com/Modernizr/Modernizr/archive/v2.8.3.zip"
libraries[html5shiv][directory_name] = "modernizr"
libraries[html5shiv][destination] = "libraries"

; imagesloaded
libraries[imagesloaded][download][type]= "get"
libraries[imagesloaded][download][url] = https://github.com/desandro/imagesloaded/archive/v2.1.2.tar.gz
libraries[imagesloaded][directory_name] = "jquery.imagesloaded"
libraries[imagesloaded][destination] = "libraries"

; imgareaselect
libraries[imgareaselect][download][type]= "get"
libraries[imgareaselect][download][url] = http://odyniec.net/projects/imgareaselect/jquery.imgareaselect-0.9.10.zip
libraries[imgareaselect][directory_name] = "jquery.imgareaselect"
libraries[imgareaselect][destination] = "libraries"

; Backbone
libraries[backbone][download][type] = "get"
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/master.zip
libraries[backbone][directory_name] = "backbone"
libraries[backbone][destination] = "libraries"

; Underscore
libraries[underscore][download][type] = "get"
libraries[underscore][download][url] = https://github.com/jashkenas/underscore/archive/master.zip
libraries[underscore][download][directory_name] = "underscore"
libraries[underscore][destination] = "libraries"
