## 15.x

### 15.0-beta2 (2025-04-13)

- Feature: Snow-covered rocks are now visible (#13627)
- Feature: Generate more rocks on steep slopes during map generation or heightmap import (#13462)
- Feature: Prevent towns from upgrading individually-placed houses (#13270)
- Feature: [Win32] Touchpad two-finger map scrolling (#13172)
- Feature: NewGRF Badges (#13073)
- Add: [NewGRF] Add road-/tram-/rail-type variable 0x45 to get mutual road-/tram-/rail-type on same tile (#13934)
- Add: [Script] Newer Cargo Classes (#13779)
- Add: Show hyperlink destination tooltips in text window (#13742)
- Add: [Script] Saving/loading ScriptList (#13556)
- Add: Press Ctrl to build diagonal canals in game mode (#13432)
- Add: Sandbox settings to Sandbox Options window (#13268)
- Add: Setting to allow placing houses manually in-game (#13266)
- Add: [Script] Event for when a company's president name changes (#13208)
- Add: Ability to toggle visibility of station signs by facility (#13207)
- Add: [Script] ScriptEventCompanyRename (#12878)
- Add: Ukrainian Hryvnia currency (#12877)
- Add: Convert 32bpp-only sprites to 8bpp when needed (#11602)
- Change: [Script] Start GS (but don't run it) when generating world in scenario editor (#13961)
- Change: Make tree placement at world generation look more organic (#13515)
- Change: [MacOS] Put the icon in a rounded rectangle (#13446)
- Change: [Script] GetWaypointID to return the StationID of any waypoint (#13407)
- Change: Draw company manager face jacket after collar (#13390)
- Change: Don't distinguish between bus and truck stops when removing them (#13384)
- Change: [Script] Rename BridgeID to BridgeType in the script API (#13352)
- Change: Add fonts document to help window (#13305)
- Change: Log changes to sandbox settings (#13267)
- Change: When player joins network company, use its name instead of number in chat (#13263)
- Change: [Win32] Draw window title bar according to current Windows light/dark theme (#13196)
- Change: Restore wider spacers in main toolbars (#12039)
- Fix: NewGRF Global variables 0D, 0E and 1E refer to wrong GRFFile (#13986)
- Fix #13980: Allow diagonal selection for road convert (#13983)
- Fix: Validate raw strings from game-scripts, and strip invalid and control characters (#13976)
- Fix: Capitalise "Disabled" for the "maximum non-sticky open windows" setting (#13975)
- Fix: Frame widget with label had incorrect spacing (#13967)
- Fix: StringFilter included quotes in the search and failed (#13965)
- Fix #13955: Make graphs respect RTL (#13957)
- Fix: Numbers were left-aligned for RTL languages in several windows (#13959)
- Fix: MayHaveRoad claimed rail station tiles had road, so the custom stationspec index would be read as roadtype (#13949)
- Fix: [Script] Prevent cloning of API instances (#13947)
- Fix: Reference to the correct section of the README, if a graphics or a sound set is incomplete (#13946)
- Fix: Draw the bevel around the music track name as inset (#13935)
- Fix #13923: Padding in music GUI was asymmetric, so it looked different for LTR and RTL languages (#13933)
- Fix #13928: BuildOilRig did not properly set airport rotation (#13929)
- Fix: SDL2 application name hint was not effective (#13926)
- Fix #13921: [Win32] Don't try close an already closed event handle during destruction (#13924)
- Fix #13921: Don't reject MIDI files with a valid file magic value (#13924)
- Fix #13912: Multitile buildings break apart in house picker (#13914)
- Fix #13908: Require double click on order to change stop location (#13913)
- Fix #13910: Invalidate content of house picker window if language is changed (#13911)
- Fix: [Script] Reset instance when changing running scripts in scenario editor (#13906)
- Fix: [Script] Only run the gamescript GameLoop() in-game (#13896)
- Fix #13893: Reversed all x-axis labels for company related and industry production graphs in wallclock mode (#13894)
- Fix #13842: Close industry production graph if industry is removed (#13890)
- Fix #11528: Starting autorail dragging from existing track tiles resulted in adding non-continuous tracks (#13885)
- Fix: Autoreplace rail/road list only listed buildable types (#13887)
- Fix: [NewGRF] Display an error, if NewGRF reference out-of-bounds string parameters in gender/plural choices (#13881)
- Fix #13849: Settings in old saves could be overridden by defaults (#13874)
- Fix #13562: Removed cost estimation message from money cheat (#13857)
- Fix: [NewGRF] Plurals and genders did not work in strings with cases or substrings (#13853, #13852)
- Fix: [NewGRF] String parameter stack and case selection were not processed for control code 0x81 (#13851)
- Fix #13839: Incorrect colour of first company legend in smallmap window (#13841)
- Fix: i circumflex width in TrueType small font (#13836)
- Fix: Don't show owner of non-existent road (#13824)
- Fix: Error message window timeout doesn't match setting (#13812)
- Fix #13795: Crash in vehicle list of 32-bit platforms (#13796)
- Fix: [Script] Company rename event sometimes had the wrong name (#13794)
- Fix: Improve manager face randomisation (#13776)
- Fix #13740: [Script] Handle implicit orders for jump orders (#13753)
- Fix #13749: Default service intervals were not updated when changing timekeeping unit (#13751)
- Fix #13725: Use proper query strings for changing timetable values (#13737)
- Fix #11226: Don't draw story page elements that won't be visible (#13736)
- Fix: More AI than max_no_competitors could start with competitors_interval=0 (#13670)
- Fix: League table window ignored the minimal size in its widget description (#13629)
- Fix: Incorrect snow density when making rocks snowy (#13626)
- Fix: NewGRF vehicles display loading sprites when not actually loading or unloading (#13554)
- Fix #12925: Prevent cost estimates for settings changes (#13550)
- Fix: [Script] Report errors happening during 'Load()' (#13537)
- Fix: [Script] Improve type checking of parameters (#13522)
- Fix: [Script] Don't set CommandCallback for asynchronous commands (#13501)
- Fix: Missing error messages with sell- and autoreplace-all commands (#13469)
- Fix: Too many trees when generating trees at same height (#13460)
- Fix #12912: Company inaugurated year in wallclock mode was not saved (#13448)
- Fix: [Script] Wrong return value for failed preconditions Vehicle::CloneVehicle (#13445)
- Fix #13140: Scale initial industry production estimate by cargo scale (#13427)
- Fix #13384: Crash when remove bus/truck stop tool used on road waypoints (#13391)
- Fix #12987: Historical houses now always spawn completed (#13332)
- Fix: [Win32] Font detection didn't work for locales not supporting code pages (#13306)
- Fix: Restore ability to disable service interval (#13281)
- Fix: Hide company settings from console commands (#13269)
- Fix: Disable service interval widgets for non-owned vehicles (#13260)
- Fix #13225: Cargo payment graph key toggled wrong data sets (#13226)
- Fix: Rail station tile flags were not set early enough (#13203)
- Fix #13199: -f command line parameter does not need a value (#13200)
- Fix: Missing water region invalidation after flooding a half tile with rail in the highest corner (#13047)
- Fix: Strip control codes before sorting NewGRF names (#13034)
- Fix #12968: Added back ability to create unremovable houses (#12989)
- Remove: Drop support for UCS2/UTF-16 encoded scripts (#13992)
- Remove: Support for SDL1.2 (#13298)


### 15.0-beta1 (2024-12-24)

- Feature: Town, industry and vehicle window zoom with mouse wheel (#12810, #12809, #12797)
- Feature: Show count of towns and industries in their directory window captions (#12800)
- Feature: Toggle for showing industry names in small map (#12770)
- Feature: Manually place town buildings in scenario editor (#12661, #12741)
- Feature: Filter new picker window by all classes, by used types, or by favourites (#12595)
- Feature: New picker window for rail and road stations, rail and road waypoints, and objects (#12595)
- Feature: Road waypoints (#12572)
- Feature: Allow base sounds set to be changed mid-game (#12399)
- Feature: Authorize specific clients to join network, company and remote console without password (#12337, #12326, #12329)
- Feature: Authenticate to the server without sending the password (#12323, #11878)
- Feature: Encrypt the connection between game server and client, and admin (#12300, #11878)
- Feature: Industry production/transported graph (#10541, #13083)
- Feature: Import town data from JSON file (#10409)
- Add: Implement 2D map scrolling under SDL2 (#13169)
- Add: [NewGRF] Callback for custom refit mask for engines/vehicles (#13090)
- Add: [NewGRF] Vehicle prop that allows refittability based on cargo class intersection (#13090)
- Add: Ability to show and filter different datasets on the same graph (#13083)
- Add: Show and toggle follow vehicle state in vehicle view window (#13076)
- Add: Set application name for SDL2 (#13061)
- Add: Support sound effects in Ogg Opus format (#13055)
- Add: Improving town-owned bridges increases company rating (#13036)
- Add: Apply rail/road type conversion when NewGRFs are updated mid-game (#13021)
- Add: Implement missing road type label conversion (#13021)
- Add: [NewGRF] Cargo class bits 13 and 14 now define potable and non-potable (#12979)
- Add: Overlay cargo icon in vehicle/depot list when holding shift+ctrl (#12938)
- Add: [Script] Include number of victims in ScriptEventVehicleCrashed (#12861)
- Add: [Console] Schedule command to execute a script file next in-game month (#12761)
- Add: Setting to disable warning for old vehicles (#12714)
- Add: Use macOS Game Mode identification (#12700)
- Add: Shade button to waypoint picker (#12682)
- Add: [NewGRF] Extended custom waypoint classes (#12653)
- Add: 'Get Content' buttons next to base set dropdowns in Game Options (#12627)
- Add: [NewGRF] Custom road waypoint support (#12572)
- Add: [NewGRF] Allow fixed layout up to 256 tiles per NewGRF rail station (#12554)
- Add: [NewGRF] Station property 1E, extended station tile flags (#12554)
- Add: [SDL2] Driver parameter 'no_mouse_capture' to ease interactive debugging (#12336)
- Add: Basic autocompletion on tab for console commands (#12163)
- Add: Portuguese Escudo currency (#12108)
- Change: Hide buttons in Found Town window that can't be used (#13182)
- Change: Include new cargo classes in dump cargo types console command (#13174)
- Change: Use floats for tracking 2D scrolling to improve smoothness (#13169)
- Change: Improve news window layouts (#13136, #13134)
- Change: Show company finances column if it has any values in it (#13112)
- Change: Treat recolour sprites as regular sprites in the SpriteCache (#13107)
- Change: Determine industry directory width only on visible rows (#13097)
- Change: Add sound memory usage to framerate window (#13055)
- Change: Invalidate build toolbars when NewGRFs are changed (#13046)
- Change: Don't try to flood buoys or dock tiles (#13013)
- Change: Store water tile flooding state in the map (#13013)
- Change: Exclude parent item from directory sort in FiosGetFileList (#12947)
- Change: [NewGRF] Place all 8 bits of station tile layout in var 40/41 (#12890)
- Change: [NewGRF] Install translation tables into overridden NewGRF (#12879)
- Change: [UI] Use scaled sprite sizes and correct matrix padding for content list (#12875)
- Change: [UI] Improved Network server list icon sizing and text positioning (#12874)
- Change: Path signals now show green on junction-less tracks by default (#12857)
- Change: Don't use house construction states in Scenario Editor (#12822)
- Change: Changing zoom no longer stops following vehicle (#12808)
- Change: Allow bribing local authority when other company has exclusive rights (#12763)
- Change: Position caret on left or right of glyph depending on language direction (#12760)
- Change: Do not automatically connect double depots with track (#12752)
- Change: Call custom house name callback in House Picker (#12741)
- Change: [NewGRF] Treat house max year 0xFFFF as MAX_YEAR (#12740)
- Change: [UI] Remove substitution of missing glyph with '?' glyph (#12736)
- Change: [UI] Use SetMinimalTextLines to set label height correctly (#12734)
- Change: Don't use house construction states in Scenario Editor (#12730)
- Change: Ignore min/max years for manual house placer (#12687)
- Change: Use default NewGRF cargo translation table if no custom table is provided (#12646)
- Change: Don't include midi file processing in dedicated server build (#12632)
- Change: [Linkgraph] Improve distance scaling algorithm in demand scaler (#12542)
- Change: Draw group hierarchy tree lines (#12522)
- Change: Display more useful information in sprite aligner than sprite ID (#12439)
- Change: Disallow using Action A to load sprites above the baseset unless reserved (#12435)
- Change: Use aspect ratios for some common widgets and buttons (#12386, #12636)
- Change: Show correct default value and unit for vehicle service interval setting (#12376)
- Change: Use per-company group numbers (#12297)
- Change: [NewGRF] Increase house type limit from 512 to 4096 (#12288)
- Change: Add dividers in vehicle group action dropdown (#12284)
- Change: Use same audio buffer size (and config parameter) for all sound drivers (#12227)
- Change: Allow rail and road depot overbuilding in current orientation in order to connect to rail or road (#12219)
- Change: Show tile index as decimal number in land info window (#12104)
- Change: Increase object/station/roadstop class limit (#12094)
- Change: Disable the insecure admin login by default; replaced by allow list (#11878)
- Fix: [NewGRF] New engines did not have a default cargo type set (#13146)
- Fix: String parameter not set when determining width of smallmap contour labels (#13145)
- Fix #13022: Ensure minimum size of scrollbar slider (#13119)
- Fix #13110: [Script] Convert table keys to string when generating JSON (#13113)
- Fix: Error message not set when unable load an old save (#13106)
- Fix: Network clients incorrectly truncated all strings to NETWORK_COMPANY_NAME_LENGTH (#13102)
- Fix: Don't allow right-click to close world generation progress window (#13084)
- Fix: VF_LOADING_FINISHED and VF_STOP_LOADING flags tested on wrong vehicle part (#13063)
- Fix: X-axis direction of industry production graph (#13062)
- Fix #13053: Payment transfers incorrect for non-passenger cargos (#13054)
- Fix: Invalid data used for height map curves after first run (#13039)
- Fix: SkipGarbage() skipped all multi-byte utf-8 characters (#13032)
- Fix: Don't invalidate water regions on the other side of the map (#13012)
- Fix: ScriptTile::PlantTreeRectangle does not check that the end tile is in bounds (#13004)
- Fix #12973: Don't exclude high score after using sandbox (#12999)
- Fix #12976: Incorrect widget rect scrolling for RTL languages (#12978)
- Fix: Crash when exiting game with end game window open (#12962)
- Fix #12957: 1-in-X proportion of towns being cities is unnecessarily random (#12960)
- Fix: ICUParagraphLayout line wrapping (#12956)
- Fix: Highscore/Endgame window can disappear offscreen if game window is resized (#12951)
- Fix #12940: Use specific error when overbuilding station on signals (#12943)
- Fix #12917: Write to negative array index for some string patterns (#12932)
- Fix: Incorrect truncation in string setting validation (#12924)
- Fix #12914: Fix use of invalidated pointer in viewport drawer (#12918)
- Fix: Train curve detection did not take shortened parts into account (#12910)
- Fix: DepotWindow::GetVehicleFromDepotWndPt not refreshing vehicle list (#12907)
- Fix: DupSprite did not copy the control_flags field (#12906)
- Fix: Excessively fast ships on aqueducts fail to move at correct speed (#12895)
- Fix: Timetable does not show vehicles as early (#12873)
- Fix #12856: Updating network settings does not invalidate data (#12858)
- Fix #12839: Truncated help text dialog on Windows (#12844)
- Fix #12832: Sanitise strings from NewGRF before logging them in Debug output (#12835)
- Fix #12825: Crash when opening road toolbar in scenario editor (#12826)
- Fix #12818: During Hostile Takeover, profit was calculated incorrectly (#12819)
- Fix: Apply widget's internal padding to scrollbar capacity/position (#12801)
- Fix #12365: Company Window now displays proper inauguration year and period while in wallclock mode (#12798)
- Fix #12787: Boostrap doesn't have main vindow (#12788)
- Fix #10239: Use elevated snow height for roads on flat foundations (#12776)
- Fix #12764: Crash when opening Detailed performance rating window with no companies (#12765)
- Fix: Water infrastructure total when changing owner of object on water or using DC_FORCE_CLEAR_TILE (#12757, #12729)
- Fix: Editbox behaved improperly with RTL languages (#12746)
- Fix #12283: Vehicle group dropdown shouldn't have default action (#12727)
- Fix: Reverse left/right keypress when editing RTL text (#12711, #12710)
- Fix: Crash if interface scale or font size changes with chat box present (#12705)
- Fix: Make progress bars obey language direction (#12704)
- Fix #12681: Abstract filetype not set for network client join savegames (#12701)
- Fix: Implement support for secure state coding on macOS (#12698)
- Fix: Add entitlements needed for plugins on macOS (#12697)
- Fix: Allow resolving house parent scope (town) of unbuilt houses (#12695)
- Fix #12685: Nullptr dereference when checking for equal loaded/loading groups (#12686)
- Fix: Unable to choose a font containing hyphen (#12684)
- Fix: [Timetable] Use days as precision in day mode for accurate timetable syncing (#12683)
- Fix #12550: Files were not saved in the right location when binary and configuration are in the same folder (#12679)
- Fix #12591: Give descriptive error when station construction fails due to wrong layout (#12678)
- Fix #12594: Give descriptive error when company takeover fails due to vehicle limit (#12676)
- Fix: Ensure revision mismatch also considers random debugging status (#12673)
- Fix #12411: [Admin] Send Network Welcome Packet to admin port after game creation completed WelcomeAll moved into NetworkOnGameStart (#12672)
- Fix: [MacOS] Memory leak in CoreTextFontCache (#12662)
- Fix: Use widget resize step instead of window resize step (#12659)
- Fix #12563: Race condition setting finish flag in WinHTTP (#12658)
- Fix #12648: Ensure all uses of std::filesystem::path use native encoding (#12650)
- Fix #12643: _is_water_region_valid is not cleared/reset in AllocateWaterRegions (#12649)
- Fix: Console command scrolling did not take account of padding and cursor width (#12642)
- Fix: Allow changing size of default OpenTTD font (#12641)
- Fix: Always allow setting company settings, company/president name/face (#12635)
- Fix: For GUI network servers, name the first company the same as any other company (#12629)
- Fix: Properly test for presence of waypoint in NewGRF resolver (#12579)
- Fix: Inconsistent space between console history and current line (#12528)
- Fix: Build industry window did not take width of count into account (#12476)
- Fix: Draw continuation lines for engine variant hierarchy tree (#12434)
- Fix: Viewport signs assume small font is smaller than normal font (#12422)
- Fix #11345: Use correct default button value for vehicle service interval setting (#12376)
- Fix #7982: Show existing coverage with unambiguous adjacent station (#12346)
- Fix: Off-by-one in EnsureVisibleCaption (#12261)
- Fix #11055: Make saveload failure error messages consistent with others (#12247)
- Fix: Train running sounds should only be produced for engine parts (#12229)
- Fix: Maximum permitted sound volume from NewGRF is 128 (#12222)
- Fix: Relocate main toolbar and statusbar before other windows (#12218)
- Fix: YAPF doesn't check destination for start nodes (#12217)
- Fix: Make link graph node borders scale with GUI (#12167)
- Fix #10490: Allow ships to exit depots if another is not moving at the exit point (#12161)
- Fix: Incorrect padding for text purchase list (#12160)
- Fix: GetNextDecisionNode ignored go to nearest depot when combined with stop at depot (#12130)
- Fix: Aircraft could route to hangars outside their range when stopping at them (#12130)
- Remove: Hidden setting for adjacent stations (#12862)
- Remove: Custom opendir implementation for Windows no longer needed (#12524)
- Remove: Company passwords; replaced by client allow lists (#12337)
- Remove: Autoclean_unprotected settings; all companies will be protected (#12337)
- Remove: NPF and pathfinder change settings (#12209)


## 14.x

### 14.1 (2024-05-03)

- Add: Check that towns can build roads before generating map (#12503)
- Fix #12228: Ships could get lost due to pathfinder not considering reversing in some cases (#12474)
- Fix #12433: Width of unit number display was too narrow (#12534)
- Fix #12502: Desync related to vehicle replacement (#12512)
- Fix #12506: Desync after new oil rig is constructed (#12511)
- Fix #12584: Crash on some tar files during tar scan (#12586)
- Fix: [SDL2] Keypad numbers did not function (#12596)
- Fix: Houses and industry tiles could accept incorrect cargo (#12547)
- Fix: Map generation stage strings were incorrect (#12549)
- Fix: [Script] Allow only 255 league tables, as 255 itself is the invalid id sentinel (#12545)
- Fix: Mark vehicle status bars dirty when a vehicle leaves unbunching depot (#12516)
- Fix: Do not show train waiting for unbunching as waiting for free path (#12515)
- Fix: Smooth outliers in unbunching round trip calculations (#12513)


### 14.0 (2024-04-13)

- Update: New title game for 14.0
- Fix #12477: Crash when launching OpenTTD from within a Dropbox folder (#12478)
- Fix #12233: Mini order list overlaps vehicle group name (#12423)
- Fix #12114: Viewport coords of crashed aircraft not updated when falling (#12424)
- Fix #12395: Ensure president name widget is tall enough (#12419)
- Fix #12415: Incorrect payment for aircraft secondary cargo (#12416)
- Fix #12387: [NewGRF] Wrong tile offset passed to rail station CB 149 (slope check)
- Fix #12388: Autoreplacing train heads slowly made the unit number grow (#12389)
- Fix #12368: Incorrect offset for click position within industry chain window (#12370)
- Fix: Aircraft can float above the ground when crashed (#12425)
- Fix: Segfault when using -q without providing a . character (#12418)
- Fix: Wrong scrolling dropdown list position with RTL (#12412)
- Fix: [Win32] Force font mapper to only use TrueType fonts (#12406)
- Fix: "-q" displays NewGRF IDs in the wrong byte-order (#12397)
- Fix: Do not send chat to clients that have not authorized yet (#12377)
- Fix: [NewGRF] Label for fruit incorrectly changed to `FRUI` from `FRUT` (#12367)
- Fix: [Script] ScriptSubsidy::GetExpireDate should return an economy-date (#12372)
- Revert #11603: [Script] AI/GSTimeMode was not the best solution for economy/calendar support (#12362)


### 14.0-RC3 (2024-03-23)

- Fix #12347: Crash attempting to find catchment tiles of a station with no catchment area (#12348)
- Fix #12319: Some SSE blitters were broken due to ODR violations (#12322)
- Fix #12302: Allow empty train engines to use an invalid cargo type (#12325)
- Fix #12305: Crash with large positive sprite x offset in engine preview window (#12313)
- Fix #12166: Crash when opening tram road stop build window (#12168)
- Fix #12092: Incorrect x-axis in cargo payment graph window (#12359)
- Fix: Crash when attempting to join a company while not joined (#12353)
- Change: Show unbunching action in timetable window (#12351)
- Change: [Windows] Switch to Microsoft Azure code signing certificate (#12292)


### 14.0-RC2 (2024-03-16)

- Update: Bump bundled OpenTTD TTF fonts to version v0.6 (#12276)
- Update: Developer credits (#12173, #12235)
- Change: Use (at least) standard toolbar button size for signal selection buttons (#12265)
- Change: [Script] Match FormatString behaviour more closely (#12205)
- Fix #12236: Ship pathfinder causes crash when ship is already at destination (#12238)
- Fix #12225: [Script] Missing AI::ResetConfig support for running AI config (#12226)
- Fix #12203: When unbunching at a depot, don't overlook implicit orders (#12220)
- Fix #12196: Always show selected content, even when filtering and disable "select upgrade" button when filtering (#12201)
- Fix #12195: Reset cursor when no Object is selected (#12207)
- Fix #12176: Ships are circling in one place (#12181)
- Fix #12154: Incorrect calendar day lengths with minutes per year setting (#12158)
- Fix #12148: Do not draw decimals when number of digits is 0 (#12150)
- Fix #12147: Reset all saved settings to their default before loading a game (#12210)
- Fix #12145: Incorrect date handling in date cheat in wallclock time-keeping mode (#12146)
- Fix #12134: Use correct error messages if clearing drive-through road stops fails (#12139)
- Fix #12133: [Script] Don't crash when emergency saving (#12138)
- Fix #12127: Truncation ellipses rendered shadows even for black font without shadows (#12132)
- Fix #12119: Remove red warning text when maximum loan is zero (#12141)
- Fix #12118: When adding an unbunching order, properly check for unsafe conditions (#12136)
- Fix #12076: Do not allow 'join' command on dedicated servers (#12208)
- Fix #12010: Use economy timer for vehicle stats minimum age, not calendar (#12142)
- Fix: Improved ship movement when no path to destination is found (#12285, #12286)
- Fix: Initialize _switch_mode_time so crash-logs before first game have a realistic time (#12184)
- Fix: [Script] Only show debug script window at the end of savegame loading (#12135)
- Fix: [Script] Broken ScriptText circular reference detection (#12187)
- Fix: Ordering of command per tick limit and pause mode filtering (#12126)
- Fix: Only reset unbunching departure data in the correct depot (#12155)
- Fix: Off by one in TimerGameEconomy::ConvertDateToYMD in wallclock mode (#12143)
- Fix: Missing savegame conversion for current_order (#12188)
- Fix: Helptext for timekeeping unit setting erroneously refers to vehicle movement (#12172)
- Fix: Don't show "insert order" errors in the console (#12245)
- Fix: Don't defer OnResize() after ReInit() (#12174)
- Remove: [Script] random_deviation from setting description table (#12221)
- Revert #11993: New number format system does not and cannot work for CJK languages (#12157)
- Revert #11606: Don't auto-build past tunnelbridge ends (#12244)


### 14.0-RC1 (2024-02-18)

- Feature: Fully user configurable number format and abbreviations (#11993)
- Add: Show cargo icons on subsidy list window (#12079)
- Add: [Script] GetAirportNumHelipads (#12085)
- Change: Show 6 or 2 orientation buttons in NewGRF road stop picker as appropriate (#12090)
- Change: Show cargo icons on Industry View window (#12071)
- Change: Improve performance of finding free pool slots (#12055)
- Change: Draw north-side farm fences/hedges/walls on tile edge, instead of 1/16th in (#12048)
- Change: When adding orders, Ctrl+Click on a depot to unbunch, instead of service if required (#12023)
- Change: Store running AI config inside Company (#12003)
- Change: Show speed before destination in vehicle status bar (#11932)
- Change: Replace long list of cargo filter buttons with a multi-select dropdown list (#11552)
- Change: [Script] Use company randomizer when adding random deviation (#12065)
- Fix #12074: Don't allow "part" command for dedicated servers (#12075)
- Fix #12052: NewGRFs clearing industry cargo slots could fallback to default instead of empty (#12053)
- Fix #12050: Add default size, shade and pin control buttons to company livery widget (#12080)
- Fix #12041: Tarball extraction failing due to incorrect filename (#12044)
- Fix #12037: Blurry OpenTTD font on Mac OS (#12047)
- Fix #12029: Don't show Sandbox Options in multiplayer (#12032)
- Fix #12024: Autoreplace failed news message for trains must go to lead engine (#12025)
- Fix #12022: Adjust economy date when changing timekeeping units in Scenario Editor (#12042)
- Fix #12020: Unbunch and service if needed should be mutually exclusive depot order types (#12021)
- Fix #12019: Correctly highlight depot unbunch action in dropdown (#12021)
- Fix #12014: Remove water when area clearing ship depot (#12030)
- Fix #11840: Ship pathfinder always returns a valid trackdir if one is available (#12031)
- Fix #10983: [AdminPort] Correct order of messages (#11140)
- Fix #10405: [Script] Test engine and vehicle type validity for ScriptGroup::GetNumEngines (#11887)
- Fix #10079: Don't render at 1000fps if HW acceleration + vsync is requested but not active (#12067)
- Fix: Shadows of individual character glyphs could be drawn over other characters (#12115)
- Fix: Don't invalidate station list on vehicle load/unload (#12112)
- Fix: NewGRF roadstops were ignored if only in default class (#12089)
- Fix: Visually also disable vsync when not using HW acceleration (#12066)
- Fix: Industry tiles and houses could accept incorrect cargo types (#12062)
- Fix: Redraw orders when a station feature is added/removed (#12061)
- Fix: For content service, fallback to TCP downloads when HTTP stalls (#12056)
- Fix: Don't issue autoreplace failed news message for command test mode (#12026)
- Remove: Setting "no_http_content_downloads" (#12058)


### 14.0-beta3 (2024-02-06)

- Add: [Script] ScriptTileList_StationCoverage to get station coverage area (#12015)
- Change: Update OpenTTD TTF fonts to v0.5 (#11994)
- Fix #12012: Crash when opening orders of another company (#12013)
- Fix #12001: Use correct valid cargo check for old-style NewGRF town house 3rd cargo set up (#12006)
- Fix #11997: Adjust economy date by 1920 when loading TTD/TTO savegames (#12007)
- Fix: Focus hotkey in road/tram stop building window (#12008)
- Fix: Signals were incorrectly shifted by 1 pixel when selected (#12005)
- Fix: Missing default vehicles and industry acceptance/production (#12000)
- Fix: [Script] Avoid overflow in scripts when infinite money is enabled (#12016)
- Fix: [Script] Don't kill GS misusing GSText (#12009)


### 14.0-beta2 (2024-02-04)

- Change: [NewGRF] Improved support for redefining default cargo types (#11719)
- Fix #11982: Crash when trying to place signals on things other than plain rails (#11977)
- Fix #11975: Inconsistent behaviour when changing first AI company settings (#11976)
- Fix #11972: Year cut off in graph windows (#11974)
- Fix #11968: Crash when opening orders window of new vehicles (#11973)
- Fix #11966: Monospace text in windows may not have been fully scrollable (#11981)
- Fix #11802: Made determining water region edge traversability more robust (#11986)
- Fix: Second colour vehicle-type default liveries were not being updated (#11971)


### 14.0-beta1 (2024-02-03)

- Feature: Order option to unbunch vehicles at depot (#11945)
- Feature: Infinite money mode (#11902)
- Feature: Setting to disable the loading speed penalty for trains longer than the station (#11682)
- Feature: Plugin framework for Social Integration with Steam, Discord, GOG, etc (#11628)
- Feature: Scalable OpenTTD TrueType font made by Zephyris (#11593)
- Feature: Toyland-specific river graphics (#11523)
- Feature: Add zoom level buttons to sprite aligner (#11518)
- Feature: Add shading to river slopes (#11491)
- Feature: Place cargo icon on cargo filter dropdowns (#11487)
- Feature: Mode to display timetable in seconds (#11435)
- Feature: Setting to influence how many minutes a calendar year takes (#11428)
- Feature: Base graphics can offer parameters for additional settings (#11347)
- Feature: Sandbox option to lock station ratings at 100% (#11346)
- Feature: Setting to use real-time "wallclock" as timekeeping units (#11341)
- Feature: Setting to automatically restart server based on hours played (#11142)
- Feature: Add config option to set default company secondary colour for new games (#11068)
- Feature: Transparency option for cost and income indicators (#11001)
- Feature: Create group of vehicles from manage vehicle list button (#10890)
- Feature: Show coverage highlight the same as stations when adding waypoints (#10875)
- Feature: Show the number of industries already built in the Fund New Industry window (#10806)
- Feature: Add search filter and name text to build waypoint window (#10786)
- Feature: Setting to disallow level crossings with competitors (#10755)
- Feature: Opt-in survey when leaving a game (#10719)
- Feature: Replace buying/selling company shares with hostile takeovers of AI companies (#10709, #10914)
- Feature: Settings to scale cargo production of towns and industries (#10606)
- Feature: Separate rail/road and sea/air velocity units, and add knots (#10594)
- Feature: Region-based pathfinder for ships (#10543)
- Feature: Filter engine build menu by name and NewGRF extra text (#10519)
- Feature: Industry directory text filter (#10518)
- Feature: Ctrl+Click to reset late counter for the entire vehicle group (#10464)
- Feature: Orientation of rail and road depots can be changed (#9642)
- Feature: Display help and manuals in-game (#7786)
- Feature: [NewGRF] Town production effect and multiplier (#11947)
- Feature: [NewGRF] Randomize direction of rail vehicle on build based on probability callback (#11489)
- Feature: [NewGRF] Related Act2 objects for airports and airport tiles (#11282)
- Feature: [NewGRF] Allow higher max speeds for ships (#10734)
- Feature: [NewGRF] Increase limit of objects/stations/roadstops per NewGRF (#10672)
- Feature: [NewGRF] Road stops (#10144)
- Feature: [Script] Goal destination can be updated (#10817)
- Add: Argument for console command "restart" to use either current or newgame settings (#11962, #11963)
- Add: {CURRENCY_SHORT} only did k / m suffix. Add bn / tn and make translatable (#11921)
- Add: Show in multiplayer the amount of hours a game has been unpaused (#11886)
- Add: Allow loading heightmaps from command-line (#11870)
- Add: List_[scenario|heightmap] and load_[scenario|height] console commands (#11867)
- Add: Latvian Lats currency (#11691)
- Add: Horizontal scroll for script debug log (#11597)
- Add: GUI options to select sprite font and AA mode for all fonts (#11593)
- Add: Website button for basesets in Game Options window, the Game Script settings window and AI settings window (#11512)
- Add: [Emscripten] Support for bootstrapping (#11109)
- Add: Hotkey to focus town / industry directory filter box (#11030)
- Add: Maximum number of companies allowed to the client list (#10523)
- Add: Use specific error message when vehicle cannot go to station/waypoint (#10494)
- Add: Show NewGRF name in NewGRF-created errors (#10457)
- Add: Alternative setting for right-click close window option to exclude pinned windows (#10204)
- Add: Allow autoreplace with same model vehicle (#7729)
- Add: [NewGRF] Allow inspection of road tiles and airports (#11282, #11323)
- Add: [NewGRF] Station variable 6B to get extended station id of nearby tiles (#10953)
- Add: [NewGRF] String code "9A 21" to display force from textstack (#10782)
- Add: [NewGRF] Station property 1C/1D to set name/classname (#10672)
- Add: [Script] Optional filter parameter to ScriptXXXList constructors (#11698,#11663)
- Add: [Script] AI/GS Time Mode to choose between economy (default) and calendar time (#11603)
- Add: [Script] Allow to set max loan for each company separately (#11224)
- Add: [Script] GSIndustry.GetConstructionDate() method (#11145)
- Add: [Script] Game script control of industry production level and news messages (#11141)
- Add: [Script] GSAsyncMode to set async mode of gamescript commands (#10913)
- Add: [Script] GSCompanyMode::IsValid and IsDeity, and enforce valid company/deity mode where applicable (#10536, #10529)
- Add: [Script] Allow GS to found town with random road layout (#10442)
- Add: [Script] Create own Randomizer per instance (#10349)
- Change: Better handle different GUI sizes for most windows, and squash inconsistencies between windows
- Change: Allow configuring AI slots above the current maximum number of competitors (#11961)
- Change: Forcefully enable prefixing logs with date (#11930)
- Change: Position error window closer to cursor on large screens (#11923)
- Change: Only open story-book in center when a GS does it (#11916)
- Change: Rebrand Cheats as Sandbox Options (#11874)
- Change: Make smooth-scrolling based on actual time (#11865)
- Change: Set smooth-scrolling on by default (#11860)
- Change: Disable building rail infrastructure if train build limit is zero (#11847)
- Change: Invalidate music volume when restarting music playback on Windows (#11836)
- Change: Make street lights transparent with houses (#11828)
- Change: Redesign script debug window (#11782)
- Change: Reorganize Settings menu items (#11683)
- Change: Set amount of smoke/sparks to "realistic" by default (#11624)
- Change: Show a message in livery window if vehicle type has no groups (#11617)
- Change: Add distinct tooltips for vehicle group colour schemes (#11617)
- Change: Move colour selection dropdowns to bottom of window (#11617)
- Change: Support custom transparency remaps with 32bpp blitters (#11616)
- Change: Make "middle" the default stopping location for trains in platforms (#11605)
- Change: Scale sprites to requested highest resolution level (#11600)
- Change: Allow opening multiple script debug windows by holding Ctrl (#11592)
- Change: Don't show scoring year in high score table (#11546)
- Change: Revert pressed-button content shifting introduced in r2161 (#11542)
- Change: Show rating in station list even with no cargo waiting (#11540)
- Change: Hide unused cargos from vehicle cargo filter (#11533)
- Change: Don't restart playback when toggling playlist shuffle (#11504)
- Change: Increase finance window lines (and underlines) with interface scale (#11459)
- Change: Move baseset missing/corrupted files label to list item (#11455)
- Change: Add horizontal scrollbar to Industry Directory window (#11434)
- Change: Improve layout of airport, dock, object, road/tram stop, train station pickers (#11430)
- Change: Display cargo lists in sorted cargo order (#11383)
- Change: Link houses production on industry chain graph by TPE_PASSENGERS or TPE_MAIL cargo (#11378)
- Change: Passenger subsidies are generated for any TPE_PASSENGER cargo type (#11378)
- Change: Towns generate cargo based on town production effect (#11378)
- Change: Always allow expanding towns in Scenario Editor to build new roads (#11377)
- Change: Don't set vehicle on time if timetable not started (#11359)
- Change: Store station blocked/wires/pylons flags in map (#11337)
- Change: Recover when possible from crashes during a crash (#11238)
- Change: Store crash logs in JSON format (#11232)
- Change: Remove autosave from settings window; it is already in the Game Options (#11218)
- Change: Enable "Forbid 90 degree turns" setting by default (#11160)
- Change: Do not allow mixing road/tram types in powered road type list (#11148)
- Change: Only show platform stopping location in orders when other than default (#11102)
- Change: Autorail / autoroad tools can start dragging from invalid tiles (#11089)
- Change: Only allow buying Exclusive Transport Rights when no one has them (#11076)
- Change: Remove currency code/symbol suffix from language files (#11061)
- Change: Add separate setting for server sent commands per frame limit (#11023)
- Change: Cargo flow legend only shows defined cargo (#10872)
- Change: Use "Via-Destination-Source" as default station cargodist display (#10851)
- Change: Preserve orders and related settings where possible when moving engines around in a train (#10799)
- Change: Standardise unit conversions and allow decimal places (#10795)
- Change: Use separate names for default stations/roadstops (#10786)
- Change: [MacOS] Require at least 10.15 to run the game (#10745)
- Change: Hide all variants from UI when (display) parent is hidden (#10708)
- Change: Split Game options into General, Graphics and Sound tabs (#10674)
- Change: Extend entity override manager and station spec lists to support 16 bit IDs (#10672)
- Change: Base autosaves intervals on real time (instead of game time) (#10655)
- Change: Allow overbuilding station and waypoint tiles (#10618)
- Change: Use realtime for Linkgraph update settings (#10610)
- Change: Make tick length 27 milliseconds (#10607)
- Change: Increase max cargo age and let min cargo payment approach zero (#10596)
- Change: Show buy company dialog window even when playing in the AI company (#10459)
- Change: Use HTTPS for content-service connections (#10448)
- Change: Big UFO disaster targets current location of a random train (#10290)
- Change: Remove land generator setting from World Generation GUI (#10093)
- Change: Build signals to the next junction when dragging regardless of the Ctrl state (#9637)
- Change: Allow dedicated server to use threaded saves (#10787)
- Change: [NewGRF] Increase vehicle random data from 8 to 16 bits (#10701)
- Change: [NewGRF] Read Action 3 IDs as extended-bytes for all features (#10672)
- Change: [NewGRF] Make Action 3 debug messages more consistent (#10672)
- Change: [NewGRF] Extend callback 161 (engine name) with bit 0x22 for context 'Autoreplace - Vehicles in use' (#10666)
- Change: [Script] Replace easy/medium/hard values with default value (#11959)
- Change: [Script] Limit total script ops that can be consumed by a list valuate (#11670)
- Change: [Script] Allow GS access to ScriptGroup, ScriptGameSettings.IsDisabledVehicleType, more ScriptCompany and more ScriptOrder functions (#10642)
- Change: [Script] Improve ScriptText validation error messages (#10545)
- Change: [Script] Restore support of {RAW_STRING} in ScriptText (#10492)
- Change: [Script] Validate ScriptText parameters type and amount (#10492)
- Change: [Script] Automate the ScriptObject reference counting (#10492)
- Change: [Script] Extract params info from GS strings (#10492)
- Change: [Script] A ScriptText with too many parameters is now a fatal error (#10483)
- Change: [Script] Log AI/GS Squirrel crashes in white text for readability (#10375)
- Fix #11918: Houses should only build next to road stops, not any station type (#11919)
- Fix #11827: Make text layouter aware of ligatures (#11831)
- Fix #11752: Characters could be repeated when wrapping multi-line text (#11761)
- Fix #11748: Decreasing service interval value sufficiently would result in it wrapping around (#11749)
- Fix #11629: Crash when getting the nearest town for rotated airports (#11631)
- Fix #11516: Adjust window size by interface scale during ReInit (#11517)
- Fix #11515: Changing interface scale could have unintended effects on zoom level (#11615)
- Fix #11442: "Default" colour in group colour window is not updated when changing master colour (#11614)
- Fix #11437: Flipped shorter rail vehicles disappear in windows (#11446)
- Fix #11413: Incorrect sorting by industry production (#11414)
- Fix #11407: Don't steal focus from dropdown menus (#11484)
- Fix #11402: Make string filter locale-aware (#11426)
- Fix #11329: Don't assert vehicle list length is non-zero when only asked to set string parameter (#11330)
- Fix #11315: Sort industries and cargoes by name in industry chain window (#11317)
- Fix #11307: Incorrect GroupStatistics after selling leading wagon (#11311)
- Fix #11261: Airport menu selectability after closing window on a class with no available airports (#11344)
- Fix #11230: Sort by button in group list window could be misaligned (#11231)
- Fix #11215: Assert in NewGRF parameters window (manual parameter mode) (#11217)
- Fix #11203: [Linux] Crash when editing CJK characters in edit box (#11204)
- Fix #11180: Aircraft crashes could point to the wrong tile (#11184)
- Fix #11164: Don't create duplicate town names when using 'Many random towns' in the scenario editor (#11165)
- Fix #11162: Second company colour was not consistently applied to articulated vehicles (#11163)
- Fix #11115: Focus the abandon game/exit game windows (#11125)
- Fix #11096: Increase priority of error and confirmation windows (#11104)
- Fix #11087: Disable base graphics/sound dropdown outside main menu (#11091)
- Fix #11054: Prevent translation of currency codes (#11061)
- Fix #11026: Use real engine name instead of default name for filtering (#11033)
- Fix #10982: No help text for gamelog command (#10984)
- Fix #10880: Crash in object window due to incorrect parameter order (#10881)
- Fix #10868: Crash when Script tries to load large savegame data (#11029)
- Fix #10811: Allow dragging vehicle in depot to any free row (#11508)
- Fix #10660: Sprite Font scale affected by viewport zoom level limits (#10668)
- Fix #10619: Crash loading linkgraph for older savegames (#10620)
- Fix #10600: 'Replace Vehicles' didn't show numbers >999 (#10680)
- Fix #10578: Allow to select any version of AI/GS from GUI (#10604)
- Fix #10522: Link graph tooltip vertical lines were not handled correctly (#10524)
- Fix #10511: Don't search for depot every tick if one cannot be found (#11548)
- Fix #10478: Clarify airport noise control setting texts (#11169)
- Fix #10452: Prevent long stalls during river generation (#11544)
- Fix #10430: Display chain window causing assert (#10431)
- Fix #10343: Don't extend town-disallowed roadtypes (#10347)
- Fix #10251: [MacOS] Screen looks blue-ish when using newer SDKs (#11207)
- Fix #10222: Adjust line drawing algorithm (#10491)
- Fix #10131: Actually cancel downloads when pressing cancel (#10485)
- Fix #10118: Cycle through current signal group, not just path signals (#11798)
- Fix #10439: [Script] Validate story page button colour, flags, cursor and vehicle type (#11892)
- Fix #10438: [Script] Validate story page element type for ScriptStoryPage::NewElement (#11888)
- Fix #9865: Removing files with the console always failed
- Fix #9810: Rebuilding a through road stop costs money (#9852)
- Fix #9722: Crash when pressing hotkeys early in world generation (#11858)
- Fix #9697: Limit the default width of the Online Players window (#11936)
- Fix #9642: Keep infrastructure totals when overbuilding road depots (#11229)
- Fix #9545: Crash when all cargo types are disabled (#11432)
- Fix #8846: When upgrading NewGRF presets, copy NewGRF parameters only if the NewGRF are compatible (#11348)
- Fix #8253: Improve profit graph when having lots of money (#11915)
- Fix #6377: Two tarballs with the same folder in them were considered as one (#11855)
- Fix #5713: Ships could be sent to unreachable depots (#11768)
- Fix #4575: Use Latin 'l' in English translation of zloty (#11090)
- Fix #4415: Land info build date is also renovation date (#11759)
- Fix: Display rank correctly with more than 15 companies in a league table (#11940)
- Fix: Extra refit button when train/RV is in a depot (#11904)
- Fix: Update server listing as offline when unexpected disconnect during refresh (#11891)
- Fix: Horizontal scale of framerate window switched excessively (#11813)
- Fix: [Linux] Various issues with resolutions and fullscreen in multi-display setups (#11778, #11779)
- Fix: Build button text when train purchase window using "Engines" filter (#11755)
- Fix: One-way state remained after removing road from road and tram tile (#11745)
- Fix: Draw video driver info at the correct size and text wrap (#10716)
- Fix: Language genders could not be applied to SCC_INDUSTRY_NAME (#11697)
- Fix: Spurious cancellations of HTTP content downloads (#11668)
- Fix: Calculation of initial engine age was inaccurate (#11660)
- Fix: Prevent underflow if engine base life is less than 8 years (#11635)
- Fix: Changing default livery did not propagate to group liveries (#11633)
- Fix: Window width/height was doubly-scaled with automatic DPI switch (#11598)
- Fix: Don't crash when saving a crashlog save with no main window open (#11586)
- Fix: Prevent overflow when calculating max town noise (#11564)
- Fix: Deleting towns did not check for waypoints referencing the town (#11513)
- Fix: Invalidate playlist window when (un)shuffling playlist (#11504)
- Fix: Restore original cargo legend 'blob' dimensions (#11480)
- Fix: Extmidi did not move on to next song after playing ends (#11469)
- Fix: Server password length in the UI was unnecessarily limited (#11408)
- Fix: OpenTTD can fail to exit on an error due to mutex locks in threads (#11398)
- Fix: Scale minimum width for server name by interface scale (#11381)
- Fix: Server connection was not closed when relay window was closed (#11366)
- Fix: Upgrading NewGRF presets could result in incomplete display of NewGRF parameters until restart (#11348)
- Fix: Check for engine variant loops during NewGRF initialization (#11343)
- Fix: Don't allow industries to produce invalid cargo (#11314)
- Fix: Also apply cargo filters on shared groups in vehicle listing (#11294)
- Fix: Only count distance traveled in vehicles for cargo payment (#11283)
- Fix: Base cargo payment on load/unload tile, instead of station sign location (#11281)
- Fix: Crash when opening a damaged base-graphics (#11275)
- Fix: Trivial autoreplace of mixed cargo articulated engines (#11253)
- Fix: [Emscripten] Config not saved on exit (#11248)
- Fix: Inaccurate waiting cargo total in station window when using cargodist (#11213)
- Fix: No fast forward in network was ensured only from GUI side (#11206)
- Fix: Crash when not passing command-line parameter for -n (#11153)
- Fix: [Bootstrap] Don't crash when failing to connect to content server (#11122)
- Fix: Crash when failing to load a game into a dedicated server at startup (#11021)
- Fix: Don't allow changing settings over the network that are marked as local settings (#11009)
- Fix: Move no_http_content_downloads and use_relay_service to private settings (#10762)
- Fix: Extra viewport could not be scrolled with right-click-close (#10644)
- Fix: Specify units for value of share trading age setting (#10612)
- Fix: Road type is not available before its introduction date (#10585)
- Fix: Do not update a RV's Z-position when stationary while turning (#10570)
- Fix: Don't (briefly) switch from title-only playlist on menu screen (#10553)
- Fix: Reset content download progress to zero if falling back to TCP (#10485)
- Fix: Make script goals work with the whole range of ClientIDs (#10435)
- Fix: [NewGRF] Tile slope missing from road stops varact2 variable 0x42 (#11373)
- Fix: [NewGRF] House class mappings were not reset between games (#11279)
- Fix: [NewGRF] Profile didn't stop if there were no events yet (#10816)
- Fix: [NewGRF] Support more than 256 stations/waypoints/roadstops per class (#10793)
- Fix: [NewGRF] Var68 for station and roadstop was broken (#10784)
- Fix: [NewGRF] Object and road stop ignore property handlers (#10525)
- Fix: [Script] Apply random deviation to settings only at script start (#11944)
- Fix: [Script] Improve ScriptText validation (#11721)
- Fix: [Script] GSAdmin.Send() could generate invalid JSON (#11250)
- Fix: [Script] Crash if squirrel compatibility scripts cannot be parsed (#11589)
- Fix: [Script] Don't list unavailable road types for game scripts (#10585)
- Fix: [Script] Game scripts were able to build with non-existing road types (#10539)
- Fix: [Script] Inconsistent precondition failure return values (#10533)
- Fix: [Script] Crash when companies disappear (#10529)
- Fix: [Script] ScriptBase::Rand() return value could return negative values (#10443)
- Fix: [Script] Incorrect value for GOAL_INVALID (#10436)
- Fix: [Script] Extend Script::IsValidVehicle to check for primary vehicles (#10386)
- Remove: "generation_seed" from config, as it was a write-only value (#11927)
- Remove: Debug redirect over network (#11776)
- Remove: Officially mark Vista as no longer supported (#11531)
- Remove: OS/2 and SunOS ports (#11018, #11210)
- Remove: Obsolete NewGRF text unprinting (#10884)
- Remove: [Script] CONFIG_RANDOM from AddSetting flags (#11942)

## 13.x

### 13.4 (2023-07-29)

- Fix: Setting tree lines drawn incorrectly for RTL languages (#11070)
- Fix #11043: Don't choose toolbar dropdown option if focus is lost (#11044)
- Fix #10917: Pay loan interest before generating statistics (#11040)
- Fix #11016: Use after free in network invalid packet error path (#11022)
- Fix #10987: Double-close of dropdown stopped land-info tool working as default (#11000)


### 13.3 (2023-06-11)

- Fix: [Win32] use full monitor resolution for fullscreen (#10985)


### 13.2 (2023-06-10)

- Change: [Win32] position window in center of workspace of primary display (#10942)
- Change: Automatically disable hardware acceleration when GPU driver crashed the game last attempt (#10928)
- Change: [Linux] Default scroll mode to non-mouse-lock (#10920)
- Change: Include font style in font name for Freetype (#10879)
- Fix: Don't restore backed up vehicle name if it's no longer unique (#10979)
- Fix #10975: Train name wrongly marked as unique when joining trains (#10976)
- Fix: Crash when not even a single row fits for dropdowns on low resolution screens (#10934)
- Fix: Crash with tooltip on low resolution screens (#10933)
- Fix: Crash when window can't be placed on low resolution screens (#10932)
- Fix #10502: Apply engine refit before attaching free wagons (#10926)
- Fix: Wayland crash on startup due to Pango also using FontConfig (#10916)
- Fix: When syncing width of GUI items, take padding into account (#10915)
- Fix: Make dropdowns self-close when losing focus (#10912)
- Fix: Land info window maximum width was not scaled (#10894)
- Fix: Check max member count in squirrel classes (#10883)
- Fix: Ask FontConfig for the face index when opening fonts (#10878)
- Fix #10831: Level crossing parts left barred after crossing tile removal (#10874)
- Fix: Rail waypoint selection window not closed when parent windows closed (#10873)
- Fix #10846: [Script] Crash on trying to allocate an excessively large array (#10848)
- Fix: [Win32] Text line breaking did not properly handle punctuation characters (#10775)
- Fix: [Emscripten] Crash when saving games (#10758)
- Fix: [Win32] Wrong multi-line text layout due to incorrect whitespace handling (#10752)
- Fix #10741: Rail platforms left partially reserved after train crash (#10751)
- Fix: Shaded engines in purchase list incorrectly shaded (#10736)
- Fix #10735: [NewGRF] {POP_COLOUR} fails if string is drawn with extra flags (#10736)
- Fix #8177: Ships with max speed overflow to near-zero speed (#10695)
- Fix #10289: Don't silently fail when setting timetable start dates (#10690)
- Fix #8302: Improve "Maintenance intervals are in percents" helptext (#10686)
- Fix #10665: "No vehicles are available yet" message did not appear correctly on non-temperate climates (#10673)
- Fix #10630: Don't allow shifting service date earlier than year 0 (#10643)
- Fix #10637, #10638: Incorrect water infrastructure totals when building certain object types (#10639, #10640)
- Fix: Abort loading savegame if road vehicle is on invalid road type (#10622)


### 13.1 (2023-04-10)

- Add: [NewGRF] Engine name callback for nested variants. (#10399)
- Fix: Improve main toolbar tooltips (#10616)
- Fix: [NewGRF] Additional validation for Action3 (+others) (#10601)
- Fix: Clear button for editbox didn't take account of padding (#10583)
- Fix: [Script] Access to enum/consts defined outside of main.nut (#10573)
- Fix #10568: Bogus warning when loading a save with a NewGRFs on dedicated servers (#10572)
- Fix #10554: Crash when scrolling in the autoreplace window with collapsed variants (#10555)
- Fix: Network server highlight invisible with RTL languages. (#10551)
- Fix: Client name was not being used as company manager name (#10535)
- Fix: Prevent road vehicles on crossing from crashing into the side of a train (#10496)
- Fix #10477: [macOS] Calculation for window sizes when using custom fonts was being rounded incorrectly (#10489)
- Fix #10486: Crash in debug window when GS started before AIs (#10487)
- Fix #10469: [Script] Negative numbers in League Table window were sorted incorrectly (#10471)
- Fix #10465: Crash on timeout if user never enters a password for server (#10466)
- Fix #10280, #10461: Crash on opening town windows as a spectator (#10462)
- Fix #10059: Script config values stored in the config file could cause crashes (#10444)


### 13.0 (2023-02-05)

- Change #10077: Make maximum loan a positive multiple of the loan interval (#10355)
- Fix #10361: [Script] Don't try to give saved data to a dead script (#10433)
- Fix #10419: Water infrastructure accounting when building ship depots and docks (#10432)


### 13.0-RC2 (2023-01-28)

- Feature: Press Ctrl to build a diagonal area of trees (#10342)
- Feature: Set a custom number of industries in map generation window (#10340)
- Change: Display font status as aa/noaa instead of true/false (#10352)
- Fix: [Script] Improved API documentation for scripts (#10413, #10412)
- Fix #10255: Reduce basic thickness of linkgraph GUI lines (#10410)
- Fix #10220: Don't select unselectable engine as default (#10404)
- Fix #10395: When loading old saves, don't forcibly bar level crossings (#10400)
- Fix #10377: Bad sorting of rail vehicles when primary variant is missing (#10378)
- Fix #10368: Server restarting game caused clients to hit assertion (#10369)
- Fix #10362: NewGRF bridges without speed limits (#10365)
- Fix #10363: CargoDist setting helptext shouldn't suggest symmetric distribution for diamonds in subtropic (#10364)
- Fix: [Script] Switch to OWNER_TOWN prevented OWNER_DEITY test during industry prospecting (#10360)
- Fix #10009: Bad overflow protection when taking out loans (#10359)
- Fix #9865: Removing files with the console always failed (#10357)
- Fix #10057: FallbackParagraphLayout fails to properly wrap (#10356)
- Fix #10177: Company list password padlock showed after switching to single player (#10354)
- Fix: Various Wide River issues (#10348)
- Fix: Link variants to parents when finalising engines (#10346)
- Fix #10333: Only show industry prospecting errors to local company (#10338)
- Fix #10335: Set initial scrollbar count for object GUI (#10336)
- Fix #10331: Starting new company during load must happen after AI start (#10332)
- Fix #10309: [SDL] Uninitialized width and height when turning off full screen (#10328)
- Fix #10032: Capacities of articulated vehicles in build window (#10326)
- Fix: Improve handling of corrupt NewGRF or image files (#10321, #10316)
- Fix: [NewGRF] Don't assume engclass 2 should be elrail (#10315)
- Fix: [Script] AIGroup.GetProfitLastYear could get values different than those displayed in GUI (#10227)
- Fix #10304: [Scripts] Don't start GS in intro game (#10305)
- Fix: [Script] Copy compat files for version 13 (#10303)


### 13.0-RC1 (2023-01-01)

- Feature: 'font' console command to configure fonts within game (#10278)
- Feature: Ctrl-click to bulk edit timetable speeds/waiting times (#10265)
- Feature: [NewGRF] Vehicle variants in expandable purchase list (#10220)
- Feature: Expand all towns in the scenario editor (#10215)
- Add: [NewGRF] Slope-aware and roadtype-specific one-way sprites (#10282)
- Change: Display text files in black (#10291)
- Change: Make vehicle list dropdown buttons resize to fit strings (#10286)
- Change: [NewGRF] Support flipping shorter engines without explicit support (#10262)
- Change: Separate ground sprite from foundation sprite offsets (#10256)
- Change: Vertically centre sprite font relative to TrueType font (#10254)
- Change: [macOS] Set minimum macOS version to 10.13 (#10253)
- Change: Use lowered not disabled widget for current vehicle details tab (#10252)
- Change: Various improvements to NewGRF sprite aligner (#10249)
- Change: reset_engines console command now rerandomises introduction dates and reliability (#10220)
- Change: Show error message on failed industry prospecting (#10202)
- Fix: Local authority window rating list height ignored icon sizes (#10285)
- Fix #10150: Town signs could be truncated when using custom fonts (#10283)
- Fix #8971: Resize QueryStrings with interface scale change (#10281)
- Fix #10274: Crash when rescanning scripts with GS selected (#10276)
- Fix #10151: Use smaller padding for signs (#10272)
- Fix #10263: [Script] Restore tile validation for commands (#10269)
- Fix: Missing scrollbar for rail/roadtype dropdowns (#10264)
- Fix #10260: Incorrect rect height drawing image in vehicle details (#10261)
- Fix #10257: Incorrect catenary position on sloped bridge heads (#10258)
- Fix: Vertically centre chat prompt (#10250)
- Fix #10214: League and graph buttons in toolbar did not have a default action (#10246)
- Fix #10242: Allow a space for text shadow when clipping text (#10243)
- Fix #10206: Fully disable scripts in intro game (#10241)
- Fix #10218: Don't try to create river tiles along incorrect slopes (#10235)
- Fix #10208: [NewGRF] Allow using a specific underlay for road/tram tunnels (#10233)
- Fix #10224: Don't change fast-forward mode while saving (#10230)
- Fix #10147: Sound effect volume slider no longer set volume (#10228)
- Fix #10223: Crash when vehicle cloning fails on order cloning (#10225)
- Fix: Maximum space for engine preview image was never scaled (#10219)
- Fix #10216: Crash when upgrading savegame with crashed vehicles (#10217)
- Fix #10212: [Script] Nested ScriptAccounting scopes not restored properly (#10213)
- Fix #10114: Incorrect drag-highlight position with non-power-of-2 scaling (#10211)
- Fix #10198: Rearrange Intro GUI to make button rows narrower (#10203)
- Fix: Missing extra padding when drawing tooltip text (#10201)
- Fix: Bad alignment of button icons when using the original baseset (#10200)
- Fix: Signal icons incorrectly positioned in UI (#10199)
- Fix #10021: Object GUI resized when switching between different objects (#10196)
- Fix #9720: Delay start of GS/AI to after loading of savegame (#9745)


### 13.0-beta2 (2022-11-27)

- Feature: Allow AI/GS to be fully modified in scenario editor (#10152)
- Feature: Display power-to-weight ratio in ground vehicle details GUI (#10123)
- Feature: Variable interface scaling (with chunky bevels!) (#10114)
- Feature: Hotkey to honk a vehicle's horn (#10110)
- Feature: Split AI/Game Script configuration windows and add them to world gen window (#10058)
- Feature: [GS] Scriptable league tables (#10001)
- Feature: Multi-track level crossings (#9931)
- Feature: Improved local authority action window (#9928)
- Feature: Automatic console command screenshot numbering with a filename ending in '#' (#9781)
- Feature: Add buttons to toggle music in the Game Options menu (#9727)
- Feature: Contextual actions for vehicles grouped by shared orders (#8425)
- Feature: Add cargo filter support to vehicle list (#8308)
- Feature: Show the cargoes the vehicles can carry in the vehicle list window (#8304)
- Change: Allow building canal by area outside editor (#10173)
- Change: Minor improvements to the new Finance GUI (#10168)
- Change: Let AI developers edit non-editable AI/Game Script Parameters (#8895)
- Change: Allow building docks on clearable watered object tiles (#8514)
- Fix #8770: Center vehicle status bar icon (#10178)
- Fix: Crash if error message window is too wide for screen. (#10172)
- Fix #10155: Network games not syncing company settings properly (#10158)
- Fix #10154: Network game desync related to setting a random company face (#10157)
- Fix #10011: Incorrect infrastructure totals when overbuilding bay road stop (#10143)
- Fix #10117: Object burst limit allowed one fewer object than the setting (#10120)
- Fix #10023: Allow negative input in text fields when needed (#10112)
- Fix #9908: Fix crash which could occur when a company was deleted when a depot window was open (#9912)


### 13.0-beta1 (2022-10-31)

- Feature: Airport construction GUI displays infrastructure cost (#10094)
- Feature: Purchase land multiple tiles at a time (#10027)
- Feature: Add sticky pin & shade widgets to Object Selection UI panel (#10019, #10020)
- Feature: Improved handling of HiDPI and mixed-DPI screens (#9994, #9996, #9997, #10064)
- Feature: Alternative linkgraph colour schemes (#9866)
- Feature: Allow Shift+Insert as paste in edit box (#9836)
- Feature: Setting to make the local town authority rubber-stamp all actions (#9833)
- Feature: Add/extend console commands to enable screenshot automation (#9771)
- Feature: [Linkgraph] Show a tooltip with statistics when hovering a link (#9760)
- Feature: Build objects by area (#9709)
- Feature: Add setting to hide news about competitors vehicle crash (#9653)
- Feature: Ctrl-click to remove fully autoreplaced vehicles from list (#9639)
- Feature: Wide rivers on map generation (#9628)
- Add: [Script] ScriptCargo::GetWeight to get cargo weights (#9930)
- Add: Command line option to skip NewGRF scanning (#9879)
- Add: Show video driver name in Game Options window (#9872)
- Add: [NewGRF] Map seed as global variable (#9834)
- Add: [Script] IndustryType::ResolveNewGRFID to resolve industry id from grf_local_id and grfid (#9798)
- Add: [Script] ObjectType::ResolveNewGRFID to resolve object id from grfid and grf_local_id (#9795)
- Update: To all the friends we have lost and those we have gained (#10000)
- Change: Use the Simulation subcategory to openttd.desktop (#10015)
- Change: Constantly update destination of 'any depot' orders (#9959)
- Change: Use an indent, not a dash, to list train capacity (#9887)
- Change: [NewGRF] Increase vehicle sprite stack from 4 layers to 8 (#9863)
- Change: Don't pay Property Maintenance on stations when Infrastructure Maintenance is disabled (#9828)
- Change: Improved layout of the finance window (#9827)
- Change: [Admin] Bump admin port protocol due to command changes (#9754)
- Change: Suppress vehicle age warnings for stopped vehicles (#9718)
- Change: Make pf.yapf.rail_firstred_twoway_eol on by default (#9544)
- Change: Deliver cargo to the closest industry first (#9536)
- Fix: Lots of fixes to how windows handle resizing (#10040, #10042, #10046, #10051, #10056, #10068, #10070, #10098)
- Fix: Console commands list_ai output was truncated with a suitably large number of AIs (#10075)
- Fix #9876: MacBook Touch Bar crash / render issues w/ 32bpp graphics (#10060)
- Fix: Reduce framerate overhead in Train::Tick (#10055)
- Fix: Only open scenario editor date query once (#10050)
- Fix #10048: Don't relocate company HQ on the same exact location (#10049)
- Fix #10038: Missing upper bounds check when loading custom playlists (#10039)
- Fix: Wrong string used to determine size of zoomed out station sign (#10036)
- Fix: Disable "turn around" button for other companies' road vehicles (#10033)
- Fix: Online Players list mouse hover behaviour (#10031)
- Fix: [NewGRF] Weirdness of new stations (#10017)
- Fix #9854: DrawStringMultiLine() could draw beyond its bounding box (#10014)
- Fix: Incorrect player name in online players window (#10013)
- Fix #8099: News window zoom level fixes (#10005)
- Fix: [NewGRF] Upper 16 random bits should be the same for all station tiles in callback 140 (#9992)
- Fix #9989: £0 Net Profit is neither negative nor positive (#9991)
- Fix #9804: Only apply sprite_zoom_min setting when sprites available (#9988)
- Fix #9972: Add missing fill/resize flags on Framerate window widgets (#9982)
- Fix #9935: Use more selectivity when building SSE specific code (#9980)
- Fix #9940: Print debuglevel parse errors to console when changed from console (#9979)
- Fix #9977: Clearing the console with a large number of lines could cause a crash (#9978)
- Fix #9974: Console command getsysdate did not work due to off-by-one error (#9975)
- Fix: [NewGRF] Default value of RailVehicleInfo::railveh_type was inconsistent with other default properties (#9967)
- Fix #8584: Vehicles with shared orders getting invalid or unexpected start dates (#9955)
- Fix #9951: [NewGRF] Scenario editor random industries button broke NewGRF persistent storage (#9952)
- Fix: Validation of various internal command parameters that could have allowed a rogue client to crash servers (#9942, #9943, #9944, #9945, #9946, #9947, #9948, #9950)
- Fix #9937: Station industries_near incorrect after removing part moved sign (#9938)
- Fix: [Script] ScriptRoad::HasRoadType really check for RoadType (#9934)
- Fix #9363: Rebuild client list on reinit event (#9929)
- Fix #9925: Industry tile layout validation for layouts of only one tile (#9926)
- Fix #9918: Reset industy last production year on scenario start (#9920)
- Fix #9914: Prevent more useless pathfinder run for blocked vehicles (#9917)
- Fix: List a max of four share owners instead of three (#9905)
- Fix: [NewGRF] Industry layouts with zero regular tiles should be invalid (#9902)
- Fix #9869: Remove docking tile when doing a clear square (#9898)
- Fix: New player companies use favorite manager face, if saved (#9895)
- Fix: Towns don't build parallel, redundant bridges (#9891)
- Fix #9712: Cap town bridge length at original 11-tile limit (#9890)
- Fix #9883: Show cost/income float over end tile of rail or road construction (#9889)
- Fix #9870: Don't update infrastructure totals when overbuilding object on canal (#9888)
- Fix #9877: GS could trigger 'Cost: £0' cost message (#9878)
- Fix 44f2ef1: [strgen] Allow gender for {CARGO_SHORT} (#9873)
- Fix #9867: Industry::stations_near not filled at industry creation (#9868)
- Fix #9853: Incorrect merge of guiflags and flags for osk_activation (#9855)
- Fix #6544: Don't join AI company when loading network game in singleplayer (#9794)
- Fix: Company values do not properly account for shares (#9770)
- Fix #9546: Crash when no industries are present in game (#9726)
- Fix #9708: [Linkgraph] Don't assume vehicles have a non-zero max speed (#9693)
- Fix #9665: [Linkgraph] Fix travel times of non-direct journeys (#9693)
- Fix #8797: Use logical rail length when placing signals (#9652)
- Cleanup: [NewGRF] Remove unused flag sprites (#10052)

## 12.x

### 12.2 (2022-04-02)

- Feature: Remember the last-used signal between games (#9792)
- Change: [MacOS] Allow touchbar usage on all supported OS versions (#9776)
- Change: Add a timestamp in name of crash files (#9761)
- Fix #9736: Duplicate multiplayer window opens upon canceling password entry (#9842)
- Fix: Removing long roads doesn't prioritise refusal of local authority over other errors (#9831)
- Fix #9020: Glitchy station coverage highlight when changing selection (#9825)
- Fix: Correct some Romanian town names (#9819)
- Fix: Original music playback rate was slightly too fast (#9814)
- Fix #9811: Use the NewGRF-defined vehicle center when dragging ships and aircraft (#9812)
- Fix: Do not let shares in the company taking over another company disappear (#9808)
- Fix #9802: Crash when using lots of NewGRF waypoint types (#9803)
- Fix #9766: Don't write uninitialised data in config file (#9767)
- Fix #9743: [MacOS] Don't try to render touchbar sprites with invalid zoom level (#9776)
- Fix #9774: Building roadstop in estimation mode updates station acceptance (#9775)
- Fix: If vehicles only refit to cargo-slots >= 32, the default cargo was wrong (#9744)
- Fix #9735: Possible desync when replacing a depot on same tile (#9738)
- Fix #9730: [Network] Connections can use an invalid socket due to a race condition (#9731)
- Fix: Don't show sign edit window for GS-owned signs (#9716)
- Fix #9702: Display order window for vehicle group on ctrl-click only when using shared orders (#9704)
- Fix #9680: Crash when loading really old savegames with aircraft in certain places (#9699)
- Fix: Update last servicing dates when using the date cheat (#9694)
- Fix: Error message shows about missing glyphs while suitable fallback font is found (#9692)


### 12.1 (2021-11-08)

- Feature: Button to toggle showing advanced signal types (#9617)
- Change: Don't show screenshot GUI in screenshots (#9674)
- Change: Suppress panning in intro game, while user is interacting with the GUI (#9645)
- Change: Draw rotor in cursor when dragging helicopters in depots (#9612)
- Fix: Invalid memory access when loading a currency NewGRF (#9675)
- Fix #9579: Object and HQ construction is Construction cost, not Property Maintenance (#9673)
- Fix #9669: Ships exiting a blocked depot/lock could exit in the wrong direction (#9672)
- Fix: Every 16th client never reconnects after server restart (#9666)
- Fix #9643: Screenshots were always written as BMP files (#9644)
- Fix #9630: Intro game could zoom in/out more than allowed by settings (#9633)
- Fix #9626: Incorrect loading of script saved data (#9629)
- Fix: Emergency crash save had the wrong NewGRF list saved in it (#9627)
- Fix #9595: Always use plural forms of cargo for subsidy strings (#9619)
- Fix #9614: Refresh rate dropdown was still active when vsync was enabled (#9618)
- Fix: Don't use 'server address' string in server list when displaying an invite code (#9615)


### 12.0 (2021-10-17)

- Add: [Network] Keep the refresh button in lowered state while refreshing (#9600)
- Add: Console command to list search directories for various things (#9583)
- Fix: Try all possible reverse directions when a ship reaches a dead end (#9610)
- Fix: Incorrect Romanian own name (#9598)
- Fix #9591: Update station docking tiles upon placing a water object on a docking tile (#9594)
- Fix #9548: [Squirrel] Crash during engine cleanup after reaching memory limit on realloc (#9592)
- Fix #9588: [Squirrel] Reaching memory limit during script registration could prevent further script detections (#9589)
- Fix: Make ships more likely to find their destination at the cost of slightly worse paths (#9576)
- Change: Reverse ship when leaving docks if a better path exists (#9610)
- Change: Allow all tiles around docks to be docking tiles (#9578)


### 12.0-RC1 (2021-09-25)

- Feature: Display icon/text whether vehicle is lost in vehicle (list) window (#9543)
- Feature: [MacOS] Add selected toolbar buttons to MacBook Pro Touch Bar (#9511)
- Feature: Button to open order window from vehicle shared orders window (#9325)
- Feature: Ctrl-Clicking shared order vehicle list opens order window (#9325)
- Feature: Multiple rotating views on title screen (#8980)
- Feature: Hide block signals in GUI by default (#8688)
- Add: [Script] Allow GameScripts to build neutral objects (#9568)
- Add: [Network] Allow sending chat messages via admin port (#9563)
- Add: [AI/GS] Missing water related functions and objects (#8390)
- Fix: Industry funding window did not update when changing funding method (#9572)
- Fix #9562: [NewGRF] Handle case of invalid Action2 with zero results (#9564)
- Fix: Incorrect error messages when placing water in scenario editor (#9560)
- Fix #9484: Update locale currencies settings config map (#9559)
- Fix: Prevent train reversing when entirely inside a train depot (#9557)
- Fix: [Network] Add back 'Spectate' option to company toolbar menu (#9556)
- Fix #9463: [Win32] Work around XAudio2 crashes (#9549)
- Fix #8603: Don't give focus to text filter when opening Object GUI (#9547)
- Fix #9241: Grove and forest tree brushes did not also create rainforest terrain (#9542)
- Fix: [Network] Several crashes in our network code (#9534, #9456)
- Fix #9527: Crash when trying to place multi-tile objects at map edge (#9529)
- Fix: [Network] SendCmdNames only sent one name per packet (#9528)
- Fix #9407: Desync when founding a town nearby a station (#9526)
- Fix #9521: Don't load at just removed docks that were part of a multi-dock station (#9524)
- Fix: Ships always tried to avoid docking tiles when pathfinding (even if nothing was on them) (#9522)
- Fix: [Network] Convert server_advertise to server_game_type in config file (#9515)
- Fix #9490: [Network] A full server couldn't be queried (#9508)
- Fix: [Network] Don't show GameScript " (v0)" for old servers (#9507)
- Fix: [Network] Show query errors in the server listing instead of error popup (#9506)
- Fix: [Network] Crash when last-joined server was no longer available (#9503)
- Fix #9501: [Network] Crash when more than one game-info query was pending (#9502)
- Fix: Wrong error message when building canals over ship depots / locks (#9410)
- Fix: Reduce cost of building canals over objects on sea (#9410)
- Change: [Linkgraph] Delete links only served by vehicles stopped in depot (#9499)


### 12.0-beta2 (2021-08-19)

- Feature: [Linkgraph] Prioritize faster routes for passengers, mail and express cargo (#9457)
- Fix: Wrong town window refreshed when building an airport with noise levels enabled (#9497)
- Fix: Improve wording of network-related messages (#9494, #9495, #9500)
- Fix: [Network] Report reuse of invite-code (#9487)
- Fix: [Network] Connecting with the same client name thrice hangs the server (#9485)


### 12.0-beta1 (2021-08-15)

- Feature: [Network] Remove lobby window; pressing "Join Game" now immediately joins a server (#9467)
- Feature: [Network] Synchronize server name to clients and display in Online Players window (#9472)
- Feature: [Network] Mention you are a spectator in the status bar (#9471)
- Feature: [Network] No longer require port-forwarding to host a server (#9443, #9447)
- Feature: [Network] Allow setting your server visibility to "invite-only" (#9434)
- Feature: [Network] Join servers based on their invite code (#9432)
- Feature: Raise the maximum NewGRF limit to 255 (#9428)
- Feature: Persistent rotation of numbered auto/netsave after restart (#9395, #9397)
- Feature: [NewGRF] Maximum curve speed modifier for rail vehicles (#9346)
- Feature: Move sensitive information to secrets.cfg and private information to private.cfg (#9298)
- Feature: Signed Windows builds (#9294)
- Feature: [NewGRF] Define refittability of default vehicles using cargo classes (#9148)
- Feature: Configurable subsidy duration, up to 5000 years (#9081)
- Feature: [Network] Rework in-game Online Players window (#9067)
- Feature: [Network] Show previous chat history when the chat message box is open (#9025)
- Feature: Button to reset game settings to their default values (#8958)
- Feature: Press Ctrl to build diagonal rivers in Scenario Editor (#8880)
- Feature: Set wagon replacement per group when using autoreplace (#7441)
- Add: [Network] Open Online Players window on starting/joining a server (#9479)
- Add: [Script] Basic information about loaded NewGRFs for scripts (#9464)
- Add: [AI] Get the number of vehicles in a given group (#9462)
- Add: [Network] Inform network clients what game-script a server is running (#9441)
- Add: Hindi translation (#9086)
- Add: [Network] Ensure players fill in a name instead of defaulting to "Player" (#9080)
- Change: Allow pause/unpause console command in single player (#9342)
- Change: Make savegame format self-descriptive and consistent across all objects (#9322, #9335, #9338, #9339)
- Change: By default, make "unload all" leave stations empty (#9301)
- Change: Reworked the debug levels and messages for network logs (#9230, #9251)
- Change: [Emscripten] Set default scrolling mode to non-pointer-locking (#9191)
- Change: Use neutral pronouns for various strings (#9189, #9203, #9228)
- Change: Make the town directory horizontally resizable (#9157)
- Change: Allow non-ASCII currency separators (#9121)
- Change: [NewGRF] Display a pop-up window for Errors with severity ERROR (#9119)
- Change: Treat languages as finished, if translations are 75% completed (#9019, #9086)
- Change: Disable NewGRF window apply button if no change was made (#8934)
- Fix: [Script] Crash when iterating lists of which the key is larger than 32bit (#9465)
- Fix: [Network] Desync due to use of unstable sort when distributing cargo production (#9460)
- Fix #9440: Negative cargo payments not being handled correctly (#9455)
- Fix: [Network] Crash when joining a server again after a TCP disconnect (#9453)
- Fix: Don't enable rename button for network clients in build vehicle window (#9452)
- Fix: Money could underflow and wrap around (#9451)
- Fix: Parse the console settings the same way as config settings (#9438)
- Fix: Ensure no more than the allowed number of NewGRFs are loaded from the configuration (#9430)
- Fix: [NewGRF] Overflow when determining cargo mask for string code 9A 1E (#9423)
- Fix: Integers for scripts are 64bit, but saved as 32bit (#9415)
- Fix #9392: [Script] Return a valid value with GetBuildWithRefitCapacity even when AIs are maxed out in vehicles (#9393)
- Fix #8169: Crash when autoreplacing vehicle with no orders (#9387)
- Fix: Wrong cargo line position in IndustryCargo window (#9383)
- Fix: Race-condition during startup of NewGRF scan (#9382)
- Fix: Don't propagate Shift/Ctrl state till next game-tick (#9381)
- Fix: Prevent palette updates during copying to the video driver (#9379)
- Fix: [Network] Determining GetNetworkRevisionString could overflow and underflow its buffer (#9372)
- Fix #9358: Don't skip empty files in tar archives (#9367)
- Fix: For old savegames, station bus/truck station cache was not updated (#9366)
- Fix #9353: [Script] Garbage collecting on priority queues could crash the game (#9356)
- Fix: Respect the autosave_on_exit setting for Null video driver (#9343)
- Fix: Compatible NewGRFs in crash-log reported wrong MD5 hash (#9340)
- Fix: [Script] Ensure the saved script strings are properly validated and terminated (#9336)
- Fix #9316: Town bridge length limit check incorrect above 250k inhabitants (#9318)
- Fix: Limit heightmap sizes to 8192x8192 (#9307)
- Fix #9281: Money generating exploit when buying out a company (#9300)
- Fix: Part of a tile might not be redrawn when terraforming (#9296)
- Fix: [OpenGL] Increase timeout when waiting for the GPU to be done with the drawing buffer (#9282)
- Fix: Vehicles sent in the wrong direction if there is no path to the destination (#9280)
- Fix #9264: Do not attach temporary wagons to free wagon chains when autoreplacing (#9278)
- Fix #9267: [Script] Crash during garbage collection (#9275)
- Fix: Encountering two-way red signals could prune unrelated Pathfinder branches (#9271)
- Fix #9255: [Network] Crash when hostname is not found (#9259)
- Fix #9256: Invalid read after free when replacing train chains (#9258)
- Fix: [Emscripten] Force secure WebSockets over HTTPS (#9248)
- Fix #9242: Tree tick handler did not scale by map size (#9246)
- Fix: [Network] Mark server as offline when no longer reachable (#9244)
- Fix: [Network] Don't rebuild the host-list during iterating the list (#9240)
- Fix: [Network] Don't mark the last-joined server as a manually added server (#9239)
- Fix: [Network] Clients leaving because of broken connections was not broadcasted (#9238)
- Fix: [Network] Check on CIDR for netmask check considered everything valid (#9235)
- Fix: Creating screenshots on dedicated servers failed (#9232)
- Fix: Leaking file descriptors for downloaded content (#9229)
- Fix: Spelling of several town names (#9222)
- Fix #9209: Game hangs when resizing highscore/news window if the screen is too small (#9210)
- Fix: [Network] Optimize creating network connections for clients using IPv4 and IPv6 (#9199)
- Fix #9186: Fix incorrect bounding box height causing station sprite glitch (#9187)
- Fix: Truncating strings in settings could leave invalid UTF-8 characters (#9121)
- Fix: Many issues related to window scaling (#9087, #9219)
- Fix: Invalidate cached vehicle colourmaps when changing liveries setting (#9006)
- Fix #8981: Don't attempt to re-reserve path if already entering/entered depot (#9000)
- Fix: Missing 'Town names:' colon in map gen GUI (#8986)
- Fix: Sorting and filtering industries that produce/accept many cargoes (#8468)
- Remove: [Network] COMPANY_INFO packets (#9475)
- Remove: [Network] A server can no longer set a limit to the amount of spectators allowed (#9466)
- Remove: Arbitrary limit on number of statically loaded NewGRFs (#9431)
- Remove: [Network] Language and map-name from server information (#9070)


## 1.11.x

### 1.11.2 (2021-05-03)

- Change: [Win32] Limit hardware accelerated video driver to OpenGL 3.2 or higher (#9077)
- Change: More improvements to the GUI at different scales (#9075, #9102, #9107, #9133, #9174, #9183)
- Fix: Query windows could be partially drawn (#9184)
- Fix #9113: Crash when removing an airport that exists in an aircraft's orders (#9182)
- Fix #9117: [Fluidsynth] Hang when changing song (#9181)
- Fix: String validation could leave invalid UTF-8 encoded strings (#9096)
- Fix: [Network] Out-of-bounds memory access with modified servers sending too short password salts (#9176)
- Fix: Crash when extra viewport with zero height has sign in view (#9175)
- Fix #9147: Crash when taking screenshots (#9169)
- Fix #6598: [Network] Prevent crashes when (re)joining network game by falling back to main menu first (#9163)
- Fix #9152: Screenshot success popup window was treated as an error (#9159)
- Fix: Fast-forward stuttering when vsync is enabled (#9140)
- Fix: [Network, Win32] Network errors were handled badly (#9116)
- Fix: [Network] Savegame transfer could stall in rare cases (#9106)
- Fix #9097: [NewGRF] Cargo initial payment variable was being truncated (#9098)
- Fix: [NewGRF] Industry variable 66 and object variable 46 erroneously truncated the distance (#9088)
- Fix: [NewGRF] Industry variables 65 and 66 ignored the parameter, and always used the north tile (#9088)
- Fix: Do not include regression test AI in bundle (#9068, #9164)
- Fix #9062: [Win32] Version in executable was not set to current release version (#9066, #9154)


### 1.11.1 (2021-04-18)

- Feature: Toggle to enable/disable vsync (#8997)
- Feature: Volume controls in the Game Options window, and better defaults (#8943)
- Add: Hotkey to focus object and rail filters (#8908)
- Add: Better plural support for Romanian (#8936)
- Change: Improve layout and spacing of several windows at different GUI scales (#9041, #9042, #9044, #9050)
- Change: [Win32] Use user UI language setting for initial language selection (#8974)
- Change: Make effect volume scale more intuitively (#8945, #8950)
- Change: Improve padding of Object & Rail station windows (#8929)
- Fix #6322: [Script] Crash when script allocates too much memory, now kills script instead (#9047)
- Fix #7513: [Script] Crash on garbage collection with misbehaving script (#9040)
- Fix #9028: [OpenGL] Crash when changing max sprite zoom level (#9032)
- Fix #8874: show a warning when a NewGRF scan is requested multiple times (#9022)
- Fix: Desync when GS unlocks railtype with wagon unlock (#9021)
- Fix #9015: [Win32] Crash on running "pwd" command in the console (#9016)
- Fix #9008: Validate starting year given on the command line (-t) (#9014)
- Fix #8878: [Network] Slow DNS queries could block the server and disconnect clients (#9013)
- Fix: Improve validation of OpenGL video driver to avoid crashes (#9007)
- Fix: Credits scrolled too slowly with larger font sizes (#8994)
- Fix #8977: Crash when altering max sprite resolution (#8993)
- Fix #8956: Industry disaster news messages showed the wrong location (#8992)
- Fix: [Win32] Font glyphs of certain widths had broken rendering (#8990)
- Fix #8930: [Win32] Duplicate text input issue for systems using IME (#8976)
- Fix: [Network] Potential stale client entries in client list (#8959)
- Fix: Graphical issues when dragging measurement tooltips (#8951)
- Fix: [Fluidsynth] Use provided default soundfont if available (#8948, #8953)
- Fix #8935: [macOS] Crash on save (#8944)
- Fix #8922: Crash when selling shared vehicles with shared vehicle window open (#8926)
- Fix: Compiling on armhf (Raspberry Pi) (#8924)


### 1.11.0 (2021-04-01)

- Feature: Allow setting a custom terrain type to define highest peak (#8891)
- Feature: Auto-detect map height limit based on generated map (#8891)
- Feature: Setting to indicate desert coverage for tropic climate and snow coverage for arctic climate (replaces snow line height) (#8891)
- Add: Allow setting the highest mountain for heightmaps (#8891)
- Change: Scale exported heightmaps to highest peak and inform the user of this value (#8891)
- Change: Remove "maximum map height" from the New Game GUI (#8891)
- Fix #8803: Only auto-remove signals when rail can be built (#8904)
- Fix #8565: Stopped road vehicle displays a speed different than 0 (#8901)
- Fix #8886: Don't try to resolve folders within tars named '.' (#8893)
- Fix: Placing random trees in SE crashes the game (#8892)
- Fix #8875: Filter string in station window breaks flow in user interface (#8885)
- Fix #8871: [OpenGL] Initialize all buffers after resize and clear back buffer (#8877)
- Fix: OpenGL performance with some AMD GPUs (#8876)
- Fix: Recompute road/railtype availability after disabling the engine (#8872)
- Fix: OSK layout not scaled for 2x or 4x GUI scale (#8868)


### 1.11.0-RC1 (2021-03-14)

- Feature: Option to (dis-)allow hardware accelerated video drivers (#8819)
- Feature: Option to set display refresh rate (#8813)
- Feature: Allow custom width/height of screenshot and making heightmap screenshots via console (#8804)
- Feature: Allow filtering on name in rail station window (#8706)
- Feature: Setting for highest resolution of sprites to use (#8604)
- Add: Make NewGRF Scanner / World Generation update smoother and make aborting it react faster (#8830)
- Add: Malaysia Ringgit as Currency (#8783)
- Add: "Engines only" filter in build train window (#8733)
- Change: De-limit framerate window's framerate (#8772)
- Change: Clarify what effect town interactions have (#8744)
- Change: Don't show global goals in company goal windows (#8709)
- Change: Recolour graph windows to brown (#8700)
- Fix #8855: Bootstrap could result in an empty screen when bootstrap fails (#8856)
- Fix #8851: Don't allow infinite "exec" depth in script, but limit to 10 deep (#8852)
- Fix #8647: Incorrect drawing order of tram catenary sprites (#8843)
- Fix #8711: Having gui_zoom lower than zoom_min causes a crash (#8835)
- Fix #8810: "aircraft out of fuel" news shows the wrong place (#8832)
- Fix #8833: Don't reload NewGRFs when we are shutting down (#8830)
- Fix: Scale padding between elements the same as other padding (#8829)
- Fix #8808: [OSX, OpenGL] Crash on switching blitters due to double-mapping the video buffer (#8822)
- Fix #8784: Using Alt+Enter doesn't update the fullscreen toggle visibly (#8820)
- Fix #8817: Keep NewGRF order for object class sorting (#8818)
- Fix #8809: Crash when removing airport when hangar window open (#8815)
- Fix #8799: Crash when Search Internet in Multiplayer (#8801)
- Fix #8775: [Win32] Don't create the main window when Alt-Tabbing back into fullscreen (#8792)
- Fix #8774: Black screenshots when using 40bpp-blitter (#8791)
- Fix: [OSX] Hide dock when entering fullscreen (#8789)
- Fix: Bootstrap fails to start on clean install (#8788)
- Fix: Terraform limit acts random when maxing out per_64k_frames setting (#8782)
- Fix: Max-value of fast-forward-speed-limit can be outside its storage size (#8769)


### 1.11.0-beta2 (2021-02-28)

- Feature: Add setting to limit fast-forward speed (#8766)
- Feature: Significant performance improvements to all video drivers (#8605, #8652, #8660, #8685, #8702, #8703, #8707, #8726, #8740)
- Feature: Configurable display refresh-rate, default to 60fps (#8680)
- Feature: Automatically upload releases to Steam (#8644)
- Feature: Generic Linux builds (#8641)
- Feature: [GS] Allow non-question type windows to have no buttons (#8638)
- Feature: [macOS] ZIP build (#8614)
- Feature: Object class selection string filtering (#8603)
- Feature: 'Remove all industries' button in scenario editor (#8550)
- Feature: Automatic UI and font zoom levels when supported by the OS (#8537)
- Feature: [macOS] Render screen at native resolution by default for HiDPI screens (#8519)
- Feature: OpenGL video driver (#7744)
- Add: Indonesia Rupiah currency (#8616)
- Change: Improve graph period markings (#8732)
- Change: Make pathfinder account for maximum order speed, if set (#8722)
- Change: Darken graph grid lines for legibility (#8690)
- Change: Make order window hotkeys toggle for load & unload variants (#8669)
- Change: Use a more specific error message when attempting to bulldoze your own HQ (#8667)
- Change: Convert .md to .rtf for Windows/Mac packages (#8617)
- Change: Move the 'tree placer algorithm' & 'road drive side' settings to the Settings window (#8566)
- Change: Move town name generator selection to mapgen GUI (#8566)
- Change: [macOS] Native font rendering (#8518)
- Fix: Display of network lobby windows for different GUI sizes (#8765)
- Fix: Don't desync if client leaves before you finish downloading map (#8755)
- Fix: Allow estimating vehicle clone cost even if short on money (#8748)
- Fix: Don't notify twice that a client left because of a timeout (#8746)
- Fix: Vehicle cursor size did not account for the interface zoom level (#8739)
- Fix #8123: Trams on half-tiles couldn't find depots (#8738)
- Fix #8276: [NewGRF] Crash when an object's size was not set (#8719)
- Fix #8349: Close depot vehicle list windows when closing the depot window (#8717)
- Fix #8594: [NRT] Road pathfinder did not account for roadtype speed limits or lengths of tunnels/bridges (#8710)
- Fix: Whole status bar instead of money widget refreshed on money change (#8692)
- Fix: Unnecessary status bar redraws when there is no news to show (#8691)
- Fix: New orders are non-stop by default (#8689)
- Fix: Framerate window showed a slightly higher rate than actually measured (#8682)
- Fix: Autorenew failure advice due to bad refit being shown to all companies (#8681)
- Fix #8625: Wrong ending year was displayed in highscore table (#8672)
- Fix #8620: Scale spacing between date & news in history window according to font scaling (#8671)
- Fix: [Win32] Set minimum resolution for timers to 1ms (#8660)
- Fix: Mention our websites with https:// (instead of http://) (#8657)
- Fix: [Emscripten] Open links in browser (#8655)
- Fix: Don't crash when towns upgrade road tiles during expansion (#8651)
- Fix #8029: [SDL2] Blank display when under Wayland (#8648)
- Fix: Default Network Server List sorter put compatible servers in wrong order (#8626)
- Fix: Use non-pulsating red highlight for coverage (#8622)
- Fix: Center text and image in vehicle statusbar vertically (#8602)
- Fix: Don't walk out of the map when trying to build tunnels (#8600)
- Fix: Off-by-one error in desert/rainforest positioning at world gen (#8588)
- Fix #8037: Crash when restarting AI that is controlling the same company as the player (#8587)
- Fix: Stopped ships shouldn't block depots (#8578)


### 1.11.0-beta1 (2021-01-22)

- Feature: [GS] Ability to set some extra text in the industry window (#8576)
- Feature: Show rainforest under vegetation on smallmap (#8562)
- Feature: Automatically determine window size on new install (#8536)
- Feature: Towns can build tunnels (#8473)
- Feature: Make maximum length of town bridges depend on population (with a minimum limit of 4) (#8439)
- Feature: New icons for renaming and go-to-location on GUI windows, and improve consistency of usage (#8455)
- Feature: Support for ARM64 on Apple Silicon and Windows (#8340, #8577, #8583)
- Feature: Add an option to disable tree growth completely (#8415)
- Feature: Support for Emscripten (play-OpenTTD-in-the-browser!) (#8355)
- Feature: Show group name as part of the default vehicle name (#8307)
- Feature: "Frozen" economy setting that stops production changes and industry closures (#8282)
- Feature: New velocity unit "tiles/day" (#8278)
- Feature: Option to automatically remove signals when placing rail (#8274)
- Feature: Increase max possible distance from border for oil refineries and rigs (#8237)
- Feature: Improve tree planting window, and allow planting 'clumps' of trees by dragging in the scenario editor (#8234)
- Feature: Indian Rupee (INR) currency (#8136)
- Feature: [GS] Ability to give a company exclusive access to an industry (#8115)
- Feature: Hotkeys for Land Info window, News window & close error window (#8053, #8266)
- Feature: Improve rendering of large viewports (#7962)
- Feature: [GS] Influence industry production changes from GameScript (#7912)
- Feature: [GS] Push-buttons on storybook pages (#7896)
- Feature: Option to group vehicle lists by shared orders (#7028)
- Feature: Drag-and-drop vehicles in group GUI for shared order groups (#7028)
- Add: [GS] A tile parameter to GSCompany::ChangeBankBalance for showing changes more visually (#8573)
- Add: [NewGRF] Allow NewGRF vehicles to query the current rail/road/tram type (#8554)
- Add: [Script] ScriptCargo::GetName for the human readable name of cargoes (#8544)
- Add: "reload" console command to reload the current scenario or heightmap (#8527)
- Add: [NewGRF] Flag to test if inflation is on or off (#8427)
- Add: [Script] Native priority queue (useful for things like pathfinders) (#8091)
- Add: [NewGRF] Industry behaviour flag to override second cargo production clamping for water industries when using smooth economy (#8079)
- Change: [SDL2] Start game on the screen where the cursor is (#8572)
- Change: Use a dark background for all profit graphs to increase contrast (#8557)
- Change: Reword warning in cheat window (#8538)
- Change: Enable the toolbar for road/rail/dock/airport, regardless of vehicle availability (#8521)
- Change: For arctic and tropical climates, make sure at least a few hills are generated (#8513)
- Change: Destroying a tunnel/bridge now sells the tracks before destroying the tunnel/bridge (#8508)
- Change: Move "give money" from client-list to company window (#8500)
- Change: [MacOS] Hide Dock and menu when in fullscreen mode (#8487)
- Change: Improve performance for complex vehicle chains by resolving sprites less frequently (#8485)
- Change: Make engine reliability independent of introduction date (#8470)
- Change: Some default settings to improve gameplay for new players - default non-stop orders on, disable inflation, quick goto orders, show track reservations, and more (#8463)
- Change: Converting town-owned road types now requires a positive town rating (#8457)
- Change: Rework server list buttons for searching LAN/internet servers (#8426)
- Change: Add some styling to GS question windows depending on the type (#8422)
- Change: [Linkgraph] Speed up game exit by allowing job threads to be aborted early (#8416)
- Change: Prevent towns from building dead-end road bridges (#8401)
- Change: Send network error to the server before making an emergency save (#8387)
- Change: Extend the allowed range for max loan setting up to £2 billion (#8386)
- Change: Don't display OS name when exiting the game (#8366)
- Change: Save openttd.cfg immediately on changing a setting (#8358)
- Change: Autorenew now defaults to on (#8352)
- Change: [NewGRF] Also use aircraft property 12 for helicopters (#8347)
- Change: Service at depot also resets breakdown chance (#8317)
- Change: Use key names instead of characters in hotkey.cfg (#8291)
- Change: Allow command cost-estimation while paused (#8222)
- Change: Always apply inflation from 1920 to 2090, no matter the game start year (#7589)
- Change: Use CMake for build system (#7270)
- Change: [Linkgraph] Pause the game when linkgraph jobs lag (#7081)
- Change: Place "Group by" above "Sort by" in station window for consistency (#7028)
- Fix #8589: Prevent desyncs with vehicle motion counters and NewGRFs (#8591)
- Fix #7670: Improve pathfinder performance when lost vehicles are blocked from moving (#8568)
- Fix: Inform user if a custom font failed to load due to missing glyphs (#8559)
- Fix: Don't allow wagon chains (without an engine) to exceed maximum train length (#8533)
- Fix #7619: Super fast NewGRF aircraft could be unable to land (#8531)
- Fix: Improve connection retries for the content server in cases of broken networking (#8530)
- Fix #7972: Show invalid orders to stations that don't accept the vehicle (#8516)
- Fix: Error when trying to clone a vehicle with invalid orders (#8515)
- Fix #8050: Various off-by-one errors in how the end-year of the game was used (#8512)
- Fix #8332: Aborting vehicle group drag & drop could cause crashes (#8511)
- Fix #8168: Allow relocating HQ partially over an existing HQ (#8510)
- Fix #8068: Allow selling tram track regardless of bank balance (#8509)
- Fix #7604: Prevent houses from wandering away from roads (#8507)
- Fix: Make the "password" button the same size as the other buttons in the Company window (#8500)
- Fix #7611: Keep news about vehicle accidents around after the vehicle is cleaned up (#8497)
- Fix: [MacOS] Full animation in fullscreen mode was reducing the height of the window (#8491)
- Fix: [MacOS] Loading custom fonts (#8484)
- Fix: Network client makes emergency saves twice if the server is disconnected (#8477)
- Fix #8462: Stop towns from trying to build roads on water (#8471)
- Fix: [NewGRF] GetCurveSpeedLimit should use the railtype from the current tile (#8466)
- Fix #8437: Crash when using certain heliports with certain rotated airports (#8458)
- Fix #8437: Planes would land at the wrong height if the top corner of the airport was lowered (#8458)
- Fix #8297: Infrastructure counters for road tunnels, bridges & depots (#8454)
- Fix #6468: Don't store the version of AIs that are started via console (#8430)
- Fix: Don't lower tree density if spreading is not enabled (#8413)
- Fix: Prevent savegame version conflicts with certain old patchpacks (#8411)
- Fix: [NewGRF] Variable 0x44 was always HZB_TOWN_EDGE for road stops (#8400)
- Fix #8313: Use correct capitalization for TTO / DOS music files in the baseset metadata (#8385)
- Fix: [NewGRF] Action 7/9 conditions 0x0F to 0x12 failed, if 'param' was 0x88 (#8382)
- Fix: Change the working-dir searchpath when using '-c' (#8367)
- Fix: Useless warning with -snull and no BaseSounds available (#8361)
- Fix: Crash trying to load TTO/TTD savegames. (#8356)
- Fix: [Script] Don't echo script exceptions to console (#8331)
- Fix: Slovak ownname was using the wrong form (#8326)
- Fix #8311: [NewGRF] Industry probability at map generation was scaled differently when set via property or callback (#8312)
- Fix: Only check houses for cargo when generating subsidies with towns (#8305)
- Fix: Sprite preview in sprite aligner was too small with scaled UI (#8288)
- Fix: Spell 'Viewport' consistently (#8260)
- Fix #7772: Show vehicle destination on mouseover when vehicle stopped (#8236, #8543)
- Fix #8232: Huge screenshot warning was shown incorrectly (#8224)
- Fix #8153: Report incompatible cargo/order when autoreplace fails (#8169)
- Fix: [Script] ScriptMarine::AreWaterTilesConnected did not work for aqueducts (#8074)
- Fix #7645: Add cost of clearing the sloped tile to the price of a dock (#7947)
- Fix #6452: Reset only editable and visible settings from GUI (#7890)
- Fix: Original terrain generator did not keep a single gap of water at the borders (#7883)
- Remove: In-game console command "content select all" (#8363)
- Remove: [OSX] Support for OSX older than 10.7, including QuickTime music driver (#8078)


## 1.10.x

### 1.10.3 (2020-08-09)

- Change: Also make roadside trees match the tree transparency option (#8245)
- Fix: Center text and icons in the status bar vertically (#8273)
- Fix: [NRT] Set invalid road and tram types for rail tunnel ends (#8269)
- Fix #7980: Properly invalidate mouse-over station coverage highlight (#8263)
- Fix #8250: [NRT] Company infrastructure window always omits last road/tramtype (#8251)
- Fix #8162: [NRT] Improve error message when converting town owned road (#8247)
- Fix #8216: Don't show floating text on autoreplace if cost is 0 (#8244)
- Fix #8129: Crash if a news message expires while viewing the endgame screen (#8243)
- Fix #8221: Use more specific error message when a bridge is too long (#8240)
- Fix #8230: Resolve ".." when opening files in .tar (#8231)
- Fix: A few race conditions in netcode (#8227, #8228, #8229)
- Fix #7838: Crash relating to group creation and renaming (#8223)
- Fix #8104: [SDL2] Fix window resizability when going from fullscreen to windowed mode (#8211)
- Fix: Display banlist's indexes correctly (#8209)
- Fix: Possible desync with subsidy creation (#8159)
- Fix #8131: Draw small bridges pillars in more places (#8149)


### 1.10.2 (2020-06-01)

- Add: Ubuntu 20.04 packages (#8127)
- Fix: [OSX] Possible crash on failure to set colourspace (#8181)
- Fix #8166: Prevent crash from a NewGRF with an invalid RoadType (#8180)
- Fix #8024: Make Online Content GUI more responsive while loading (#8179)
- Fix #7970: Disable event loop when generating crash dump (#8176)
- Fix: [Build] Compatibility with modern Visual Studio (#8170)
- Fix: Trees would disappear completely after a few years if tree spread was disabled (#8160)
- Fix #8155: Roadtype speed limit in scenario editor toolbar dropdown was doubled (#8156)
- Fix: Desync after house replacement (#8151)
- Fix #8137: New clients can't join (desync) after funding an industry (#8140)
- Fix #8132: Corrupted savegame with station with multiple owners caused a crash (#8134, #8142)
- Fix: Stop gamelog when recovering from a savegame load error (#8133)
- Fix: Exceptionally unlikely issue when reading MIDI files (#8125)
- Fix #8119: Docking areas were not properly updated when clearing, causing desyncs (#8124, #8130)
- Fix #8117: Memory leak for incoming admin port packets (#8122)
- Fix: Non-roadbridges potentially had roadtype information set (#8111)
- Fix #8108: Possible crash on loading TTD savegames with phantom oil rigs (#8109, #8110)
- Fix #8093: Build & refit test run changed game state and could cause desyncs (#8103)
- Fix: [Script] AreWaterTilesConnected did not handle aqueducts properly (#8074)


### 1.10.1 (2020-04-13)

- Fix #8081: Crash when placing a ship depot next to a dock (#8082)
- Fix: [GS] A Goal's QuestionID was getting truncated (#8072)
- Fix #8064: Refit capacity could be displayed incorrectly in extreme edgecases (#8065)
- Fix #8060: Restore admin network API compatibility (#8061)
- Fix #8055: Crash when roadtype availability changes with the road construction toolbar open (#8058)


### 1.10.0 (2020-04-01)

- Change: Open company window when clicking on a company goal (#8033)
- Change: [SDL2] Support pasting from clipboard on Linux (#8004)
- Fix: [Script] Random deviation upper bound range should be inclusive (#8052)
- Fix #8043: Incorrect handling of global road/tram hotkeys caused a crash (#8044)
- Fix #8039: [Script] SetOrderFlags and GetOrderDestination didn't work for oil rigs (#8040)
- Fix: [Script] CanBuildConnectedRoadPartsHere neighbours tiles were incorrect if you started a new game with a different world size (#8036)
- Fix: Ignore clicks on non-applicable global goals (#8035)
- Fix #7613: Limit News Window to 1024 messages to keep it usable and avoid overflowing scrollbars (#8026)
- Fix #7644: [OSX] Hopefully improve performance by manually set colorspace to sRGB (#8023)
- Fix #8020: Add missing docking tiles around industry neutral stations (#8021)
- Fix: GUI tramway icon only contained a single set of tram tracks (#8015)
- Fix: Station with multiple docks had the wrong tile area (#8014)
- Fix #8011: Crash when loading TTD scenario containing a dock (#8012)
- Fix #7998: Crash when scripts tried to access companies with invalid IDs (#8010)
- Fix: Crash when attempting to draw a string containing nonprintable characters (#8005)
- Fix #6399: Directory ~/.local/share not created if it didn't already exist (#8003)
- Fix #7958: Custom catenary missing on road bridges (#7991)
- Fix #7944: Demolishing locks built on rivers didn't always restore the river (#7946)


### 1.10.0-RC1 (2020-02-09)

- Feature: Allow server to supply a reason to kicked/banned clients (#7859)
- Feature: [NewGRF] Station variable 6A, querying GRFID of nearby station tiles (#7956)
- Feature: Improved logic of sharing industry production between 3 or more stations (#7922)
- Feature: Highlight the item under mouse cursor in file browser (#7900)
- Feature: [GS] Methods to change town rating of companies (#7898)
- Feature: [NewGRF] Callback profiling command (#7868)
- Feature: Add a setting to show the name of the NewGRF of a vehicle in the build window (#7852)
- Feature: Ability to filter industry directory window by cargo (#7843)
- Feature: Minimap screenshot type (#7817)
- Feature: [GS] Methods to control engine availability of a specific company (#7791)
- Feature: Configurable game ending year (#7747)
- Feature: Separate window for taking screenshots (#7550)
- Change: Move autorenew setting to basic category (#7984)
- Change: Improved algorithm for transfer feeder payments (#7935)
- Change: Show volume sliders with wedges instead of boxy slider (#7902)
- Change: Auto-restart loads the original resources (e.g. save or scenario) again (#7688)
- Change: Improve readability of integer lists saved to config files (#7396)
- Fix #7976: Crash when attempting to kick the host via rcon (#7985)
- Fix #7592: Road vehicles no longer balanced between multiple road stop stations (#7979)
- Fix: Station rating effects affecting too large area (#7977)
- Fix #7974: Crash when Ctrl+click to show a collapsed vehicle group (#7975)
- Fix #7969: Crash when executing a recursive console alias (#7973)
- Fix #6566: Very long loading of the maximum "zoom out" level at high resolutions (#7968)
- Fix #7952: Crash when switching input languages (#7953)
- Fix: [OSX] Don't show a crash/assertion message box for a GUI-less video driver (#7934)
- Fix #7925: Corrupt savegames could lead to corruption of the titlegame (#7932)
- Fix: [Fluidsynth] Music notes from previous song were not properly reset (#7930)
- Fix: Invalid string usage within music window (#7928)
- Fix: Non-deterministic name sorting in industry directory window (#7915)
- Fix #7899: Various issues with town list window sorting (#7906, #7916)
- Fix #7587: Fix possible crashes when loading old save games with invalid waypoint positions (#7894)
- Fix: Avoid a crash by properly resetting timetable duration when loading old savegames (#7894)
- Fix: Possible crash when post road-works cleanup removes all road pieces (#7903)
- Fix #7891: Fix crash when loading save from 1.7.2 (#7892)
- Fix #7887: Missing sound effects for some main toolbar buttons (#7888)
- Fix #6667: Avoid confusion by also recalculating bridge costs for 'spectated' AI companies (#7884)
- Fix: Allow old NewGRF industries to hide in/out cargo slots (#7882)
- Fix: [Windows] Fix bootstrap GUI with Uniscribe but no Freetype (#7878)
- Fix: Missing keycodes for hotkeys.cfg (#7850)
- Fix #7625: Ensure road infrastructure cost is correctly updated when upgrading your own roads (#7628)
- Fix #7088: Avoid crash by closing AI/GS textfile windows when changing their in-game slot (#7094)


### 1.10.0-beta2 (2019-12-25)

- Feature: [Script] More error mappings (#7857)
- Feature: Ctrl+Click on a vehicle in the vehicle group window selects and scrolls to the vehicle's group (#7800)
- Feature: Ctrl+Click on the vehicle details button in the vehicle view window opens the vehicle group window focused on the vehicle (#7800)
- Feature: Add a button to the vehicle advisory news window to open the vehicle's group window (#7800)
- Feature: Ctrl+Click on a vehicle in the vehicle list window opens the vehicle group window focused on the vehicle's group (#7800)
- Fix: Custom sea level default value is now equal to minimum value (#7866)
- Fix: [NewGRF] Various tracktype fixes (#7863)
- Fix: Infrastructure total update when removing tram road stop (#7856)
- Fix #7847: Use ViewportSign coordinates for sign Kdtree coordinates (#7849)
- Fix #7836: Check coherency of NewGRF parameter min/max (#7840)
- Fix #7673: [Script] Allow removal of custom town text (#7834)
- Fix: Crash when displaying an error message at map edges (#7833)
- Fix #7783, #7816: [SDL2] Fix input handling in edit context (#7825)
- Fix #7697: Tile query on HQs did not display cargo correctly (#7824)
- Fix #7820: Possible game crash when removing oil rig (#7821)
- Fix #7606: Rare crash when trying to clean up a crashed script (#7819)
- Fix #7784: [SDL2] up/down/home/end key behaviour (#7815)
- Fix #7631: 16 out cargo support for industry directory (#7809)
- Fix #7646: Crash on random map generation failure (#7805)
- Fix #7430: Only reset time since pickup when train visits station if it has room to load (#7595)
- Fix #5405: Aircraft could route to depots outside their range (#7104)


### 1.10.0-beta1 (2019-10-29)

- Feature: Configurable minimum age for companies before allowing share trading (#7780)
- Feature: Filter on town list window (#7621)
- Feature: Ability to show Newspaper and Ticker messages in parallel (#7612)
- Feature: Show coverage area for stations and towns (#7446)
- Feature: Collapsible vehicle groups (#7417)
- Feature: More flexible docks - can now have multiple per station, ships can use any part of dock (#7380)
- Feature: [NewGRF] Railtype flags to allow/disallow 90 degree curves (#7352)
- Feature/Change: Non-rectangular catchment area for sparse stations (#7235)
- Feature: Improved performance for road vehicle pathfinding (#7261)
- Feature: Option to show local authority boundary of towns (#7025)
- Feature: Experimental method of town cargo generation that scales linearly with population (#6965)
- Feature: [NewGRF] RoadTypes (NRT) (#6811)
- Add: [Win32] Select MIDI device by port name (#7666)
- Add: 'getsysdate' console command (#7658)
- Add: Currencies NTD, CNY, HKD (#7596)
- Add: Icons to vehicle construction drop down lists (#7358, #7485)
- Add: Security warning to players that company passwords are not truly secure (#7351)
- Add: [Script] Various API functions for managing vehicle groups (#7225, #7336, #7716)
- Add: SDL2 video driver (#7086)
- Change: Inactive industries do not make sound effects (#7752)
- Change: [Win32] Use native GDI engine for rendering fonts (#7572)
- Change: Scale oil refinery edge distance limit by map size (#7514)
- Change: Do not display a news message about old vehicles when a replacement for it is activated (#7401)
- Change: When filtering purchase list by cargo type, buy button now performs a refit if required (#7301)
- Change: Don't apply forbid 90 deg turn settings to ships, and make penalties for turns configurable (#7289, #7372)
- Change: Make the chance of an aeroplane crashing at an airport with a short runway independent of plane crash setting (#7302)
- Change: Keep town growth rate in sync with house count (#6777)
- Fix #6219: Improve helicopter's ability to takeoff from commuter and international airports (#7710)
- Fix #6407: Show snowy ground sprites for train depots (#7671)
- Fix: Power/running cost sorting algorithm was not correct when power was higher than running cost (#7561)
- Fix: Tweaks to small-map colours to make dark blue company more visible (#7436, #7450)
- Fix: [SDL] Do not offer video smaller than 640x480 (#7442)
- Fix: Incorrect display of industry production around tiles (#7426)
- Fix: Show industry name in Land Area Information window for industries with neutral stations instead of just 'Oil Rig' (#7349)
- Fix: Remove redundant and broken file lookups when loading base sets (#7348)
- Fix: Always report error when ordering a road vehicle to wrong type of road stop (#7316)
- Fix #7043, #7274: Improve performance when creating towns during world creation (#7284)
- Fix #7062: Remove ship max order distance (#7279)
- Fix #7189: Fluidsynth volume gain too high (#7253)
- Fix: Add setting for whether industries with neutral stations (e.g. Oil rigs) accept and supply cargo to/from surrounding stations to fix exploit as old as TTO (#7234)
- Fix: Properly reset dropdown menu windows after changing AI/GS settings (#7092)
- Remove: DOS, MorphOS, AmigaOS & BeOS support (#7326, #7388)
- Remove: Original Path Finder (#7245)


## 1.9.x

### 1.9.3 (2019-09-16)

- Change: Use natural sort when sorting the file list (#7727)
- Fix #7479: Don't close construction windows when changing client name (#7728)
- Fix #7731: Files sorting by modification time on Windows XP (#7731)
- Fix #7644: [OSX] Better solution for colourspace/performance issues (#7741)


### 1.9.3-RC1 (2019-09-07)

- Add: Can now click industries to make orders to their neutral station (e.g. oil rig) (#7709)
- Fix #7644: [OSX] Poor framerate on certain systems (#7721)
- Fix #7702: Highscore screen UI scaling (#7714)
- Fix #7704: [OSX] Handle malformed UTF8 strings, leading to crashes in server browser (#7705)
- Fix #7188: [AI] Possible crash when reloading an AI in multiplayer games (#7701, #7725)
- Fix: RemoveAirport function now returns 'Aircraft in the way' error message when occupied (#7690)
- Fix: Spelling in running costs setting help text (#7686)
- Fix #7655: 'Decrease' buttons in cheat window not working properly with UI scaling (#7669)
- Fix: [GS] Could not create elements on Storybook pages with ID > 255 (#7657)
- Fix #7626: Allow building road stops over town-owned one-way roads, instead of crashing (#7627)


### 1.9.2 (2019-07-07)

- Change: Set default setting in server browser of "Advertised" to "Yes" (#7568)
- Change: Allow building road stops over self-owned one-way/blocked road (#7547)
- Fix #7463: Promote scroll mode setting to basic category (#7586)
- Fix: Inconsistent GUI scaling (#7539)
- Fix #7491: Send company update admin message when bankruptcy counter changes (#7492)
- Fix #7553: Check bounds when loading strings (#7554)
- Fix: Really increase the maximum number of GameScript texts to 64k (#7555)
- Fix: Crash when attempting to load old save game with GRFs set (#7546)
- Fix #6507: Don't try to load invalid depots from older savegames (#7546)
- Fix: Railtype bits were moved too late, leading to rails under bridges losing their type (#7546)
- Fix: Bounds check access to railtype_map (#7529)
- Fix: Spurious errors when using more than 32 railtypes (#7533)
- Fix #7633: Allow zero-cost track conversion to succeed (#7634)
- Fix #7577: Check if linkgraph station index is valid before dereferencing (#7583)
- Fix #7224: Drag and drop vehicle group creation does not work correctly (#7581)
- Fix #7570: Show Github URL in the crashlog window (#7571)
- Fix: Clicking on scrollbar 'thumb' moved position up instantly (#7549)
- Fix #7255: Prevent crashlog corruption by only printing the 32 most recent news messages (#7542)
- Fix #5685: Check for free wagons in ScriptVehicleList (#7617)
- Fix: Make GSGoal.QuestionClient work correctly at least for clients with ID < 2**16 (#7560)
- Fix #6666: Mismatched parentheses in RTL languages (#7480)
- Fix: [Windows] Various reliability and correctness improvements to MIDI on Windows (#7620)


### 1.9.1 (2019-04-08)

- Fix #6564: Enforce types of arguments for station name strings (#7419)
- Fix #7433: Don't use AirportSpec substitute if it's not enabled (#7435)
- Fix #7447, #7466, #7476: Missing NewGRF strings due to Action 4 feature check skipping pseudo-feature 48 (#7449)
- Fix #6222: Advanced sprite layout sometimes showed incorrect railtype ground tile. (#7460)
- Fix #7439: CompanyRemoveReason overwritten by ClientID (#7465)
- Fix: [Windows] Incorrect error handling could lead to cascading error windows (#7482)
- Fix #7478: Don't remove NewGRF objects on company take-over. (#7483)


### 1.9.0 (2019-04-01)

- Fix #7411: Use industry production callback (if used) on initial industry cargo generation (#7412)


### 1.9.0-RC2 (2019-03-24)

- Fix #7400: WaterClass for tree tiles was not converted for old saves preventing industry creation (#7405)
- Fix: Filtered file list did not scroll properly (#7402)
- Fix #7391: Don't invalidate go to depot orders of non-aircraft when invalidating hangar orders that happen to share IDs (#7392)
- Fix #7386: Measurement tooltip for tunnels, aqueducts & docks did not display or flickered (#7389)
- Fix: Wrong company performance rating when money exceeds INT_MAX (#7382)
- Fix: Permit loading of industry production callback with invalid cargo type (#7364)
- Fix: Spelling for a few real town names (#7338)
- Fix: Runway too short for large aircraft message should not depend on plane crashes setting (#7325)
- Fix #7334: Ship lost after crossing bridge due to path cache not being consumed while on final bridge end (#7335)


### 1.9.0-RC1 (2019-03-03)

- Add: Various AI/GS functions for vehicle groups (#7225)
- Change: Synchronise introduction date and reliability randomness across vehicles with the same base introduction date (#7147)
- Change: Allow towns to build bridges over rails and one-way roads (#7291)
- Fix: Detection of coast tiles with trees on them (#7309)
- Fix: Emergency netsave saved the title game instead of the broken game in question (#7298)
- Fix: Company livery window showed incorrect groups when opened in multiplayer (#7288)
- Fix: Unable to select last group in open livery window (#7283)
- Fix: Goto hangar orders were not invalidated when rebuilding airports (#7100)


### 1.9.0-beta3 (2019-02-24)

- Feature: Option to adjust font size separately from GUI size (#7003)
- Feature: Increase maximum number of orders from 64000 to ~16.7m (#7220)
- Add: Show performance of AI and GS in framerate window
- Add: News menu entry and shortcut for deleting all messages (#7240)
- Change: [OSX] Improved scrolling behaviour when using touchpads
- Change: Add scrollbar to cargo legend in cargo payment rates window
- Change: Owner of vehicle with exclusive transport rights may now load cargo from neutral stations (#7256)
- Change: Improved UI behaviour when dragging sound volume sliders with the mouse (#7227)
- Change: Use selected vehicle group as parent when creating a new group (#7224)
- Change: Use SlErrorCorrupt() on pool index error when loading a savegame, instead of terminating (#7219)
- Change: Skip reliability decay if servicing is disabled
- Fix: Remove desert around lakes upon generation
- Fix: Re-sorting file list did not update filtered rows
- Fix #7159: Waiting time at red one-way signals was too short
- Fix #7189: Fluidsynth volume gain too high
- Fix #7004: Cargo flow legend was not properly refreshed after zooming (#7265)
- Fix: Possibility to modify wrong AI/GS settings when switching AI/GS scripts around (#7090, #7091)
- Fix: Use more descriptive "spectator" strings for story book and goal dropdown menus
- Fix #6599: Disable build and rename button in build vehicle window when no vehicle is selected
- Fix: Do not mangle tagged revision strings for network revision strings
- Fix #7151: AI start date deviation was still applied when not set to a random AI (#7223)
- Fix #7197: Invalidate depot buttons when necessary (#7212)
- Doc: [AI] UnshareOrders empties the orders list of the vehicle


### 1.9.0-beta2 (2019-02-09)

- Fix: Non-Windows builds did not get correct git hash


### 1.9.0-beta1 (2019-02-09)

Note: OpenTTD was migrated to GitHub for 1.9, so SVN revision and FlySpray numbers have been replaced with Pull Requests and Issue numbers
- Feature: Group liveries, and livery window usability enhancements (#7108)
- Feature: Overhaul of music system, support MPSMIDI music files (TTD DOS/TTO) (#6839)
- Feature: [Win32] Rewritten DMusic and WinMM music drivers
- Feature: [Win32] New XAudio2 sound driver
- Feature: [Linux] New Fluidsynth music driver
- Feature: Framerate display window (#6822)
- Feature: [NewGRF] Ability for industries & houses to produce and/or accept up to 16 different cargoes
- Feature #6610: Allow towns to build houses on road turns (#6758)
- Feature: Replace independent map scrolling GUI settings with single option, and add choice to not lock cursor position when scrolling (#6756)
- Feature #6459: API for querying network clients from GS (#6736)
- Feature: New Russian Ruble & Mexican Peso as currencies (#6678, #7035)
- Feature #4186: Append '(City)' after city names in the town directory
- Feature #986: Automatic save when losing connection to a network game
- Add: [NewGRF] Flag to hide rail types from construction (#7118)
- Add: [NewGRF] Airport animation trigger for plane landing (#6334)
- Add #4115: Default starting company colour setting (#6998)
- Add: Mixer feature for streaming sampled music
- Add #6460: [AI] start_date parameter for Random AIs on new game
- Add: BACKSPACE can be mapped as a hotkey
- Add: 32bpp SSE2 blitter palette animator (#6795)
- Change: Make ships turn slowly when changing direction and stop when going up or down a lock (#7065, #7150)
- Change: Improve ship pathfinder performance
- Change: Decouple GUI timing from game ticks (#6780)
- Change: Desert tiles are now half-desert if a neighboured tile is non-desert or sea/coast (#4754)
- Change: Gradually slow down aircraft speed on breakdown (#6932)
- Change: [NewGRF] Increase rail type & cargo type limits to 64
- Change: [NewGRF] Increase size of persistent storage to 256
- Change: [NewGRF] Use last OpenTTD SVN revision in NewGRF version number (#6843)
- Change: Clone tool in depot window now behaves like clone button in vehicle window (#6754)
- Change #6397: Keep town growth rate in sync with house count
- Change: Scale default FreeType font size selection by UI zoom level
- Change: [OSX] Reversed pinch to zoom behaviour
- Change: Switch town growth rate and counter to actual game ticks (#6763)
- Change: Non-tag revisions are now named '<commitdate>-<branch>-g<shorthash><modified>'
- Change: Rewrite several bits of documentation in markdown
- Fix: Reinitialise graph GUI on game restart (#7191)
- Fix: Potential crash during shutdown after unpacking downloaded content (#7185)
- Fix #6584: Text layout in engine preview dialogue
- Fix #6636: Airplanes could be sent to helicopter station depots
- Fix: Deadlock when launched with -n switch (#7103)
- Fix: Various corrections to town names in non-English languages (#7038, 7141)
- Fix: Only consider airport tiles when placing (for non-rectangular airports) (#6613)
- Fix: Spelling fixes on some Latin American town names
- Fix #7001: Pathfinders should see standard road stations as tiles where to reverse
- Fix #6676: Prevent helicopters from stopping in midair during some kinds of landing
- Fix: Remove need to use Ctrl+Click when building stations next to competitors (#6906)
- Fix: [NewGRF] Make VA2 operator 11 (ror) behave well-defined when rotating by 0 bits
- Fix #4109: Add more water checks to the Oil Rig layout
- Fix #6938: Incorrect value for "Cost to Clear" was displayed for Company Headquarters in tile inspector (#6939)
- Fix #6920: Make 9.8m/s^2 a common constant for TE-calculation
- Fix #6892: [Script] CONFIG_RANDOM did not use the full parameter range (#6902)
- Fix #6622: News message when GS constructs a town had empty company name
- Fix: [NewGRF] Action7 variable 0x85 had no bounds checks
- Fix #6875: Depot building cost did not include foundation build cost (#6883)
- Fix: Some pixels in ship autoreplace icon (sprite 106) were transparent
- Fix: Poor contrast in cargo dest flow legend window cargo labels
- Fix #6553: Make viewport button text unambiguous
- Fix: [OSX] Setting mouse-wheel to scroll the map does not disable pinch to zoom
- Fix #6969: Account for BOM when reading script files
- Fix #6898: Ability to use seeds above INT_MAX (#6936)
- Fix #6659: Bus stations could be demolished when not in demolish mode (#6815)
- Fix: One-way roads could be over-built by road stops regardless of road owner
- Fix: Use name of cargo instead of Passengers/Mail in town statistics (#6801)
- Fix: Prevent ships moving into docks after finishing (un)loading (#6791)
- Fix: Tractive effort was slightly too high as per NewGRF spec (#6785)
- Fix #6465: Add {NORMAL_FONT} and {MONO_FONT} control codes to GS strings (#6726)
- Fix: Four group action icons were misplaced and cropped
- Remove: PSP, WinCE support


## 1.8.x

### 1.8.0 (2018-04-01)

(None)


### 1.8.0-RC1 (2018-03-21)

- Feature: [GFX] Climate-specific Action5 extra airport sprites [FS#6664] (r27976)
- Feature: Draw vertical separators at tile distance in the train depot GUI (r27938, r27899)
- Feature: [Build] MSVC 2017 project file generator. Most noticeable, std:c++latest is enabled (r27920, r27919, r27918, r27917)
- Feature: [Build] Project file generator for kdevelop 4/5 [FS#6577] (r27897)
- Feature: Add option to close windows with right click [FS#4950] (r27826, r27825)
- Feature: Vehicle Group Info: Add profits and occupancy display to group vehicle list (r27822)
- Feature: Display aircraft type in vehicle preview/purchase/detail windows (r27802, r27799, r27797)
- Change: [NewGRF] Various performance improvements to resolving VA2 (r27989, r27985, r27984, r27983, r27982)
- Change: [NewGRF] Increase maximum allowed vehicle sprite size to reduce clipping of ships (r27987)
- Change: Check companies for bankruptcy before subtracting reoccuring monthly costs [FS#6679] (r27981)
- Change: [GFX] Replace the office building sprite on various toyland airports with a better fitting sprite [FS#6664] (r27977)
- Change: [GFX] The switch-toolbar icon contained pixels from the fire cycle. Replace the whole icon with a new version [FS#6654] (r27961)
- Change: Reword texts in industry view, when stockpiling is used (r27952)
- Change: Remove the gap between windows when positioning them after opening [FS#6568] (r27934, r27900)
- Change: [Build] Enable usage of static_assert for MSVC (r27916)
- Change: [Build] Preserve PKG_CONFIG_PATH and PKG_CONFIG_LIBDIR environment variables in config.cache file [FS#6614] (r27902)
- Change: Do not cancel headquarter construction and engine-preview-query when shift-clicking (r27889)
- Change: Parse extmidi command string for parameters to pass on (r27834)
- Change: Draw images in centre of buttons (r27829, r27821)
- Fix: Store the map variety setting in the savegame like the other mapgen settings, so restarting maps considers it [FS#6673] (r27978)
- Fix: Hair selection was missing one option [FS#6642] (r27975)
- Fix: Avoid tile operations outside map border when building lock [FS#6662] (r27973)
- Fix: Catenary sprites got mixed up for depots [FS#6670] (r27972)
- Fix: Make automatic window-positioning RTL-aware (r27934, r27900)
- Fix: Automatic window-positioning now uses GUI-scale/style dependent sizes/distances instead of fixed pixel values (r27934, r27900)
- Fix: [NewGRF] While executing random triggers, var 5F should include the new triggers (r27928)
- Fix: [NewGRF] Reset used random triggers only after all A123 chains have been resolved, so that all RA2 in all chains can test the shared triggers (r27928)
- Fix: [NewGRF] Industry random triggers are stored per tile, even when randomising the shared random bits of the parent industry (r27928)
- Fix: [NPF] Reserved track bits were not accounted for when trying to find any safe position (r27912)
- Fix: Do not modify argv[0] [FS#6575] (r27886)
- Fix: Do not search directories when opening ini files as we already have their full path [FS#6421] (r27816)
- Fix: Road tunnel/bridge heads have no trackbits wrt. catenary drawing (r27812)


## 1.7.x

### 1.7.2 (2017-12-24)

(None)


### 1.7.2-RC1 (2017-12-11)

- Change: When train depots have a horizontal scrollbar, allow scrolling 1 tile beyond the longest train, so you can actually attach a wagon at the end (r27937)
- Fix: When moving wagons in the depot, the drag highlight did not exactly match the length of the dragged wagon chain (r27936)
- Fix: [Win32] Right mouse scrolling didn't work properly with the Windows 10 Fall Creators Update [FS#6629] (r27935)
- Fix: Forest, candyfloss forest and battery farm skipped the first animation frame [FS#6639] (r27932)
- Fix: Glyphs in range U+0020 to U+00FF may only be defined in orig_extra.grf, not in openttd.grf [FS#6620] (r27915)
- Fix: 'unban' console command was not handling IPv6 addresses properly (r27914, r27913)
- Fix: Keep the 'link' between industry chain and smallmap windows whenever possible [FS#6585] (r27905)
- Fix: When the last vehicle is removed from a shared orders group, hide the 'Stop sharing' button in the vehicle orders window [FS#6593] (r27904)
- Fix: Tooltip of 'increase service interval' said 'decrease' [FS#6606] (r27895)
- Fix: Console command parser passed invalid strings to the debug output, if command lines had many parameters [FS#6576] (r27884, r27883)


### 1.7.1 (2017-06-13)

(None)


### 1.7.1-RC1 (2017-05-04)

- Fix: Add missing game script event for ships arriving at a station [FS#6560] (r27859, r27858)
- Fix: StringID truncation to 16 bits broke string remapping test [FS#6555] (r27851)
- Fix: Infinite loop in pathfinder when checking safe waiting position from a waypoint [FS#5926] (r27846)
- Fix: [YAPF] Consider depot as destination before reversing path and applying penalty (r27843)
- Fix: Don't consider locks or ship depots as clear water when placing industries (r27841)
- Fix: Small news window's fake caption was not sized to fit its text (r27838)
- Fix: Black remap did nothing in 8bpp-simple blitter (r27837)
- Fix: Misaligned resize icon due to widget bounds being inclusive (r27831)
- Fix: Update viewport sign dimensions when changing GUI zoom level (r27827, r27819)
- Fix: Vehicle viewport is not user scrollable so flag window as such (r27823)
- Fix: Allow dropdown to be drawn above origin widget even with scrollbar (r27820)
- Fix: 32bpp-anim blitters assumed that pitch and width of the screen were equal [FS#6545] (r27796)
- Fix: Chat text background overflowed due to missing padding [FS#6526] (r27794)
- Fix: Failed to load lzo compressed savegames sometimes [FS#6450] (r27793)
- Fix: [Win32] Mark OpenTTD as DPI-aware to avoid OS window scaling that breaks mouse input [FS#6366] (r27791, r27790)
- Fix: [NewGRF] Get vehicle load amount after executing new cargo trigger [FS#6536] (r27788)
- Fix: AI configuration changed incorrect parameter when some parameters are hidden [FS#6479] (r27787, r27786)
- Fix: Buoys not always drawn after being placed depending on zoom level [FS#6508] (r27785)
- Fix: Allow rail conversion even if ship is on tile [FS#6505] (r27784)


### 1.7.0 (2017-04-01)

(None)


### 1.7.0-RC1 (2017-03-11)

- Feature: [NewGRF] Extend the DCxx range to D800-DFFF (r27769)
- Feature: [NewGRF, script] Increase the maximum number of GameScript texts to 64k, and NewGRF texts to 512k (r27758)
- Feature: [NewGRF] CB 37 results 0x0401 and 0x0800-0BFF for improved control of display of input cargos in the industry GUI (r27751)
- Feature: Sprites missing in outdated basesets are now provided by openttd.grf (r27732, r27731, r27730)
- Feature: [NewGRF] String command 9A 1E to print the name of a cargo type (r27707, r27706)
- Feature: [Debug] Assign descriptive names to threads [FS#6471] (r27674, r27673, r27670)
- Feature: [NewGRF] Allow composing vehicles from multiple sprites (r27668)
- Change: Enable realistic train and road vehicle acceleration by default (r27760)
- Change: Hide the drive-in stops from the tram station picker (r27734)
- Change: Do not count static NewGRF when checking for the maximum number of NewGRFs in a game (r27729)
- Change: Limit waypoint area by maximum station spread during dragging (r27710)
- Change: [Build] Re-enable Wnarrowing for gcc 4.9+ [FS#6532] (r27709, r27703)
- Change: List railtype of rail tiles explicitly in the tile info window (r27686)
- Change: Re-arrange the autoreplace GUI for trains, and do not filter it by railtype by default (r27683)
- Change: Various performance improvements to CargoDist and LinkGraphs (r27682, r27681, r27614, r27613, r27612, r27611)
- Change: Improve randomisation of rough land appearance (r27657)
- Change: [Build] Enable C++11 for clang 3.3 (r27654)
- Fix: Insufficient thread synchronisation when switching blitters lead to crashes [FS#6510] (r27775)
- Fix: Enabling palette animation for 32bpp blitters while paused skipped initialisation of the palette and resulted in black windows [FS#5889] (r27774)
- Fix: Intro games other than the traditional nightly one would cause townname NewGRFs to not get activated in the game options [FS#5819] (r27772)
- Fix: Some variables were not reset between loading old savegames, which made loading them fail [FS#6540] (r27770)
- Fix: Removing secondary roadtypes from bridges was factor 2 too cheap [FS#6538] (r27746)
- Fix: Extra viewports did not center on the selected tile [FS#6537] (r27743)
- Fix: [Build] Building on newer OSX versions with newer SDKs [FS#6295, FS#6502] (r27727, r27675)
- Fix: Improve error message when trying to build rail track over a depot  (r27726)
- Fix: Rescanning NewGRF in-game could break the loaded NewGRF, if very many NewGRF were in use (r27721)
- Fix: Text could overflow various GUI elements [FS#6527] (r27713)
- Fix: Memory leak when reloading NewGRF (r27690, r27688, r27687)
- Fix: When removing objects of bankrupt companies the tiles may revert to canal. In that case also check the ownership of the canal [FS#6511] (r27656)
- Fix: Make the console file commands operate independent of the save/load GUI (r27645)
- Fix: When dragging vehicles in group or depot GUI, draw the complete articulated vehicle (r27632)
- Fix: When dragging multiple vehicles in the depot, make the destination gap as long as the chain instead of just considering the first vehicle (r27629)
- Fix: [Build] Change the GCC version detection so that it works with two-digit and truncated versions [FS#6487] (r27623, r27616)
- Fix: Do not hide filtered and highlighted industries by overlapping tiles in the zoomed-out smallmap (r27622, r27621, r27620)
- Fix: [Script] Kill scripts, when a non-suspendable valuator call takes way too long [FS#6473] (r27594)


## 1.6.x

### 1.6.1 (2016-07-01)

- Fix: Compilation and optimisation issues with GCC6 (r27606, r27605, r27595)
- Fix: Compilation with --disable-network [FS#6481] (r27602)
- Fix: [NewGRF] shift-and-add-divide/modulo varadjusts use signed division/modulo (r27600)
- Fix: Company 0 could accept engine previews before they were offered (r27598)


### 1.6.1-RC1 (2016-06-01)

- Feature: Mexican Spanish (r27564, r27553, r27552)
- Change: Performance improvement for dedicated servers by skipping drawing calls earlier in the process [FS#6402] (r27579)
- Fix: Automatic servicing of road vehicles compared path finder costs with tile distances, thus vehicles went to depots which were factor 100 too far away [FS#6410] (r27586)
- Fix: Enforce a non-zero load amount for all vehicles, so that vehicles can process their cargo reservations [FS#6437] (r27585, r27584)
- Fix: Do not decrease the column width of depot windows when vehicles with high unitnumbers leave [FS#6415] (r27583)
- Fix: Button size computation in script configuration window [FS#6461] (r27581)
- Fix: [NewGRF] Set date of last service on construction also for wagons and articulated parts [FS#6395] (r27580)
- Fix: Vehicles could not be hidden from the purchase list when they were in exclusive preview [FS#6454] (r27578)
- Fix: Dock and roadstop picker, client list and town authority window did not auto-resize according to their content when they were positioned at the bottom of the screen [FS#6386] (r27577)
- Fix: Various incorrect but uncritical size computations in the content client [FS#6449] (r27576, r27570)
- Fix: Memory leak when disabling palette animation [FS#6404] (r27575)
- Fix: [NewGRF] The house id as returned by house variable 66 was incorrect when querying neighboured tiles [FS#6432] (r27574)
- Fix: [Build] Compilation failure with gcc 6.1 due to headers included after safeguards.h [FS#6467] (r27573)
- Fix: Convenience savegame bump to distinguish 1.6 savegames from 1.5 savegames [FS#6442] (r27572)
- Fix: [Build] Force sorting to be locale independent, so files are always ordered the same and by that token better diff-able (r27562, r27558)
- Fix: Typos in comments and string (r27561, r27560)
- Fix: [Build] bashism that caused different CFLAGS with bash vs dash (r27557)
- Fix: Use a more appropriate sound effect for convert-rail (r27547)
- Fix: Remove SetFill from vehicle GUI buttons, so that the viewport is resized instead of them in case of long window titles (r27546)
- Fix: [Script] Generation of API wrappers (r27545, r27544, r27543)
- Fix: [Windows] ICU got disabled for Windows builds, breaking RTL support [FS#6427] (r27542)
- Fix: [NewGRF] Station spritelayouts did not accept the var10 flag for the palette [FS#6435] (r27534)


### 1.6.0 (2016-04-01)

(None)


### 1.6.0-RC1 (2016-03-01)

- Feature: [NewGRF] Allow custom sound IDs in RV property 0x12, ship property 0x10 and aircraft property 0x12 (r27507)
- Feature: When viewing online content of a particular type, hide content of other types unless they have been (auto)selected for download (r27469, r27468, r27444)
- Feature: [NewGRF] Move sprite 8 positions in sprite aligner with ctrl+click [FS#6241] (r27451)
- Feature: Lower the sell-vehicle and sell-chain buttons in the train depot GUI while dragging a vehicle over it [FS#6391] (r27450, r27446)
- Feature: Make the object placement GUI an independent window (r27438, r27397, r27346)
- Feature: [Build] Project files and compilation with MSVC2015 (r27385, r27382, r27381, r27380, r27379)
- Feature: [NewGRF] Allow railtype NewGRF to define separate sprites for the fences on either track side [FS#6315] (r27354, r27343)
- Feature: [NewGRF] Increase the maximum amount of industry types to 128 per NewGRF and 240 in total (r27279)
- Feature: Make Ctrl+Remove-Roadstop also remove the road, just like for rail stations [FS#6252] (r27251)
- Change: [NewGRF] Allow static NewGRF to enable the second rocky tile set (r27497)
- Change: Round loading percentage in loading indicators and conditional orders towards 50%, so that 0% and 100% mean completely empty or full (r27426)
- Change: [Build] Rework the configure system to make more use of pkg-config (r27377:r27366, r27361, r27360)
- Change: Enable YAPF cache debugging with desync debug level 2 (r27332)
- Change: [strgen] Default plural subparameter position for CARGO_xxx string control codes is subparameter 1 (r27295)
- Change: [NewGRF] Translate industry variable A6 (r27267)
- Change: Do not consider cargo that is already being loaded as waiting cargo wrt. the station rating [FS#6165] (r27256)
- Change: Tune down terrain generation to reduce amount of long slopes (r27230)
- Change: Generate more detailed curves at the coast (r27229)
- Change: Slightly more water in the non-custom sea levels (r27228)
- Change: Be more lenient about road stop removal when at least one stop could be removed [FS#6262] (r27225)
- Fix: [Win32] Stdin/out/err need to be re-assigned differently if the runtime lib of MSVC2015 is used (r27481)
- Fix: [Haiku] On Haiku use the appropriate system variable to obtain the include dir [FS#6401] (r27472)


## 1.5.x

### 1.5.3 (2015-12-01)

(None)


### 1.5.3-RC1 (2015-11-01)

- Fix: When selecting a refit cargo for orders, do not check whether the vehicle is in a depot or station, and do not ask whether the vehicle currently allows station-refitting. Also hide the refit cost for orders, it is not predictable (r27428)
- Fix: Use the NewGRF railtype sorting order in the infrastructure window (r27427)
- Fix: Crash when switching to or taking over companies, when an order window of a vehicle of the new company was opened. Now close those windows [FS#5842] (r27425)
- Fix: Towns did not connect roads to existing roads, unless they had only a single roadbit. Otoh, towns also tried to connect to single roadbit tiles such as tunnels and depots, even though they were not connectable in the direction of interest [FS#6374] (r27424)
- Fix: When towns expanded single-bit roadtiles using a grid-layout, they used the layout position of the neighbouring tile (r27423)
- Fix: Aircraft picked the wrong airport entry point, if airports were rotated by 180 degree [FS#6341] (r27422)
- Fix: Consider text and icon sizes when drawing the client list [FS#6265] (r27421)
- Fix: GrowTownAtRoad sometimes returned false, even when a house was built [FS#6362] (r27420)
- Fix: CmdSellRailWagon did not revert all actions properly when no orderlist could be allocated [FS#6369] (r27419)
- Fix: Desync due to incorrect storage of segments with different railtype in the YAPF cache [FS#6329] [FS#6379] (r27418)
- Fix: When a dedicated server was paused with no clients, the master server advertisement interval was slowed, causing deadvertisement of the server [FS#6368] (r27400)
- Fix: [Makefile] Game script directory and compat*.nut were never installed on *nix (r27399)
- Fix: There are two different availability conditions for fdatasync in the manpage. Use them both, since at least on some MinGW versions one is not enough (r27389)
- Fix: win32 sound driver failed to report errors (r27383)
- Fix: Clickareas in settings tree were misaligned when the filter warning was displayed, if the setting height was defined by the icons instead of the font [FS#6358] (r27366)
- Fix: Center settings filter warning also vertically, and also in case of multiple lines (r27365)


### 1.5.2 (2015-09-01)

(None)


### 1.5.2-RC1 (2015-08-01)

- Change: Auto-complete partial roads when building level-crossings [FS#6283] (r27309)
- Fix: Do not rerandomise the town name when only cost-estimating the founding [FS#6332] (r27341)
- Fix: Make variety distribution not assume that sea level is at height 0.2 / 3 * TGPGetMaxHeight() [FS#6335] (r27331, r27330, r27329, r27328)
- Fix: Remove corner-case optimisation for line drawing, which failed for dashed lines  (r27324)
- Fix: Clipping of inclined lines did not account for the 'horizontal width' being bigger than the 'real width' (r27323, r27322)
- Fix: Incorrect owner assignment when adding/removing road/tram to/from bridges [FS#6317] (r27313, r27312)
- Fix: Mark infrastructure window dirty in more cases (r27311)
- Fix: Prevent breaking of tram-reversal points by adding more road pieces [FS#6283] (r27308)
- Fix: Error message window with manager face failed with GUI zoom [FS#6259] (r27307)
- Fix: Account for road-bridges and drive-through-stops in CanFollowRoad [FS#6320] (r27306, r27305)
- Fix: Password window layout with GUI zoom [FS#6321] (r27304, r27303)
- Fix: Speed-only timetables got assigned times in stations [FS#6313] (r27302, r27301)
- Fix: Enforce the company's default service intervals when purchasing another company [FS#6254] (r27282, r27281)
- Fix: Cloning/autoreplace/autorenew did not copy custom service intervals (r27280)


### 1.5.1 (2015-06-01)

(None)


### 1.5.1-RC1 (2015-05-08)

- Fix: Do not consider road junctions with trivial dead ends as branch points during town growth [FS#6245] (r27260, r27259, r27244)
- Fix: ScriptList::RemoveList failed to remove a list from itself [FS#6287] (r27258)
- Fix: Combined button+dropdown widgets in order and autoreplace GUI had incorrect hitbox when using GUI zoom [FS#6270] (r27255)
- Fix: When building a lock on DC_AUTO-removable water-based objects, the water class was always set to canal [FS#6264] (r27254)
- Fix: When crossing tram tracks with railroads, cost of extra roads was not being counted [FS#6282] (r27253)
- Fix: Invalid infrastructure counting when crossing tram tracks with railroads [FS#6281] (r27252)
- Fix: Broken error message in configure [FS#6286] (r27250)
- Fix: In some cases town growth failure was considered as success [FS#6240] (r27249, r27247)
- Fix: Town labels on smallmap and zoomed-out viewports were not centered [FS#6257] (r27248)
- Fix: Removing a rail waypoint used the remove-rail-station cost [FS#6251] (r27245)
- Fix: Duplicate frees due to pool item classes not having copy constructors [FS#6285] (r27243)
- Fix: Crash when no AIs were installed due to improper handling of non-ASCII characters by the string pointer lexer [FS#6272] (r27233)
- Fix: Compilation on DragonflyBSD [FS#6274] (r27224, r27223)
- Fix: Use the current maximum speed as limited by bridges, orders etc. for all vehicle types alike when considering increased smoke emissions of vehicles [FS#6278] (r27222)
- Fix: Multi-value keys in the desktop entry shall end with a trailing separator (r27221)
- Fix: Draw path reservation on the whole bridge, not only on the bridge heads (r27209)
- Fix: Draw correct overlay sprites for path reservations on bridges and tunnels (r27208)


### 1.5.0 (2015-04-01)

- Fix: [NewGRF] Add Misc. GRF Feature Flag 6 to enable the second rocky tile set [FS#6260] (r27200)


### 1.5.0-RC1 (2015-03-18)

- Feature: [NewGRF] Display relative offset changes in the sprite aligner [FS#6236] (r27174)
- Fix: Original road vehicle acceleration crashed for vehicles taking over [FS#6255] (r27190)
- Fix: GCC 5 compilation (r27185, r27183)
- Fix: Data race due to lazy initialisation of objects [FS#5969] (r27178)
- Fix: Compilation with MinGW64 (r27176)
- Fix: Use the regular clipping functions in the sprite aligner instead of some magic [FS#6237] (r27173)
- Fix: Windows randomly drops SetCursorPos calls, breaking the RMB-scrolling [FS#6238] (r27172)


### 1.5.0-beta2 (2015-02-24)

- Feature: [NoGo] Game scripts can point to a location, station, industry, or town when publishing news (r27164)
- Feature: Allow changing max heightlevel in scenario editor (r27151)
- Feature: Make use of both rocky tile sets from the base graphics (r27117)
- Change: Scale (non-custom) default window sizes according to GUI zoom (r27147)
- Change: Make statusbar and chat-entry window use the same width as the toolbar (r27146)
- Change: The chatbox-width setting now uses percent of screen width instead of pixels (r27144)
- Change: [NewGRF] Interpret negative positions in industry layouts depending on GRF version (r27138)
- Fix: [SDL, Windows] Right-mouse-button scrolling scrolled/jumped too far, when OpenTTD lagged during mouse event processing (r27167)
- Fix: Toolbars were not invalidated when changing max-vehicles settings [FS#6204] (r27163)
- Fix: Tile selection was drawn outside of map in some cases [FS#6208] (r27162)
- Fix: Reimplement the viewport drawing algorithm [FS#6156] [FS#6206] (r27161)
- Fix: Issues with smallmap and viewport coordinates and transformations (r27160, r27159, r27158)
- Fix: Mark bridge middle tiles dirty when building/removing/changing bridges (r27157)
- Fix: Rounding and unit-conversion inconsistencies in calls to MarkAllViewportsDirty (r27148)
- Fix: Oilrig empty-tile checks were incorrect due to wrong TileIndexDiff->TileIndexDiffC conversion (r27137)
- Fix: Misalignment in generate world window in case of small fonts (r27135)
- Fix: Dragging of free wagons in depot failed with GUI zoom (r27133)
- Fix: Reduce memory footprint of map array by shuffling its members [FS#6218] (r27132, r27126)
- Fix: Dropdown- and tooltip-windows should not steal the focus (r27131)
- Fix: [NewGRF] Action 7/9 condition 0A failed for present, but disabled, NewGRF (r27119)
- Fix: Road vehicles could not reverse to be sent to depots when the following tile has the right type to run on, but could not be entered [FS#6183] (r27107)
- Fix: Use the actual max speed of the vehicle in front when determining if a RV can overtake [FS#6176] (r27106)
- Fix: grow_counter was not properly bounded by growth_rate, but by some other value used to calculate growth_rate [FS#6195] (r27105)
- Fix: [Script] Support 64 bits integers in ScriptLists [FS#6194] (r27104)
- Fix: [Script] Money values would end up wrong in strings when outside the bounds of a 32 bits integer [FS#6194] (r27102)


### 1.5.0-beta1 (2014-12-24)

- Feature: Support .txt.gz and -txt.xz changelog, readme and license files in basesets, NewGRFs, etc (r27035, r27034)
- Feature: More height levels [FS#4126] (r27010)
- Feature: Latin translation (r26993)
- Feature: Add option to choose normal, double or quad-size interface (r26990)
- Feature: [Script] Swap method for script lists (r26894)
- Feature: [Script] ScriptStationList_Cargo for sorting cargo by from and via (r26893)
- Feature: [Script] API for retrieving planned flow (r26892)
- Feature: [CargoDist] Predict links for station-autorefitting vehicles (r26889)
- Feature: Setting for limiting the height of bridges (r26882)
- Feature: Make aircraft ascend/descend when they are too close to the ground or too far away (r26866)
- Feature: Allow hiding of non-interesting engines in the GUI (r26805, r26804)
- Feature: Vehicle sorting in autoreplace GUI [FS#1640] (r26800)
- Feature: [NewGRF] Advanced visual effects with multiple effect sprites independent of spawning model (r26988, r26747)
- Feature: Warn about missing industries after generating a map (r26729)
- Feature: Upgrade currently active NewGRFs to newest installed version (r26613)
- Feature: Save and load grfid and md5sum of NewGRFs in config file (r26611)
- Feature: Select an editable preset name for saving (r26610)
- Feature: Cancel cargo delivery from industries/houses to stations after about 21 months of not having picked up any of the cargo (r26582)
- Feature: Give a warning when a plane's orders tell it to use a runway which is too short for it [FS#6009] (r26566)
- Feature: [Script] Extended API for CargoDist (r26557)
- Feature: Show measured order times in timetable GUI also when not timetabled (r26550)
- Feature: Prompt for confirmation when deleting a vehicle group (r26455)
- Feature: Hierarchical vehicle subgroups (r26450)
- Feature: Allow more sound sleep for dedicated servers when there's nothing to do and nobody paying attention (r26449)
- Feature: [NewGRF] Add vehicle modflag 1 (unloading in progress) (r26430)
- Change: Improvements to the man page (r27091, r27012)
- Change: Allow to set the granularity of the tooltip hover time in milliseconds instead of seconds. New default value is 250ms (r26815)
- Change: Follow SI recommendation about spaces between numbers and units [FS#6086] (r26733)
- Change: [CargoDist] Save locations instead of distances in link graphs to reduce size (r26646)
- Change: [Squirrel] Make the internal integer for scripts always 64 bits, so scripts behave the same on 32 and 64 bit architectures and money can be represented properly (r26585, r26584)
- Change: Reshuffle advanced settings tree (r26614, r26536)
- Change: Add backend-independent config-file setting to disable 8bpp video modes, and disable 8bpp by default (r26522)
- Fix: [OS/2] Compile again [FS#6186] (r27092)
- Fix: Compilation with freetype2 version 2.5.4 and newer [FS#6185] (r27079)
- Fix: Variable 47 used the carge translation table of the wrong GRF in case of callback 1D [FS#6182] (r27075)
- Fix: Some lists did not use natural string sorting [FS#6172] (r27063)
- Fix: Mercurial version detection failed if personal presets were configured (r27059)
- Fix: [OSX] Don't require double-press from non-dead console hotkeys [FS#5812] (r27046)
- Fix: Crash when having the vehicle list opened from a buoy or oil rig when the buoy/oil rig is removed (r27030)
- Fix: Unit number was not always fully shown in depots [FS#6102] (r27014)
- Fix: [CargoDist] Reserve cargo only after unloading finished or if the vehicle has the desired cargo already [FS#6110] (r26918)
- Fix: [Squirrel] Loading a value saved as boolean caused it to be of type integer instead of boolean (r26785)
- Fix: [Squirrel] Harden string handling (r26777)
- Fix: [OSX] Implement more of the text editing API to prevent crashes and improve IME support [FS#5972] (r26758)
- Fix: Incorrect saving of order backups [FS#6066] (r26700)
- Fix: Ordering a vehicle to a competitor's rail waypoint displayed an error message. Ignore the click as is done for the other order types to competitor's stuff [FS#6059] (r26692)
- Fix: [Script] Loading/parsing of info .nuts was done in the same VM, causing e.g. constants to break the loading of info of other scripts [FS#5973] (r26617)
- Fix: [CargoDist] Improve estimation of link capacitites (r26549)
- Remove: A bunch of archaic settings from the GUI (r26528, r26526, r26525)


## 1.4.x

### 1.4.4 (2014-10-21)

(None)


### 1.4.4-RC1 (2014-10-08)

- Fix: Image widgets stored 32bit SpriteID in uint16 (r26971)
- Fix: Owner of road depot road types were not properly changed upon bankruptcy [FS#6126] (r26955)
- Fix: Compilation on HAIKU (r26922)
- Fix: Crash when enabling 'Full animation' if multiplayer chat text is on screen [FS#6096] (r26919)
- Fix: Height computation of game script text in town GUI did not consider margins [FS#6119] (r26859)
- Fix: [Squirrel] Debian lintian issues (r26853)
- Fix: Compilation of strgen on various platforms like Solaris (r26850)
- Fix: Better display of refit information for articulated vehicles [FS#6113] (r26849, r26848)
- Fix: Do not assign a next hop when returning cargo [FS#6110] (r26847)
- Fix: The ok-button in the OSK for the signs list should just close the OSK [FS#6116] (r26827)


### 1.4.3 (2014-09-23)

(None)


### 1.4.3-RC2 (2014-09-14)

- Fix: Crashes on joining a server with pending order backups [FS#6112] (r26819)
- Fix: Crashes on start due to dereferencing the -1 index of the file names array of music files (r26809)


### 1.4.3-RC1 (2014-09-07)

- Fix: TC_NO_SHADE did not work for 32bpp text rendering (r26792)
- Fix: Loading a game with order backups leaked Orders and left unreachable items in the pool (r26787)
- Fix: Buffer overrun in SQCompiler::Error (r26764)
- Fix: Desync due to not always properly restoring game state from the savegame (r26753)
- Fix: [Script] Crashes and infinite loops when using lists in item-descending order [FS#6085] (r26744)
- Fix: Incorrect CFLAGS when enabling gprof profiling (r26737, r26735)
- Fix: Do not reset the last selected airport or layout, unless it is really necessary [FS#6083] (r26732)
- Fix: Use the normal search path to look for xdg-open at Unix [FS#6077] (r26724)
- Fix: Properly check for cargo acceptance of houses [FS#5997] (r26723)


### 1.4.2 (2014-08-16)

(None)


### 1.4.2-RC2 (2014-08-03)

- Change: Use awk instead of trying to convince cpp to preprocess nfo files (r26708)
- Fix: CMD_CLEAR_ORDER_BACKUP should not be suppressed by pause modes (r26716)
- Fix: [NewGRF] Parameters to SCC_NEWGRF_PUSH_WORD and SCC_NEWGRF_UNPRINT were not skipped during drawing (r26713)
- Fix: [OSX] Compilation fails with some lzo2 versions, if __LP64__ is defined to 0 instead of checking whether it is defined [FS#6069] (r26709)
- Fix: Wrong breakdown sound was played for ships [FS#6015] (r26706)
- Fix: Integer overflows in acceleration code causing either too low acceleration or too high acceleration [FS#6067] (r26702)
- Fix: Discard incorrectly saved order backups when clients join [FS#6066] (r26700)
- Fix: Do not crash when trying to show an error about vehicle in a NewGRF and the NewGRF was not loaded at all (r26699)
- Fix: Slovak uses space as group separator in numbers [FS#6064] (r26695)
- Fix: Tighten parameter bound checks on GSCargoMonitor functions, and return -1 on out-of-bound parameters (r26685)


### 1.4.2-RC1 (2014-07-03)

- Fix: CargoPacket::SourceStation() returns a StationID (r26660)
- Fix: Days in dates are not represented by ordinal numbers in all languages [FS#6047] (r26657)
- Fix: Production cheat cannot be allowed to be active in multiplayer for desync reasons, even when activated in singleplayer previously [FS#6044] (r26656)
- Fix: Make sure an 'abs' is used that supports int64 when using 'abs' on those variables (r26651)
- Fix: Support save/load chunk lengths of up to (1 << 32) - 1 [FS#6041] (r26650)
- Fix: Incorrect usage of string commands in the base language [FS#6037] (r26642, r26640, r26639, r26632)
- Fix: Segmentation fault when encountering a .obg/.obs/.obm with empty string/zero length MD5 checksums [FS#6038] (r26637)
- Fix: The 'Load' button was not properly enabled/disabled for old savegames without NewGRF information (r26634)
- Fix: If the video driver fails to supply a list of resolutions, display an error message [FS#6012] (r26629)


### 1.4.1 (2014-06-02)

- Fix: First send packages about new company, then clients joining it to admin port [FS#6025] (r26616)


### 1.4.1-RC2 (2014-05-18)

- Fix: Save/load issues on big endian machines (r26593, r26590, r26589)
- Fix: Consider multiheaded trains in station refits [FS#5995] (r26586)
- Fix: Game script could be changed in game by double clicking [FS#5974] (r26583)
- Fix: Transfer stations also should have a cargo rating [FS#5989] (r26581, r26580)
- Fix: [Network] AIs would not reset certain network state information upon creation of their company [FS#6003] (r26578, r26576)
- Fix: [Network] Client of non-dedicated server was not correctly put into the first company for all state variables [FS#6001] (r26577)


### 1.4.1-RC1 (2014-05-04)

- Change: Remove demand calculation based on tiles (r26484)
- Change: Use pkg-config for libpng as well (r26435, r26433, r26432)
- Change: Use better distance metric for link graph [FS#5941] (r26411)
- Fix: [Windows] Crash when the operating system performs the "paint" callback during window creation [FS#5994] (r26539, r26538)
- Fix: OpenBSD compilation [FS#5992] (r26523)
- Fix: prevent from ever reading huge (or negative) amounts of data in strgen (r26521)
- Fix: Severity rating of dedicated server messages during world generation (r26518)
- Fix: Buffer overruns in handling of symbolic links inside tars (r26514)
- Fix: Incorrect usage of strecpy (r26505, r26485)
- Fix: Reading console input on dedicated server relied on unspecified behaviour (r26496)
- Fix: Allow single-vehicle consists to station-refit in a meaningful way (r26483)
- Fix: Prevent comparing to NULL when strndup could not allocate memory (r26476)
- Fix: Potentially undefined shifts in NewGRF code (r26475)
- Fix: Make sure there is no uninitialised sprite data (r26473)
- Fix: Draw text shadow for ellipses (r26467)
- Fix: Add special handling for PALETTE_CRASH to work for non-8bpp-mapped sprites (r26463)
- Fix: Avoid division by 0 when scaling flow values [FS#5970] (r26448)
- Fix: Draw links to match _settings_game.vehicle.road_side [FS#5961] (r26445)
- Fix: Load button for heightmap list was missing [FS#5953] (r26428)
- Fix: Do not crash when supplying an invalid filename without extension to cmd parameter -q (r26423)
- Fix: Some road constructions used the rail sound effect [FS#5946] (r26422)
- Fix: Goal GUI failed to shade [FS#5948] (r26420)
- Fix: Shares button state was not appropriately updated when switching setting or company [FS#5947] (r26416)


### 1.4.0 (2014-04-01)

(None)


### 1.4.0-RC1 (2014-03-18)

- Feature: [Script] APIs to get cargo waiting from/via other station (r26396)
- Fix: Do not explain "symmetric" cargodist mode when the setting does not allow it [FS#5939] (r26394)
- Fix: Update distances between link graph nodes when station sign is moved (r26393)
- Fix: No need to call OnFocus twice [FS#5933] (r26392)
- Fix: Select a specific font size when freetype fails to select one automatically [FS#5885] (r26389)
- Fix: Return correct values from ICU iterators in case of leading or trailing whitespace [FS#5924] (r26384)
- Fix: All goal commands invalidated the goal list of company 0 [FS#5932] (r26382)


### 1.4.0-beta5 (2014-02-25)

- Feature: Warn the user about empty setting search results, and about missing setting search results due to filtering (r26322, r26321)
- Feature: [NewGRF] Extend object variable 0x60 to also return the view [FS#5696] (r26316)
- Feature: Allow map sizes up to 4096x4096 (r26319)
- Feature: [NoGo] Allow GS to hide story page date (r26307)
- Feature: [NoGo] More story APIs: RemovePageElement, GetCompany, GetDate, SetDate (r26306)
- Feature: [NoGo] ScriptStoryPageElementList() - a list of all story page elements for a given page (r26305)
- Feature: [NoGo] ScriptStoryPageList() - a list of all story pages (r26303)
- Change: improve the performance of map generation (r26313, r26312, r26311, r26310, r26309, r26308)
- Fix: Station sizes > 8 were always allowed [FS#5929] (r26375)
- Fix: [NewGRF] Mixed up callback mask flags in station inspect window [FS#5928] (r26374)
- Fix: Calling DoCommandP during the gameloop cleared pending persistent storage changes [FS#5831] (r26371)
- Fix: [Windows] Use a separate event to indicate that the drawing thread has finished initialising, preventing potential deadlocks (r26367)
- Fix: [Windows] Protect the whole video driver from concurrent access (r26366)
- Fix: [Windows] Do not draw the cursor when its sprite is not ready and set _screen.dst_ptr immediately when the buffer changes [FS#5867] (r26365)
- Fix: Writing out of the bounds of the rail type map [FS#5892] (r26364)
- Fix: Reset the default window size icon size just like all the other cached icon sizes [FS#5906] (r26362)
- Fix: ClientSizeChanged is only called via WndProcGdi which already has the mutex [FS#5922] (r26360)
- Fix: Some order options do not combine with others, e.g. go via + full load [FS#5845] (r26357)
- Fix: Protect all VideoDriver_SDL methods with the (now recursive) _draw_mutex (r26351)
- Fix: Make sure link graph jobs can delete themselves after SLA_NULL [FS#5898] (r26347)
- Fix: Call Layouter::ReduceLineCache from GenerateTownName in all cases to keep cache size in check [FS#5870] (r26346)
- Fix: Rewrite SmallStack so that it does not use a pool and is re-entrant (r26343)
- Fix: Reroute cargo when automatic distribution is switched off [FS#5902] (r26341)
- Fix: Do not redraw the link graph overlay if it is empty [FS#5908] (r26338)
- Fix: Some inconsistencies regarding link graph (job) IDs (r26331)
- Fix: The case of rerouting cargo from one VehicleCargoList to another (r26330)
- Fix: Take care of next_station when reassigning from MTA_DELIVER to MTA_TRANSFER [FS#5901] (r26327)
- Fix: when autosaving the message about a save already happening could be shown, even though the code's intention was to not show it [FS#5871] (r26326)
- Fix: Check whether NewGRF change vehicle capacity when they are not supposed to, and truncate cargo appropriately if they are allowed to [FS#5897] (r26317)
- Fix: The giant-screenshot confirmation window only triggered for ridiculously big screenshots, not for ludicrously big ones [FS#5899] (r26314)


### 1.4.0-beta4 (2014-02-06)

- Change: [NewGRF] Make vehicle variable 61 return 'not available' instead of zero when using it in invalid callback contexts (r26294)
- Feature: Display speed limit also for road bridges in the TileInfo window [FS#5849] (r26277)
- Fix: [NoGo] Invalid DoCommand return callback for method returning bool (r26298)
- Fix: Correctly identify opposite ends of bridges and tunnels when converting rails [FS#5866, FS#5888] (r26291)
- Fix: Prevent infinite recursion also in RefreshLinks [FS#5878] (r26283)
- Fix: [NoAI] Some RemoveRail methods required to set a valid railtype, though it was not used anyway. Remove the need to set one [FS#5853] (r26279)
- Fix: Do not spawn link graph jobs for link graphs with only one node [FS#5874] (r26276)
- Fix: [NewGRF] If NewGRF provided the same station name for different industry types, stations would end up with same name. So also consider the provided name, not only the industry type (r26275)


### 1.4.0-beta3 (2014-01-21)

- Feature: Several small performance improvements with the SSE blitters (r26260, r26259, r26256, r26255, r26254)
- Feature: [NewGRF] Add StringCodes 9A 1B, 9A 1C and 9A 1D to display amounts of cargo (r26244)
- Fix: Do not run into infinite recursion when getting next stopping station [FS#5865] (r26267, r26263)
- Fix: Update smallmap overlay if player joins different company and make sure company masks are valid [FS#5860] (r26266)
- Fix: Do not rebuild the link graph overlay cache twice in a row (r26265)
- Fix: Custom currency was reset on game start (r26262)
- Fix: Possible out of bounds reads with the SSE blitters [FS#5854, FS#5855] (r26247)
- Fix: Do not over reserve after autorefit, but do reserve mail for aircraft (r26236)
- Fix: Decimal and digit separators were swapped for Korean language (r26235)


### 1.4.0-beta2 (2014-01-07)

- Feature: Blitter autoselection is now based on full animation state, so a non-animated specialised blitter will generally be chosen when animation is turned off (r26217)
- Feature: Specialised animated SSE4 blitter, and non-animated SSE4.1, SSSE3 and SSE2 blitters, improving the blitting significantly in many situations (r26214, r26213, r26212, r26211)
- Feature: Specialised SSE 4.1 sprite sorter, improving the sorting performance significantly (r26205)
- Fix: Validate everything from ini, obg, obs, obs, ... files [FS#5829] (r26206)
- Fix: Allow refitting at station if cargo has already been reserved (r26187)
- Fix: Visual effects did not work for articulated RV parts (r26180)


### 1.4.0-beta1 (2013-12-24)

- Feature: [NewGRF] Vehicle variable 4D for determining the position within an articulated vehicle (r26157)
- Feature: [NewGRF] Invalidate vehicle colour palette when leaving a station [FS#5669] (r26027)
- Feature: [NoGo] New goal type that show a story page when clicked (r26012)
- Feature: Optional filter parameter to the 'content state' console command, to limit the content list to only content where the name match the filter (r26000)
- Feature: When calling the 'content select' console command without args, display all selected content (r25999)
- Feature: XDG base directory support [FS#5385] (r25975)
- Feature: [Script] ScriptTown::GetFundBuildingsDuration (r25969)
- Feature: [Script] ScriptTown::TOWN_GROWTH_NONE to indicate no town growth via ScriptTown::SetGrowthRate and GetGrowthRate (r25968)
- Feature: [NoGo] GSTown::TOWN_GROWTH_NORMAL to reset a town growth rate set previously via GSTown::SetGrowthRate (r25967)
- Feature: [NewGRF Debugging] Inspecting other vehicles in a chain (r25946)
- Feature: [NewGRF] Object property 0x18 to allow specifying the number of objects of that type being placed upon map creation (r25878)
- Feature: [NewGRF] Object property 0x10, bit 13 indicating that object amount scales with water content of map border (e.g. used for lighthouses) (r25874)
- Feature: Highlight active goto item in order list dropdown [FS#5784] (r25859)
- Feature: [Admin] Send info on bankruptcy quarters also in ADMIN_PACKET_SERVER_COMPANY_INFO [FS#5756] (r25845)
- Feature: Increase maximum number of object instances on the map from 64k to about 16M (r25844)
- Feature: Increase the total number of object types from 256 to 64000 (r25835)
- Feature: [NewGRF] Increase the object class limit from 32 to 255 (r25831)
- Feature: Toggle button for wrapping lines in the textfile GUI [FS#5748] (r25816)
- Feature: [NoGo] Game Scripts can now charge fees and give money to companies (r25788)
- Feature: [Script] Allow AIs and GS to found towns. Allow GS to rename towns (r25785)
- Feature: Add keywords to the openttd.desktop.in file (r25783)
- Feature: Sticky and shade buttons for jukebox window [FS#5743] (r25776)
- Feature: Additional layered main toolbar arrangements (r25772)
- Feature: Allow implicit orders even if no explicit ones are given (r25735)
- Feature: [OSX] Pinch gesture support for zooming [FS#4760] (r25666)
- Feature: Split unit localisation choice into a choice per type of unit, and move it to the advanced settings (r25508)
- Feature: Have tractive effort in imperial (lbf) and metric (kgf) units, have weights and volumes in imperial units (short tons, gallons) [FS#5482] (r25508)
- Feature: Differentiate between total waiting cargo count and available (not reserved) cargo count in the station list and sort based on the cargo count, not the cargo value (r25405)
- Feature: Timetable spreading of vehicles by Ctrl+Click when setting a start date (r25377)
- Feature: Allow opening a goal list and story window specific to a company (r25372, r25369)
- Feature: Show cargo by next hops and final destinations in the station GUI (r25365)
- Feature: Consider cargo waiting at other stations for rating at the origin station (r25362)
- Feature: Distribute cargo according to plan given by linkgraph (r25361)
- Feature: [NoGo] GUI for viewing story pages (r25344)
- Feature: Add industry list to scenario editor's map menu (r25335)
- Feature: [NoGo] Allow more concurrent goals in a game (r25299)
- Feature: [NoGo] Goals can now have a progress text and/or be marked as completed (r25296)
- Feature: Allow saving window sizes as default sizes (r25295)
- Feature: Add another button to window title bars to resize the window to its default size (r25294)
- Feature: Save stickyness of windows when Ctrl+Clicking the sticky button (r25292)
- Feature: When opening the object-build window, restore the object build-window to the previous state (r25284)
- Feature: Show the approximate monthly supply to a station of the different cargoes (r25272)
- Feature: [Win32] Driver param for the DirectMusic driver to specify the output port to use [FS#5552] (r25269)
- Feature: Linkgraph overlay over main viewport (r25264)
- Feature: Linkgraph overlay for smallmap (r25262)
- Feature: Display imminent closure of an industry in its view window (r25238)
- Feature: [NewGRF] Expose sprite base of foundation and shore sprites via Action D Game Variables (r25230)
- Feature: [NewGRF] Variable 0x82 for canals and rivers (dike map) (r25229)
- Feature: [Script] ScriptStation::HasRating [FS#5514] (r25150)
- Feature: Add sorting on rating for the town directory window [FS#5288] (r25097)
- Feature: Introduce dropdown for selecting the sort criterion in the town directory window (r25094)
- Feature: Georgian Lari and Iranian Rial as currencies [FS#5212] (r25076)
- Feature: Collapse subtypes in the refit GUI and only expand them after selecting the cargo type (r25044)
- Feature: Only display subtypes in the refit GUI which are available for all selected vehicles. Also add a generic list item to refit while keeping the subtypes of individual vehicles [FS#3764] (r25043)
- Feature: Show the amount of cargo that has already been reserved by full loading vehicles in the station (r25013)
- Change: [NewGRF] Reset the temporary storage registers for every sprite resolving (r26173)
- Change: Improve layout of build-airport GUI [FS#5832] (r26165)
- Change: Make it slightly more clear what ports are coming from where in the debug output when listening (r25997)
- Change: Preselect the current replacement in the right-side list of the autoreplace GUI, instead of selecting the first resp. previous item [FS#5734] (r25919)
- Change: Unify behaviour when clicking on different items in the goto dropdown list when giving orders (r25894)
- Change: Do not offer subsidies for auto-distributed cargo [FS#5766] (r25882)
- Change: Allow to remove unowned objects unless they have the 'unremovable' flag (r25879)
- Change: In scenario editor allow to build all objects which were available at any point in the past to support building scenarios with historic items (r25875)
- Change: Display the cost to upgrade a bridge at the end of bridge that was clicked and not the other end, which could be outside of the screen in some cases (r25854)
- Change: [NewGRF] Lower the limit of airport tile types, house types, industry tile types and object types per NewGRF from 256 to 255 to prevent usage of ID 0xFF in Action3, and thus allowing it to become an extended byte somewhen (r25841, r25839, r25837, r25834)
- Change: Clarify the relevance of the permissible palettes (r25792)
- Change: [NewGRF] Invalidate vehicle recolour palette during (un)loading [FS#5669] (r25648)
- Change: If an editbox is configured to be cleared with ESC, but the editbox is already empty, unselect the editbox instead (r25647)
- Change: Make the bridge and object picker not restore their previous size, but the previously saved size (r25543)
- Change: Right align the infrastructure statistics [FS#5595] (r25515)
- Change: Clarify the meaning of the server advertisement settings (r25252)
- Fix: Unify the time a RV needs to travel through a curve [FS#5831] (r26169)
- Fix: Certain hotkeys crashed the content GUI when the list was empty [FS#5834] (r26167)
- Fix: Backup data of altered persistent storage arrays was freed twice [FS#5830] (r26161)
- Fix: [Script] Various API functions did not check whether ScriptRoad::SetCurrentRoadType was called appropriately [FS#5825] (r26149)
- Fix: [Script] API failed for vehicles with only implicit orders [FS#5824] (r26148)
- Fix: Several fixes found by static code analysis (r26132, r26130-r26097, r26091-r26077, r26073-r26046)
- Fix: Invalidate vehicle colour palette again when rearranging consist, reversing, etc (r26026)
- Fix: [NoGo] Properly validate the range of the growth rate passed to GSTown::SetGrowthRate, instead of masking it to 16 bit (r25966)
- Fix: [Admin] The frame of a command packet was not set for the packets that were sent via the admin interface (r25770)
- Fix: [OSX] The new 10.7 fullscreen code can now also be compiled with older SDK versions [FS#4744] (r25657)
- Fix: Under certain circumstances a track type change would make the end-of-line-is-red setting ineffective [FS#5216] (r25609)
- Fix: Highlight the right entry in the sorting selector in station view window (r25426)
- Fix: Suppress focusing editboxes which are not visible (r25413)
- Fix: Add missing compatibility settings in afterload (r25390)
- Fix: Allow changing GS settings in-game via the AI/GS config window [FS#5507] (r25104)
- Fix: [NewGRF] Do not compare GRF local cargo subtype IDs from different GRFs (r25042)
- Remove: Ordered refit with subtypes, since the cases where it worked were corner cases rather than the general case [FS#3764] (r25041)


## 1.3.x

### 1.3.3 (2013-11-29)

- Fix: Aircraft crashing near the map's border due to a lack of airports could trigger a crash [CVE-2013-6411] [FS#5820] (r26134)


### 1.3.3-RC2 (2013-11-24)

- Fix: [Script] Prevent scripts from crashing OpenTTD when they send text with command codes to user editable texts such as sign and station names [FS#5818] (r26093, r26092)
- Fix: Occasional hanging when client joins [FS#5811] (r26043)
- Fix: Multi line text was handled incorrectly causing glitches [FS#5809] (r26037, r26036)


### 1.3.3-RC1 (2013-11-17)

- Fix: Crash when the ICU layouter thinks a font is corrupted [FS#5711] (r26029, r26018, r26017, r26016, r26015)
- Fix: Make the installer warning about Windows XP SP3 not trigger on the 64 bit Windows XP which is not really Windows XP to start with [FS#5773] (r26028)
- Fix: Only forward key presses to the IME system if an edit box has the input focus (r26023, r25693, r25691, r25689, r25686, r25684, r25682, r25681, r25667)
- Fix: Having trains miss a platform that is just being modified is less of a problem than having trains stop twice without moving [FS#5684] (r26013)
- Fix: --help text of ./configure for packages that require pkg-config (r26011)
- Fix: The AI/GS library name to use in Import, is not the name given by GetName but GetInstanceName [FS#5662] (r26010)
- Fix: [Windows] Conditional expression with enumeral with non-enumeral type (r26009)
- Fix: Game script showing vehicle on e.g. a goal, then the vehicle being removed and eventually being replaced by a non-user vehicle (most likely smoke) causing an assertion to trigger [FS#5804] (r26007, r26006)
- Fix: Crash when transferring savegame from server to client [FS#5478] (r26005)
- Fix: [OSX] Text input into an edit box would trigger hotkeys [FS#5705] (r26003, r25743, r25671)
- Fix: Comma key collided with F12 key for hotkeys; also remove '+' as that is generally not a key (the '+' on the numpad is a separate one) [FS#5679] (r25973)
- Fix: Rail laying sounds of others could be heard in multiplayer [FS#5665] (r25972)
- Fix: [SDL] Recursive mutex locking when changing blitter [FS#5787] (r25970)
- Fix: The wrong vehicle would be taken in a shared order vehicle list window when the ID >= 65536, causing assertions triggering later on [FS#5800] (r25965)
- Fix: [OSX] Compilation under OSX 10.9 [FS#5797] (r25962, r25951, r25950, r25913)
- Fix: [NewGRF] A powered rail type implies it is compatible as well, but some NewGRF did not state that causing the path reservation code to bail out in some cases because there was no compatible path [FS#5779] (r25961)
- Fix: Temporary persistent storage modifications, e.g. command tests or those from GUI, were not properly reset, creating the possibility of desyncs [FS#5772] (r25956)
- Fix: Train's 'force proceed' status gets reset when the track on the other side of the tile has a signal [FS#5723] (r25955)
- Fix: Wrong signal conversions for savegames from before 0.4.5 [FS#5731, FS#5732] (r25954, r25953)
- Fix: Do not skip numbers when skipping spaces and other sorting 'improving' characters [FS#5719] (r25952)
- Fix: Text direction forcing characters were not filtered out, but shown as ? when ICU was not used for layouting. These are included in chat and console messages to force them to be displayed right [FS#5683] (r25949)
- Fix: NewGRF inspect window in RTL mode (r25943)
- Fix: [NoGo] Preserve the relative town growth progress when changing the town growth rate [FS#5786] (r25931)
- Fix: Several drawing overflows in the signal GUI [FS#5733] (r25929, r25928, r25927)
- Fix: Centre the edit sign window like all query windows (r25918)
- Fix: Initialisation of default objects swapped cost and dates (r25868)
- Fix: Use the actual sprite dimensions for sizing the dropdown arrow of dropdown widgets (r25864)
- Fix: If the child widgets of a NWidgetHorizontal container do not fill the complete container, align them according to text direction [FS#5686] (r25862, r25729)
- Fix: When clearing font cache, also clear layout cache [FS#5737] (r25860)
- Fix: Goto button in order window was not always lowered when it should [FS#5783] (r25858, 25857)
- Fix: Searching for a suitable font failed, if one of the fonts had no '?' glyph, and no baseset is installed [FS#5704] (r25822, r25820)
- Fix: Sprite 0 was considered available, even if no baseset was loaded (r25821)
- Fix: [GS] Language file scanner considered filenames starting with '.' as valid translations, resulting in languages with empty name, which causes trouble [FS#5750] (r25818)
- Fix: [GS] Handle savegames which contain GS translations for languages with empty name more gently [FS#5750] (r25817)
- Fix: [Script] ScriptTile::IsBuildableRectangle could report true for tiles outside of the map, if they happened to wrap around into a valid area [FS#5754] (r25815)
- Fix: [Script] Decoding JSON data with an empty array from Admin port failed (r25809)
- Fix: Ensure the vehicle bar is high enough for the start/stop vehicle graphics [FS#5740] (r25805)
- Fix: Lower sprite and text at the vehicle bar if it is pressed [FS#5739] (r25804)
- Fix: Draw start/stop graphics of the vehicle bar at the right place in RTL mode [FS#5738] (r25803)
- Fix: [NewGRF] Do not allow changing palette when it is set by the NewGRF (r25794, r25793, r25972)
- Fix: Some spelling corrections to Catalan and Latin American town names [FS#5746] (r25775, r25774)
- Fix: If old savegames contain bridges over owned land, keep on drawing the bridges nevertheless [FS#5725] (r25753)
- Fix: Several RTL alignment issues [FS#5692] (r25733, r25732, r25731)
- Fix: NWidgetMatrix used pip_pre and pip_post inconsistently and incorrectly, causing misalignment for RTL [FS#5686] (r25727)
- Fix: Right side of object class string was misaligned (r25726)
- Fix: [OSX] Do not pass -mmacosx-version-min to compilers that do not support it (r25706)
- Fix: Autoreplace/renew also refits free wagons [FS#5700] (r25698)
- Fix: Textbuf caret rendering for complex scripts (e.g. Tamil) (r25696, r25694, r25652, r25651, r25092, r25091)
- Fix: Vehicle::MarkDirty must be called for the front engine [FS#5700] (r25695)
- Fix: [Win32] Several issues regarding conversion of characters (r25677, r25676, r25675, r25674, r25673)
- Fix: [Win32] Handle Unicode characters from outside the BMP correctly (r25672, r25670, r25669, r25668)
- Fix: [OSX] Crash when unhiding the main window [FS#4689] (r25665)
- Fix: [OSX] Bootstrap downloading of a baseset did not work [FS#4847] (r25664)
- Fix: [OSX] Monospace font detection [FS#4857] (r25663, r25662)
- Fix: [OSX] Rework font detection to work even if no default font sprites are present [FS#4847] (r25661)
- Fix: [OSX] The name is OpenTTD, not OTTD (r25660)
- Fix: [OSX] System mouse cursor could become visible during dragging [FS#4420] (r25659)
- Fix: [OSX] The mouse cursor would sometimes jump near the window borders [FS#4392] (r25658)
- Fix: [OSX] The new 10.7 fullscreen code can now also be compiled with older SDK versions [FS#4744] (r25656)
- Fix: [OSX] Mouse cursor was not displayed properly after switching to fullscreen on 10.7+ (r25655)
- Fix: Improve character and word deletion for CJK languages and complex scripts (r25654, r25653)
- Fix: [OSX] Define version constants before they are used (r25643)
- Fix: Some icu_config scripts are too stupid to separate two ldflags by spaces, thus only call it with one (r25642, r25638)
- Fix: Do not suggest a start date for the game when there will be no vehicles available at all (r25640, r25639)
- Fix: City list sort of population and rating are reversed compared to the icon [FS#5666] (r25630)
- Fix: [Script] Give a slightly less generic error when removing nonexistent rail [FS#5651] (r25614)
- Fix: [Script] Do not return ERR_UNKNOWN when trying to move an order to its current location [FS#5648] (r25612)
- Fix: Various misreferences in AI and GS changelog [FS#5649] (r25607)
- Fix: [Script] If a NewGRF returned station type that could not be built by an AI via callback 18, an unknown error would be thrown instead of falling back to the default station [FS#5641] (r25605)
- Fix: Only the front engine's date of last service was updated [FS#5550] (r25604)


### 1.3.2 (2013-07-27)

(None)


### 1.3.2-RC2 (2013-07-13)

- Fix: [Admin] End-of-rcon data could not be determined reliably for any rcon command [FS#5643] (r25598, r25588, r25587)
- Fix: [Content] When the server closed the connection, the client would for eternity try to read a packet and never timeout making it impossible to reconnect [FS#5635] (r25597)
- Fix: [Script] Changing the script difficulty level in-game would also change the settings using the default even though they were not allowed to change in-game [FS#5644] (r25592)
- Fix: [Admin] Ensure that sent and received length of JSON strings are the same [FS#5646] (r25590, r25589)
- Fix: [Squirrel] Stack overflow did not show an error, due to the stack to throw the error already being full [FS#5320] (r25585)
- Fix: [Script] Documentation implied that XXList::AddItem has a default for value if it is not filled in [FS#5638] (r25579, r25577)
- Fix: Layouter caused significant slowdown with text heavy windows, cache it to make it manageable (r25574, r25570, r25569, r25567, r25564)
- Fix: Make content list appear faster (r25573)
- Fix: Non-ICU layouter started new lines with the space which triggered the linebreak (r25568)
- Fix: If the next order cannot be resolved, reset the current order property instead of leaving it in an intermediate state [FS#5633] (r25562)
- Fix: [Squirrel] Infinite recursion loop in freeing data via a looping set of references [FS#5568] (r25558)
- Fix: One could build bridges over owned land of another company [FS#5524] (r25557)
- Fix: [Script] Texts from scripts were not validated before they were shown, causing an assertion to trigger [FS#5632] (r25555)
- Fix: Provide a warning when no vehicles are available, and tell what to do in that case [FS#5530] (r25553)
- Fix: Possible reading of uninitialised memory due to undefined execution order (r25551)
- Fix: [Windows] Race condition between two drawing threads could crash OpenTTD [FS#5571] (r25550)
- Fix: ICU returns the width of the visual run as if the trailing space was added (in case a newline was added). This caused the width to be more than the requested width, but it would still be drawn correctly [FS#5626] (r25547)
- Fix: Small memory leaks (r25546)
- Fix: [GS] The checks and validations for setting the extra text in the town window became too stringent [FS#5625] (r25544)


### 1.3.2-RC1 (2013-06-30)

- Remove: SETX(Y) does not work at all with other than default fonts, so get rid of it (r25454)
- Fix: strndup should not examine strings beyond its upper limit [FS#5621] (r25527)
- Fix: Proper support for Brahmic scripts (e.g. Tamil and Thai) [FS#5481] (r25526, r25525, r25524, r25514, r25513, r25512, r25511, r25501, r25493, r25485, r25483, r25482, r25481, r25478, r25477, r25476, r25474, r25473, r25472, r25471, r25470, r25469, r25468, r25467, r25466, r25465, r25463, r25462, r25455, r25452, r25451, r25450, r25447, r25446, r25445, r25444, r25443, r25442, r25441, r25440, r25439, r25438, r25437, r25436, r25343, r25157)
- Fix: SDL does not give an event when an application gets mouse focus while going to full screen, so manually force the mouse-is-in-window state [FS#5587] (r25523)
- Fix: [NewGRF] When cargo NewGRF define a multiplier to modify vehicle capacities, use the same multiplier to modify loading speed (r25497, r25479)
- Fix: When adding bits to a (train) station, the train trying to stop there could overshoot the (new) stop location and not stop at all [FS#5553] (r25495)
- Fix: The face of the manager differed on clients when the company was started after the clients joined [FS#5610] (r25491, r25490)
- Fix: Do not send encoded texts to names, but decode them into a plain C string and then pass them on [FS#5613] (r25489, r25488)
- Fix: Do not allow control codes in names of things (signs, vehicles, towns, stations, etc), so they have a known maximum fixed size and are, by definition, the same for everyone (r25487)
- Fix: Missing length validation for town and president names in script APIs (r25486)
- Fix: [OSX] OS X SDK versions >= 10.5 always have a non-const iconv declaration (r25480)
- Fix: Disable the depot-refit button in the order GUI, if the consist is not refittable unless it already has a refit order (r25459, r25458, r25457)
- Fix: When town creation failed, removing remnants of the construction failed on protected houses [FS#5603] (r25429)
- Fix: There were two hotkeys to toggle between 'unload' and 'unload if possible' (r25406)
- Fix: The size of station construction windows could oscillate when resizing the window moved the mouse into the window [FS#5596] (r25395)
- Fix: Restrict renaming engines to the server, just like renaming towns (r25394)
- Fix: Loading only 8 bits into a 16 bit variable could cause endianness problems (r25337)
- Fix: Check for zero width space in translations and fail upon finding them [FS#5589] (r25326)
- Fix: [SDL] Keyboard input stopped working after fullscreen toggle [FS#5580] (r25318)
- Fix: Proper size-estimation for numbers with n digits, i.e. not assume a particular number is the widest [FS#5562] (r25314, r25313)
- Fix: Do not focus the editbox in the NewGRF window, if there is no editbox visible (r25307)
- Fix: Game Script APIs that execute a DoCommand were returning the same result as in TestMode during world generation [FS#5561] (r25305)
- Fix: Build railway fences next to objects, even if they are owned by the same company [FS#5565] (r25302)
- Fix: gcc4.6 removed -mno-cygwin option (r25266)


### 1.3.1 (2013-06-01)

- Fix: When overbuilding a reserved track with a non-track station tile, that tile would remain reserved and eventually trigger a crash upon removal [FS#5540] (r25251)


### 1.3.1-RC1 (2013-05-17)

- Feature: Translations of baseset descriptions via language files (r25209, r25205)
- Feature: Faroese and Scottish Gaelic translations (r25198, r25176)
- Feature: Plural form to be used by Scottish Gaelic (1,11; 2,12; 3..10, 13..19; other) (r25078)
- Change: [strgen] Allow any number of colour codes in translations (r25193, r25192, r25191)
- Change: [Win32] MSVC 2010 comes with stdint.h (r25128)
- Change: Be slightly more lenient with trying to detect a subversion repository in case someone has a sparse tags checkout. In that case the .svn folder misses from the $ROOT_DIR because it is in the $ROOT_DIR/.. (i.e. tags) folder (r25107)
- Fix: 'No station' error was given, even when there was a station that way occupied or not yours [FS#5546] (r25243)
- Fix: Crash when AI is executing a command as it is bankrupted (removed from the game) [FS#5547] (r25236)
- Fix: Give bridges owned by no one (from bankrupt companies) to the first company which replaces the bridge. Everyone could have removed/rebuild the bridge anyway [FS#5541] (r25231, r25227)
- Fix: [NewGRF] Revise when vehicle running sound effects 04, 07 and 08 are played; in depot or tunnel, or when crashed or stopped: No sound. Braking: Effect 08 instead of 07 [FS#5538] (r25226)
- Fix: [NewGRF] Play vehicle sound effect also for planes (r25225)
- Fix: [NewGRF] cur_speed is only valid for the front engine, so make other engines in the consist use the speed of the front [FS#5534] (r25224)
- Fix: [NewGRF] Make tick_counters work the same for vehicles (r25223, r25222)
- Fix: [NewGRF] IsCompatibleTrainStationTile() is not a symmetric function. Clarify the parameters and fix the cases were they were swapped (r25221)
- Fix: Consider map border as water with respect to river/canal continuation (r25220)
- Fix: [Script] Clarify on which tiles IsDesertTile and IsSnowTile work, i.e. the ones without infrastructure or buildings, and introduce GetTerrainType for the cases where IsDesertTile/IsSnowTile do not work [FS#5537] (r25213)
- Fix: The level crossing sound is an ambient sound and not a new year sound (r25200)
- Fix: Original train and road vehicle acceleration did no longer respect bridge speed limits [FS#5523] (r25167)
- Fix: [Win32] Do not statically link to SHGetFolderPath as it may not exist, and improve its emulation [FS#5522] (r25155, r25153)
- Fix: [Win32] Do not store invalid paths in the search path list (r25154)
- Fix: Remove stray reservation from savegames affected by FS#5510 et al. upon loading [FS#5520] (r25152)
- Fix: [Script] XXBase::Chance function did not work for large values (>65535) [FS#5517] (r25148)
- Fix: Several typos/inconsistencies in English strings [FS#5496] (r25144, r25143)
- Fix: When extra dynamite was disabled, towns would be allowed to clear bridges with trams (r25141)
- Fix: Towns are build as OWNER_TOWN, so they also need to be removed as OWNER_TOWN otherwise parts might remain [FS#5519] (r25140)
- Fix: Editboxes could become too small when resizing windows (r25121)
- Fix: Game script language files did not work, when inside a tar [FS#5509] (r25117, r25114)
- Fix: [NewGRF] Acceleration of NewGRF aircraft was too fast, while acceleration of default aircraft was way too slow (r25115)
- Fix: Pass $LDFLAGS_BUILD to all endian_check compilations (r25108)


### 1.3.0 (2013-04-01)

- Fix: Station rebuilding could leave reserved tiles which caused crashes later on [FS#5510, FS#5516] (r25132)
- Fix: When the count for a scrollbar was 0, the inter distance was subtracted too much causing a scrollbar with a negative size (r25123)


### 1.3.0-RC3 (2013-03-18)

- Fix: Limit aircraft property 0D to 19, since the conversion result to km-ish/h needs to fit into a byte [FS#5492] (r25099)
- Fix: Clicking the statusbar crashed, when news were pending but no news were shown yet [FS#5486] (r25093)
- Fix: Make editbox character filters also apply to pasted content from clipboard (r25090, r25089)
- Fix: Catch exception anonymously, if the exception content is not of interest [FS#5500] (r25081)


### 1.3.0-RC2 (2013-03-05)

- Fix: Make sizes of the station preview list and direction selection identical in the station build window [FS#5472] (r25064)
- Fix: When allocation of the sprite cache fails, try to allocate less memory and display an error message later on (r25061)
- Fix: Refactor Script Debug GUI to only set widget states in OnInvalidateData [FS#5490] (r25052)
- Fix: Do not let gcc include files from the 'standard C' include directories to avoid inclusion of header files at the top of the preprocessed nfo files, which cause NFOrenum/GRFcodec to make invalid assumptions about the NFO version (r25050)
- Fix: Minimise gaps feature caused removal to only happen at the signal build interval instead of the implicit interval of 1 [FS#5479] (r25038)
- Fix: Green path signals would be shown when building them 'under' a train, and they would keep showing green until they were passed again [FS#5480] (r25037)


### 1.3.0-RC1 (2013-02-19)

- Feature: Searching of (missing) content via GrfCrawler (r25024, r25023)
- Change: Cleanup goals and cargo monitors of companies when they go bankrupt or are taken over (r24986)
- Change: Apply the same name sorting rules to content and NewGRF list as for the server list (r24983)
- Fix: [SDL] Crash after bootstrap download of 32bits base set due to referencing a deleted mutex [FS#5466] (r25017)
- Fix: [SDL] Improve 8bpp hardware palette support. Instead of always requesting SDL_HWPALETTE, it is now only done for 8bpp blitters in fullscreen mode (r25003, r25002, r24993)
- Fix: Set vehicle's service interval is percent flag appropriately on creation [FS#5137] (r24998)
- Fix: When choosing a train in a depot to attach a newly purchased wagon to, do not consider trains currently moving in and out of the depot (r24987)
- Fix: [Script] Crash when passing too many parameters [FS#5465] (r24982, r24981, r24980)


### 1.3.0-beta2 (2013-02-07)

- Feature: [NewGRF] Station randomisation triggers (r24906, r24905)
- Feature: Settings type filter included in the advanced settings GUI (r24862, r24863)
- Change: Revert to opening the vehicle GUI again when cloning vehicles using the clone-button from the depot GUI [FS#4458] (r24955)
- Fix: Additional zoom in levels could glitch by a few pixels due to incorrect rounding [FS#5463] (r24975)
- Fix: Honour pause_on_newgame setting when running as a dedicated server [FS#5279] (r24974)
- Fix: [NewGRF] Prevent access to tile-based variables when tile is invalid [FS#5462] (r24973)
- Fix: Do not make overbuilding rivers with canals insanely expensive [FS#5258] (r24972)
- Fix: Crash when an infinite loop occurred during loading of a script [FS#5346] (r24970)
- Fix: company window was not updated when shares were enabled/disabled [FS#5379] (r24968)
- Fix: Trams would get stuck on water [FS#5228] (r24966)
- Fix: With YAPF the docking behaviour differed per direction; now favour docking in the direction you approached [FS#5416] (r24964)
- Fix: Do not stop loading if there are reservations left [FS#5435] (r24963)
- Fix: Reserve all capacity while unloading to avoid 'stealing' cargo, i.e. loading cargo onto a second vehicle when the first cannot be fully filled yet [FS#5438] (r24962)
- Fix: If a platform is enlarged and there is a reservation, reserve the whole platform [FS#5362] (r24961)
- Fix: Inconsistencies in the 'thanks to' lists [FS#5423] (r24960)
- Fix: Set 'replace when old' flag when replacing an autoreplace (r24950)
- Fix: Deleting implicit orders was not able to deal with the various side-effects of DeleteOrder [FS#5452] (r24944)
- Fix: Redraw autoreplace window properly in network games (r24939)
- Fix: Never put a space between cargo name and subtype [FS#5447] (r24938)
- Fix: Do not allow order refit to be set for no-load orders [FS#5446] (r24936)
- Fix: Make group names unique per company and vehicle type [FS#3473] (r24933)
- Fix: Prevent more NewGRFs being selected than is possible to load  [FS#5158] (r24932)
- Fix: [GS] Do not try to pause or unpause crashed scripts [FS#5415] (r24929)
- Fix: [Squirrel] Update line information before processing 'while' token of 'do'-'while' statement [FS#5408] (r24928)
- Fix: Add a tooltip to the mapsize selection mentioning possible deviations [FS#5395] (r24925)
- Fix: When an object built on a river is removed, restore the river [FS#5441] (r24923)
- Fix: Upgrading bridges could steal road types [FS#5389] (r24912)
- Fix: [GS] Allow GSs to pass negative integer string parameters (r24908)
- Fix: 'Train loads/unloads cargo' station animation triggers on individual platform (r24904)
- Fix: Cached station animation triggers were only set when removing parts of a station (r24903)
- Fix: The station build window did not update when the station spread changed [FS#5434] (r24899)
- Fix: Do not unpause the game when closing the highscore window if it was already paused before the highscore screen was shown (r24898)
- Fix: Improvements and fixes for the base translation [FS#5411, FS#5420, FS#5421, FS#5422, FS#5427] (r24896, r24875, r24872, r24869)
- Fix: Allow downgrade of road bridges in the scenario editor [FS#5436] (r24895)
- Fix: Invalidate station selection window when station spread changes [FS#5434] (r24894)
- Fix: Distribute GS compat_<version>.nut with OpenTTD (r24890)
- Fix: Pass proper UTF-16 strings instead of UCS-2 to ICU in order to preserve characters outside the BMP (r24885)
- Fix: A completely emptied vehicle could trigger an assert (r24883)
- Fix: Desync when NewGRF changes the stats related to acceleration (power, weight, tractive effort, etc) during service or 32 day triggers (r24882)
- Fix: Incorrect Romanian own name (r24874)
- Fix: Make invalid sprite references to mapgen sprites behave the same as invalid references between recolour and real sprites [FS#5404] (r24858)
- Fix: Do not let UFOs and coal mines clear water (r24857)
- Fix: Do not let UFOs and coal mines destroy depots [FS#5406] (r24856)
- Fix: Do not send aircraft to depots that are out of range of the next destination [FS#5405] (r24855)
- Fix: Only consider vehicles available in the climate for purchase/depot cell size (r24854)
- Fix: Extend widget data member to 32 bits so that sprite IDs >= 2^16 can be used (r24853)


### 1.3.0-beta1 (2012-12-24)

- Feature: Advanced settings to disable certain sound effects (r24846)
- Feature: [NewGRF] Support oversized purchase list sprites [FS#5271] (r24839)
- Feature: Improve pylon placement around station tiles that display neither pylons nor catenary (r24836)
- Feature: When using a non-release version of OpenTTD and the basegraphics are missing some sprites, also suggest to use a non-release version of the basegraphics (r24821)
- Feature: Consider engine preview windows always sticky, so non-shift mass-closure does not affect them [FS#2632] (r24809)
- Feature: When share-cloning vehicles do not open the vehicle window of the new vehicle [FS#4458] (r24808)
- Feature: Enable usage of 'companies' console command also in singleplayer [FS#2820] (r24807)
- Feature: Ask for confirmation before creating giant screenshots [FS#3148] (r24806)
- Feature: Separate subdirectory for screenshots (r24804)
- Feature: Unify the difficulty settings window with the advanced settings window (r24791, r24792)
- Feature: Various methods to open the OSK (r24785)
- Feature: Add a string filter to the server list [FS#3852] (r24769)
- Feature: Add industry type and cargo dropdown selection for easier navigating in the industry chain window (r24763)
- Feature: Introduce GUI icons for deleting to the left/right (r24749)
- Feature: Add clear button to all editboxes (r24748)
- Feature: Reset the vehicle engine pool when starting a scenario (r24716)
- Feature: Add basic/advanced/expert filters to the advanced settings GUI [FS#5355] (r24671)
- Feature: Draw cargo labels in the station list black or white depending on the background colour [FS#5311] (r24668)
- Feature: Do not display the preview window for disabled vehicle types (r24660)
- Feature: Add new filter option to the advanced settings window to show only changed settings (r24647)
- Feature: Add text filtering to advanced settings (r24632)
- Feature: Add buttons to expand/collapse all to advanced settings GUI (r24631)
- Feature: [GS] Allow GameScripts to construct and prospect industries without having a sponsor (r24623)
- Feature: Pay interest also on a negative cash value (r24618)
- Feature: Sort cargo filter by cargo name/label at the company stations window [FS#5311] (r24615)
- Feature: More options for the auto-scroll setting (r24590)
- Feature: Allow AI/GS script developers to break the execution of their scripts and pause the game using ScriptController::Break() (r24542, r24575)
- Feature: Scripts can be suspended even if the game is still progressing, thus break-on-log now works also for Game Scripts (r24537)
- Feature: Highlight industries on the smallmap when the mouse is over an entry in the legend (r24534)
- Feature: [NewGRF] Allow resolving var 5F via vehicle var 61 (r24527)
- Feature: [OSX] Additional high-resolution icons for the app bundle [FS#4539] (r24525)
- Feature: Ctrl+Backspace/Delete to remove characters up to next word beginning in text edit boxes [FS#5203] (r24521)
- Feature: Ctrl+Arrow keys to move entire words in text edit boxes [FS#5203] (r24520)
- Feature: When using autorefit only load/refit vehicles if other wagons cannot already take all cargo without refitting [FS#5106] (r24497)
- Feature: [GS] Useful behaviour for GSEngine::IsValidEngine and GSEngine::IsBuildable when outside GSCompanyMode scope (r24492)
- Feature: Display GS dead state in AI debug window [FS#5230] (r24489)
- Feature: Add buttons to view textfiles from the online content window [FS#5236] (r24488)
- Feature: Make the pathfinder decide whether ships shall leave depots towards north or south [FS#5127] (r24481)
- Feature: [GS] API compatibility scripts for Goal Scripts [FS#5219] (r24468)
- Feature: Display in the advanced settings description a setting type which explains the scope of changes to a particular setting [FS#5244] (r24411)
- Feature: [GS] Allow game scripts to monitor cargo pickups and deliveries done by companies (r24406)
- Feature: [NewGRF] Allow vehicle variable 61 for callback 2D (recolour) and re-randomisation (r24371)
- Feature: [NewGRF] Customisable signals for rail types (r24367)
- Feature: Allow filtering for multiple words (separated by whitespace resp. quoted) in script breakpoints, the sign list, content and NewGRF-GUIs (r24337, r24342)
- Feature: Add dropdowns to NewGRF configurations, if all values have labels (r24318)
- Feature: Add dropdowns to AI configurations, if all values have labels (r24317)
- Feature: Allow to select advanced settings with limited range with a dropdown list (r24316)
- Feature: Display default values for advanced settings in the settings description (r24298)
- Feature: News item for exclusive transport rights [FS#2688] (r24287)
- Feature: [GS] Additional GSNews::NewsItem::NewsTypes (r24286)
- Feature: [NewGRF] Variable with the current max speed for vehicles [FS#5052] (r24246)
- Feature: Descriptions explaining the meaning of advanced settings (r24237)
- Feature: Split the renew-months setting text in two string values (one before life time and one after) (r24210)
- Feature: Show a hint in the supplies tab of station windows, if the station is affected by exclusive transport rights [FS#5178] (r24205)
- Feature: [NewGRF] Callback to set industry production level on construction (r24186)
- Feature: South Korean and South African currencies [FS#4907] (r24148)
- Feature: Randomise count of passengers killed in a crash [FS#3576] (r24142)
- Feature: Display rating in the town directory window (r24141)
- Feature: Show group name in the replace vehicle window caption [FS#1117] (r24140)
- Feature: Allow to create a new vehicle group by drag and drop (r24139)
- Feature: Ctrl+Drag to add all vehicles with a shared order list to a group (r24138)
- Feature: Draw indicator icon in the replace vehicle window for vehicles which have a replacement set (r24137)
- Feature: Autoreplace vehicles only when they get old [FS#4465] (r24136)
- Feature: Add configurable limits for tree planting, and remove tree drag size limit (r24134, r24135)
- Feature: Lithuanian currency [FS#4984] (r24133)
- Feature: Ctrl+Clicking to change colour of all colour schemes at once [FS#1952] (r24131)
- Feature: Deselect 'remove' button when changing signal types in the GUI [FS#2314] (r24130)
- Feature: Option to minimise signal distance when dragging over obstacles [FS#3660] (r24129)
- Feature: Allow closing airports for incoming aircraft [FS#1497] (r24127)
- Feature: Drag and drop support for the NewGRF list window [FS#3854] (r24126)
- Feature: Drag destination highlighting to the group GUI [FS#3705] (r24125)
- Feature: [NewGRF] Misc engine flag to disable breakdown smoke [FS#4658] (r24124)
- Feature: Be more careful with the population of a small town while placing a statue (r24105)
- Feature: Debug option for showing the redrawn dirty blocks/rectangles [FS#5101] (r24065)
- Change: News display options are now shown in the advanced settings window (r24842, r24843, r24844, r24845)
- Change: Drop 'signal density' from the advanced settings GUI. It is more suited to be only changed via the signal GUI (r24670)
- Change: Check for bankruptcy on a monthly basis (r24619)
- Change: Only bankrupt, if you have negative money considering you took max loan (r24617)
- Change: When building long roads or tramways, only build the roadbits at the beginning and the end if they can connect to something [FS#5228] (r24503)
- Change: Disallow original and better road layouts to build roads under bridges along the bridge direction [FS#5229] (r24391)
- Change: Allow cloning of orders which are unreachable for the destination vehicle if they were already unreachable for the source vehicle [FS#5213] (r24390)
- Change: Allow building/modifying/removing signals even if a train is on the belonging track (r24356)
- Change: [NewGRF] Make bounding boxes of road vehicles change according to the vehicle length to make alignment easier [FS#5204] (r24331)
- Fix: [NewGRF] Consider regearing-like cargoes as no-cargo in cargo filters [FS#5386] (r24848)
- Fix: [NewGRF] Draw NewGRF railtypes in NewGRF station previews (r24840)
- Fix: Do not consider blocked rail station tiles that display wires as non-reachable for masking out unnecessary catenary wires (r24837)
- Fix: The autorefit dropdown in the order GUI was not always updated when modifying vehicle consists [FS#5396] (r24834)
- Fix: [NewGRF] Incorrect values are better than a crash when a NewGRF queries vehicle variable 4C before vehicle initialisation is completed [FS#5398] (r24831)
- Fix: determineversion.vbs could hang in a git checkout (r24826)
- Fix: Close pending preview windows when the engine is introduced to everyone (r24812)
- Fix: Close engine preview window when another client accepts it (r24811)
- Fix: Make engine preview offers more robust with regard to changes in the company ranking (r24810)
- Fix: When displaying the previous news message, do not consider news which are turned off [FS#4224] (r24802)
- Fix: Glitch in timetable GUI [FS#5327] (r24800)
- Fix: Unify checks for editability of settings (r24787)
- Fix: Invert the focus handling of the OSK. Keep the focus at the OSK and close it on losing focus (r24774)
- Fix: Shift in the OSK behaved like capslock (r24773)
- Fix: [Win32] Do not crash when switching to an unsupported fullscreen display mode (like 8bpp modes in Windows 8) [FS#5359] (r24762)
- Fix: Crash on corrupted savegame [FS#5367] (r24754)
- Fix: Some editboxes had a different colour than the rest of the window (r24747)
- Fix: In various windows the OSK looked shiny but using it had no effect whatsoever (r24727)
- Fix: AI debug GUI crashed when using disabled buttons via hotkeys (r24723)
- Fix: When starting a scenario apply the local company settings to the new company [FS#5139] (r24717)
- Fix: [NewGRF] Allow stations to draw snow/desert aware ground sprites with railtype overlays [FS#5335] (r24715)
- Fix: [NewGRF] Draw default foundations if resolving of custom station foundation sprites fails [FS#5337] (r24714)
- Fix: [NewGRF] Tolerate old NewGRFs returning invalid values via CB 11 [FS#5262] (r24713)
- Fix: [NewGRF] Station variables 61 and 62 returned incorrect values, if no vehicle ever tried loading [FS#5303] (r24712)
- Fix: Check whether to not display a ^ loading indicator at drop stations only worked if there was no other vehicle unloading for 255 ticks (r24711)
- Fix: [NewGRF] Station var 48 should report acceptance, not supply (r24706)
- Fix: Station rating might consider very old vehicles very young (r24705)
- Fix: Disallow closing oilrig airports in the scenario editor (r24703)
- Fix: Workaround for an overoptimisation done by GCC 4.5 [FS#5246] (r24701)
- Fix: Get packing right on MinGW GCC 4.7 (r24573)
- Fix: Make sure all template functions are instantiated by at least one compilation unit [FS#5276] (r24496)
- Fix: Do not load order backups when loading a server-saved game in single player (r24445)
- Fix: Allow overbuilding bridges with the same type when adding a roadtype [FS#5221] (r24413)
- Fix: Cargo lists cannot have genders (mostly because it is very unclear what gender it would have) (r24374)
- Fix: Off by one errors with regard to clicking on setting buttons (r24313)
- Fix: STRING1 probably means STRING1 (r24295)
- Fix: squirrel_export should match key words like 'virtual', 'static' and 'const' only as whole words (r24288)
- Fix: Hide object specs/classes from the GUI, if they will never be available to the user [FS#4967, FS#5120] (r24171)
- Fix: Unify the spacing in 'AI/Game Script' and never just say 'Game' when 'Game Script' is meant [FS#4898] (r24020)


## 1.2.x

### 1.2.3 (2012-11-01)

(None)


### 1.2.3-RC1 (2012-10-17)

- Change: [NewGRF] Set the reference brightness of 32bpp mask recolouring to 128 (r24610)
- Fix: Configure script did not properly handle _BUILD flags during reconfigure (r24601)
- Fix: Configure script failed to detect libfontconfig 2.10 as newer than 2.3 (r24598)
- Fix: When fontconfig is not available, the bootstrap download crashed [FS#5336] (r24597)
- Fix: Crash when a gamescript provided too many parameters to a GSText object [FS#5333] (r24593)
- Fix: [Script] API documentation mistakes/omissions (r24584)
- Fix: Do not add duplicates to the ban list [FS#5308] (r24580)
- Fix: Draw the window resize sprite bottom-aligned [FS#5324] (r24577)
- Fix: Vehicle list at buoys did no longer work [FS#5319] (r24576)
- Fix: [Windows] Do not cast away const in OS specific code (r24572, r24571)
- Fix: Naming of bundles was somewhat broken (r24569)
- Fix: Non-train vehicle lists were not resorted when vehicles were renamed [FS#5261] (r24567)
- Fix: Stop both price and payment inflation if either of them has reached MAX_INFLATION (r24565)
- Fix: Limiting the inflation did not quite work [FS#5312] (r24564)
- Fix: Do not show profit from refits as cost in the refit window [FS#5297] (r24544)
- Fix: Do not limit to reading one UDP packet per game loop (r24532)
- Fix: Max script chance was too big (r24531)
- Fix: [NewGRF] RandomAction 84 should interpret register 100 as signed (r24528)
- Fix: [OSX] Some compile problems in mac-only code [FS#5296] (r24524)
- Fix: The gender of an industry name is defined by the industry-type part of the name, not by the town-name part, even if it comes first (r24523, r24522)
- Fix: GStexts were compiled incompletely when containing certain string codes (r24516, r24515)
- Fix: The mousewheel did not work in the build waypoint window [FS#5285] (r24507)
- Fix: [NewGRF] Airport variables 60 to 65 and 69 used the wrong cargo translation table for translations (r24506)
- Fix: Do not show the global goals as company goals for spectators (r24500)
- Fix: Clarify description of command line option -n (r24485)
- Fix: Do not call RebuildSubsidisedSourceAndDestinationCache() before subsidy savegame conversion is finished [FS#5232] (r24482)
- Fix: Trains were unable to reverse in stations when using NPF (r24479)
- Fix: The --xxx yyy format (instead of --xxx=yyy) for configure did not work (r24471)
- Fix: --prefix was not accepted by configure (r24470)
- Fix: Changing auto-refit for a 'goto station' order was inadvertently modifying the full load state [FS#5264] (r24457)


### 1.2.2 (2012-08-16)

(None)


### 1.2.2-RC1 (2012-08-01)

- Fix: In some cases ships could be covered with land [CVE-2012-3436] [FS#5254] (r24449, r24439)
- Fix: Copy constructor and assignment operator cannot be implicit template specialisations [FS#5255] (r24448)
- Fix: Make (non-refittable) vehicles with invalid default cargo unavailable [FS#5256] (r24438)
- Fix: CFLAGS/CXXFLAGS ignored for helper binaries (r24432, r24429, r24427, r24365)
- Fix: [Windows] Unbreak NewGRF MD5 sum calculation. Macros and side effects do not mix, especially if there is some obscure '#define min' in a windows header that nobody thinks of [FS#5231] (r24416)
- Fix: Disallow removing roadtypes from bridges when not dragging in bridge direction [FS#5221] (r24414)
- Fix: Draw wires under low bridges if the bridge is transparent, not if the wire is transparent (r24403)
- Fix: Station properties 11 and 14 were combined incorrectly [FS#5243] (r24402)
- Fix: [Windows] Changing resolution did not resize the window (r24394)
- Fix: Use the 'all vehicles' group for the autoreplace window from the vehicle list [FS#5239] (r24392)
- Fix: Do not consider not finding a particular base set critical; just load a different one and display an in-game error later on [FS#5233] (r24388)
- Fix: Make IsInDepot() functions behave consistent across vehicle types and add IsChainInDepot instead, if that is what shall be checked [FS#5188] (r24384)
- Fix: Call Vehicle::IsStoppedInDepot only for the first vehicle in a chain (i.e. primary vehicle or free wagon) (r24382)
- Fix: Do not resize the object GUI when selecting objects. Rather clip the object name (r24379)
- Fix: ReInit could crash for windows with NWidgetMatrix widgets [FS#5218] (r24378)
- Fix: [NewGRF] Extended action A1 did not work correctly [FS#5227] (r24369, r24361)
- Fix: [NewGRF] Ship-specific 80+x variables were missing for unknown reason [FS#5224] (r24360)
- Fix: When airport construction was denied due to noise, the error message named the wrong town (r24354)
- Fix: [NoAI] A TileIndex is not a station id, so do not use it as one [FS#5215] (r24353)
- Fix: When highlighting the drop position for vehicles in depots, make space for all articulated parts (r24352)
- Fix: Short vehicles were not properly positioned at the cursor when dragging for RTL languages (r24351)
- Fix: EQUALSIZE widget containers within EQUALSIZE containers were initialised with wrong sizes (r24346)
- Fix: The cursor in the company password window was not blinking due to wrong magic constants (r24335)
- Fix: [NewGRF] Change the length of 8/8 road vehicles in vehicle lists to 32 pixels; this is in fact the correct length as can be seen in corners for short articulated parts following each other [FS#2553] (r24332)
- Fix: [NewGRF] Group vehicles in the purchase list properly by source GRF, but also consider engine GRFID overrides [FS#4254] (r24330, r24321)
- Fix: Make the AI settings window behave more like the other settings window by closing the query window whenever selecting a different row (r24315)
- Fix: Editing NewGRF parameters using the query window showed wrong values, if there was no direct relation between parameter index and parameter register (r24314)
- Fix: Centre object previews in 1- and 2-view selectors based on the 4-view selector layout [FS#5057] (r24299)
- Fix: Increase the left and right margins of the text in the yes/no query window (r24293)
- Fix: [NewGRF] GetReverseCargoTranslation() was unnecessary complicated and also returned the wrong thing for cargoes not present in the translation table (r24273)
- Fix: [NewGRF] Load cargo- and railtype-translation during both reservation and activation stage. That way they can be selected using Action7 depending on present cargo- or railtypes (r24272)
- Fix: Use the same colour scheme for the script selection window as in other comparable windows (r24268)
- Fix: Make the oilrig-vehicle list accessible to spectators and colour its caption neutrally grey [FS#5126] (r24260)


### 1.2.1 (2012-06-01)

- Fix: [Script] ScriptTown::GetGrowthRate() returned wrong values after usage of SetGrowthRate() (r24302)


### 1.2.1-RC1 (2012-05-16)

- Fix: Change the unit of the sprite-cache size setting from megabytes to megapixels, so it depends on the blitter being used. Also increase it from 64 to 128, and change the name in the cfg file, so everyone gets the new default [FS#5162] (r24252)
- Fix: Do not immediately display error messages from parsing the cfg file, but schedule them for displaying after the GUI is prepared for it [FS#5154] (r24250, r24249, r24248, r24247)
- Fix: Dereferencing uninitialised pointer causing a crash [FS#5159] (r24224)
- Fix: Lag counters were not properly reset when switching states making it possible to get disconnected for lagging when you were not lagging [FS#5166] (r24221)
- Fix: Adopt ICU version detection to also deal with the new versioning scheme since ICU 49 [FS#5182] (r24220)
- Fix: Immediately do the cargo payment on vehicle crashes instead of when they are cleared [FS#5152] (r24219)
- Fix: The confirmation window to abort world generation was hidden during world generation, so actually you could not abort it [FS#5159] (r24214)
- Fix: If a company is taken over or bankrupts, transfer exclusive transport rights to the new owner respectively cancel them (r24204)
- Fix: Make the engine name not overdraw the engine count in the autoreplace GUI (r24203)
- Fix: Make the size of the details in the autoreplace GUI match more the size of the details in the purchase list (r24202)
- Fix: Mark group list dirty when setting/clearing autoreplace for an engine type [FS#5170] (r24201)
- Fix: Invalidate build vehicle windows every month, in case they need resorting due to changed reliabilities [FS#5149] (r24200)
- Fix: If you consider a settings to potentially cause desyncs via NewGRFs and thus disallow changing it in network games, you should probably also sync it to clients (r24193, r24191)
- Fix: Use default value when reading an invalid setting value [FS#5153] (r24192, r24146)
- Fix: [Windows] When going to fullscreen and back, restore to the resolution you were, not to the fullscreen resolution (r24189)
- Fix: [Windows] When changing the basics of a window (fullscreen, 8bpp/32bpp), and a window already exists, it was forced out of maximise mode, and its resolution/position was reset, often causing unwanted side-effects [FS#5151] (r24188)
- Fix: Town radii were not updated immediately after construction/destruction of houses, resulting in desyncs [FS#5169] (r24183)
- Fix: The population of a town was computed incorrectly for overridden houses when loading a game (r24182, r24181, r24179)
- Fix: The object name from property A was not displayed in the object GUI [FS#5110] (r24178)
- Fix: The arctic 'shops and offices' used the 'church' sprite in one of its four views [FS#5148] (r24177)
- Fix: The object GUI did not draw objects when all objects of a class are disabled (r24176)
- Fix: If you spent hard work on finding an available object ID, you should probably also use it instead of always 0 (r24159)
- Fix: Town producing no cargo at all could spawn passenger subsidies (r24158)
- Fix: The music volume was set too early during startup causing it to be not set correctly (r24155)
- Fix: [Squirrel] Crash when trying to create an array with negative size [FS#5160] (r24153)
- Fix: [NoAI] Do not return the last 'cached' speed of vehicles when they are stopped/crashed [FS#5157] (r24152)
- Fix: [Script] Typo in script documentation (r24151)
- Fix: Glass-sprite of bubble-generator was not drawn anymore for completely constructed tiles [FS#5143] (r24107)
- Fix: Conflicting strategies for resizing the main toolbar and statusbar after resizing the main window [FS#5136] (r24089)
- Fix: Significantly reduce the area that is redrawn for text effects [FS#5103] (r24068)
- Fix: Do not redraw up to 25% of the map when making a new vehicle visible for the first time (r24067)
- Fix: Do not redraw the text effect when nothing changed (r24066)


### 1.2.0 (2012-04-15)

- Fix: When starting GS or AI, always use the settings of the game, not the new-game settings [FS#5142] (r24108)
- Fix: Provide translated comments in the desktop file without language name postfix (r24100)
- Fix: Cloning orders of aircraft with limited range failed [FS#5131] (r24086)


### 1.2.0-RC4 (2012-04-01)

- Fix: Reversing trains while they were entering or leaving a depot could lead to stuck trains [FS#5093] (r24078, r24071)
- Fix: The 'last joined' server was not properly selected anymore [FS#5098] (r24070)
- Fix: Immediately start querying the last joined server instead of waiting for the requery loop [FS#5097] (r24069, r24062)
- Fix: Make the full snowiness level of houses the same as roads and rails [FS#5121] (r24064)
- Fix: With certain versions of GCC and compiler flags the compiler could reorder some code badly causing the 32bpp depot flag not working [FS#5125] (r24063)
- Fix: Do not freeze aircraft mid-flight when skipping to an out-of-range destination [FS#5123] (r24060)
- Fix: Wrong numbering of string parameters causing wrong capacities to be shown [FS#5124] (r24058)
- Fix: Crash when timetabling a maximum travel speed of 0 [FS#5111] (r24053)
- Fix: [NewGRF] Imported GRF sounds were inserted into the wrong slots [FS#5107] (r24052)
- Fix: [NewGRF] Realsprites inside the action 11 block were not skipped correctly (r24050)
- Fix: Improve error messages for the placement restrictions of banks, water towers and toy shops [FS#5095] (r24040)


### 1.2.0-RC3 (2012-03-18)

- Feature: Allow display of baseset textfiles (r24037)
- Feature: Increase the station class limit from 32 to 256 (r24031)
- Fix: After opening a text window with the monospaced font, all other text started glitching (r24038)
- Fix: [NoAI] Reset 'is random' status of temporary variable during saveload as it is not always written to when loading an AI which means it would be taking the 'is random' setting of another AI (r24033)
- Fix: [NoAI] Make AIEngine::IsArticulated return true if the articulated callback flag is set, do not try to run the callback (r24029)
- Fix: Pass cases down into the list of cargoes [FS#5090] (r24024, r24023, r24022)


### 1.2.0-RC2 (2012-03-04)

- Fix: [Script] AI used in names in API for GSOrder [FS#5088] (r24006)
- Fix: Improve rounding when converting display speeds to internal speeds [FS#5079] (r23995)
- Fix: Also reset the font glyph cache when switching blitters (r23992, r23987)
- Fix: [NewGRF] Also display the cargo subtype for vehicles which have no capacity, but a subtype [FS#5076] (r23991)
- Fix: Zero the offsets of disabled zoomlevels, so they do not influence offset calculations (r23989)
- Fix: Invalid reads when scaling an odd-sized sprite smaller (r23986)
- Fix: Inconsistent quit/abandon/exit game/scenario/editor strings [FS#5074] (r23985)
- Fix: Fix the order of lights on the helipad [FS#5082] (r23984)
- Fix: Tarred heightmaps would not be found [FS#5083] (r23983)
- Fix: Do not load a game during UpdateWindows as that might trigger changing the blitter which triggers re-entrant locking (r23980, r23977)
- Fix: [SDL] Palette update was done too late making switching from 8bpp -> 32bpp look ugly (r23978)
- Fix: Sprites of different zoom levels were not always padded correctly to a common size (r23976)
- Fix: Also save the maximum travel speed for the current vehicle order (r23973)


### 1.2.0-RC1 (2012-02-19)

- Feature: [NewGRF] Customisable tunnel portals for rail types (r23952)
- Feature: Timetabled maximum travel speeds for non-flying vehicles (r23947)
- Feature: Readme/licence/changelog viewer for AI and game scripts [FS#5047] (r23936)
- Feature: [NewGRF] 32bpp sprites in GRFs (r23897)
- Feature: [NewGRF] Support for RealSprites with multiple zoom levels (r23890)
- Feature: [NewGRF] Support for container version 2 (r23887)
- Fix: Refittability should never depend on the current capacity of a vehicle [FS#5070] (r23965)
- Fix: Do not look for missing sprites twice during startup [FS#5072] (r23963)
- Fix: [Script] Infinite recursion within a script was not caught properly, so they could cause crashes of OpenTTD instead of the AI [FS#5068] (r23962)
- Fix: [NewGRF] Make the properties for always/never refittable cargo types not behave incremental, but reset them on reassignment (r23960)
- Fix: [Network] Do not allow chat messages from pre-active clients. As they have not got the savegame yet, they will not have the interface to send them either (r23958)
- Fix: [Network] Allow sending chat to pre-active clients as the clients start accepting once they send 'map ok' to the server, which is the same moment we change their status to pre-active [FS#4990] (r23957)
- Fix: When the population of a town changes the town view might even have to change size due to different cargo requirements [FS#5062] (r23953)
- Fix: [NoGo] Never show GSGoal::Question() to spectators [FS#5063] (r23950)
- Fix: Better rounding when converting internal speed to displayed speed (r23945)
- Fix: Also list DEITY signs in the signlist in the scenario editor [FS#5061] (r23943)
- Fix: Infrastructure cache of standard road stops would get messed up when buying a company with them (r23942)
- Fix: Scale infrastructure cost of rail tracks by the total number of all tracks and not independently for each rail type (r23931)
- Fix: [Script] Do not close the parameter window when a script starts [FS#4944] (r23930)
- Fix: Do not accelerate, for smoke purposes, when you reached the track's maximum speed [FS#5053]
- Fix: 32bpp animated blitter was optimised a bit too far regarding not needing to update the colour mapping when (re)initialising the palette [FS#5056] (r23927)
- Fix: [NoGo] Some news messages would cause an assertion to be triggered due to a missing proper location for the viewport of the news message, so only allow building when valid data for the viewport is provided or no viewport is used [FS#5054] (r23924)
- Fix: Consider only the middle tile of a lock for lock-infrastructure costs. The other two tiles may be owned by other companies. Also do not count the middle tile of a lock as canal, independent of whether it is build on ground or river slope (r23920)
- Fix: [NewGRF] When determining the first refittable cargotype according to CTT order, do not rely on the GRF assigning the refit_mask property. Also check for GRFs setting the default_cargo or refittable-cargo-classes or -types properties (r23916)
- Fix: [NewGRF] Do not test validity of cargobits using a mask of cargoslots (r23914)
- Fix: [NewGRF] When testing whether a engine shall only carry the default cargo, check ctt_include_mask for being empty before applying cargo translation (r23912)
- Fix: [SDL] Handle the SDL_VIDEOEXPOSE event to solve issues with SDL 1.3 (r23910)
- Fix: [SDL] Fix keyboard-related segfault when compiling against SDL 1.3 (r23909)
- Fix: [Makefile] Make sure bin/baseset/openttd.32.bmp is removed on make clean (r23908)
- Fix: [Makefile] Let 'make clean --dry-run' not delete Makefiles (r23907)
- Fix: [Windows installer] OpenMSX got downloaded to and extracted in the wrong (non-existent) folder [FS#5045] (r23905)
- Fix: Memory leak every time one clicked a savegame in the load GUI (r23901)
- Fix: [NewGRF] It was not possible to import sounds from a NewGRF later in the load order (r23883)
- Remove: PNG sprite loader; use 32bpp sprites in a NewGRF (r23898)


### 1.2.0-beta4 (2012-02-04)

- Feature: [NewGRF] Give NewGRF defined level crossings and rail depots access to the townzone (r23866)
- Feature: [NewGRF] New algorithm (activated via an engine flag) to determine the capacity of vehicles. This allows vehicles to better control the capacity for cargotypes which they know; and let cargo NewGRFs influence the capacity for cargoes the vehicle NewGRF does not know, but which the vehicle is refittable to due to cargo classes (r23861)
- Feature: [NewGRF] Add cargo property 1D to set the capacity multipliers when refitting vehicles, which do not use callback 15 (r23860)
- Feature: Allow command line options -e and -g to be combined to load saves/scenarios directly into SE (r23839)
- Feature: [NoGo] Allow querying orders of vehicles [FS#4994] (r23837)
- Change: Do not let towns (ever) remove objects [FS#5001, FS#5002] (r23842)
- Change: Make signs placed in scenario editor belong to the GS. That way they are always shown in game and are not editable [FS#4999] (r23835)
- Fix: Generate industry subsidies again [FS#5039] (r23876)
- Fix: [NoGo/NoAI] Scripts with a bad comparator could lock up OpenTTD [FS#5004] (r23870)
- Fix: Make the colour of the dropdown items for opening the vehicle list for which the company has no vehicles looking less horrid [FS#5020] (r23867)
- Fix: Railtype overlays were drawn 'only transparent' on invisible bridges (r23864)
- Fix: Inserting conditional orders for ships checked the wrong orders wrt. maximum distance (r23859)
- Fix: Out of bounds read for slowdown parameter caused desync when railtype >= 4, vehicles were fast, and the original acceleration model was used [FS#5007] (r23855)
- Fix: Infrastructure cache could get out of sync when overbuilding a drive through road stop (r23851)
- Fix: When the network is lagging, you try to copy a vehicle's order but accidentally create a station order and then copy the vehicle's order (before the first command is executed) one could trigger an assertion from the pool [FS#5008] (r23849)
- Fix: When removing road or tram from a tram+road stop, the owner of the road stop's cache was updated instead of the owner of the removed infrastructure (r23847)
- Fix: Infrastructure count for stations was not updated properly on company takeover. And do not count buoys while loading a game either (r23844)
- Fix: Clear NewGRF vehicle cache when their owner changes (r23841)
- Fix: Assertion got hit when destroying a dock when a ship was loading [FS#5000] (r23838)
- Fix: If a vehicle is not refittable to any cargo in the CTT, then pick the first refittable cargoslot (r23836)


### 1.2.0-beta3 (2012-01-21)

- Feature: [NoGo] Allow to chose the goal question window's title from a (small) set of options [FS#4992] (r23827)
- Feature: [NewGRF] Enhance some fatal NewGRF errors with the sprite number that caused the problem (r23809)
- Fix: Loading empty GS strings/translations failed [FS#4996] (r23829)
- Fix: Return early from SlString() for empty strings, before doing invalid things which surprisingly do not break everything (r23828)
- Fix: The detailed performance rating window showed the cargo count of the current quarter instead of the last quarter like the tooltip says [FS#4972] (r23826)
- Fix: Removal of towns with 0 population failed during map generation [FS#4951] (r23819)
- Fix: [Network] Desync due to different NewGRF version at client and server [FS#4962] (r23817)
- Fix: [NewGRF] Textstack was not properly used when storing parameters for the error message window [FS#4969] (r23803)
- Fix: Game lobby GUI not updated when new company information becomes available [FS#4968] (r23802)
- Fix: Reading the UTF-8 BOM from AI/GS files on big-endian machines failed (r23801)
- Fix: Move 'refittable to' text above custom NewGRF text in build vehicle GUI [FS#4958] (r23792)
- Fix: [NewGRF] Resize text panel for parameter description if it does not fit in 4 lines [FS#4960] (r23791)
- Fix: [NewGRF] While we can only show one error per NewGRF, fatal errors should always disable the GRF. Also give those errors precedence over other information (r23789)
- Fix: [NewGRF] Failure to load NewGRF files that use action 0 general prop 15 with a missing language file (r23788)
- Fix: Crash due to genders used for station name in hangar string of Italian translation [FS#4965] (r23782)
- Fix: Under certain circumstances, e.g. a single invalid order, trying to determine the next order state could end up in an infinite loop [FS#4964] (r23781)
- Fix: [Network] Missing naming of some errors[FS#4963] (r23780)
- Fix: Trim all control codes and the likes from strings being passed into the AI. If the AI would be displaying them later we would be showing those control codes as question marks [FS#4957] (r23778)
- Fix: Hide the PCX screenshot format from the options window, if a 32bpp blitter is used (r23775)
- Fix: [NewGRF] Update all cached train properties if a train vehicle enters a new railtype (r23773)


### 1.2.0-beta2 (2012-01-07)

- Feature: [NewGRF] Allow read-only display of NewGRF parameters, if GRF list may not be edited (r23760)
- Feature: [NewGRF] Alternate rail type label list (r23758)
- Feature: Make the default secondary sort method for the server list the number of clients instead of the name (r23710)
- Feature: Try harder to sort text instead of fancy characters in the server names (r23709)
- Feature: Make a distinction between fully zoomed in and default zoomed in screenshots [FS#4916] (r23695)
- Feature: Add ability to adjust brightness of colour after remapping for 32bpp sprites (r23670)
- Feature: [GS] GSGoal::Question(), to ask a question to a(ll) company(ies). It can contain random text, and at most 3 buttons from a collection of 17 (r23731)
- Feature: Australian translation (r23730)
- Fix: Make default timeouts for certain network states lower and configurable [CVE-2012-0049] [FS#4955] (r23764)
- Fix: Check whether a water tile is really empty when overbuilding it with an object [FS#4956] (r23763)
- Fix: The check for duplicate town names was not really working [FS#4951] (r23759)
- Fix: Missing locking causing crash is extreme case when being in the MP lobby [FS#4938] (r23752)
- Fix: [Win32] Work around a possible deadlock when initialising threaded drawing (r23749)
- Fix: Make vehicle variables A8 and A9 always return 0. Returning cur_image is a potential desyncer due to Action1 in static NewGRFs (r23748)
- Fix: Also set 'info' to NULL if 'instance' dies (for both AI and GS); avoids invalid memory reads (r23746)
- Fix: If autorefit fails, count the vehicle capacity nevertheless, if it is already carrying the right thing (r23745)
- Fix: [NewGRF] Check the version of the right GRF [FS#4923] (r23744)
- Fix: [NewGRF] Call CB 15E for all vehicles before actually executing any refit [FS#4906] (r23743)
- Fix: Cheating to different climates messes things even more up than changing NewGRFs in-game so it was removed [FS#4939] (r23733)
- Fix: When cheating into another company, the SignList was not updated [FS#4942] (r23728)
- Fix: Reading memory of a temporary (already deconstructed) object is invalid (r23721)
- Fix: [Script] Show the script debug window also when the game script crashes [FS#4935] (r23720)
- Fix: Extraction of music packs failed [FS#4930] (r23719)
- Fix: [AI] Rescanai caused crash when the AI settings of an AI was opened [FS#4936] (r23718)
- Fix: Ships going to wrong dock location when moving the dock while the game is paused [FS#4927] (r23717)
- Fix: The amount of goals was too low [FS#4928] (r23699)
- Fix: Hardcode the original defaults for loading old savegames if they could totally mess with the game's behaviour [FS#4859] (r23693)
- Fix: Infrastructure count of canals/locks/ship depots was not updated properly when a company went into bankruptcy or was taken over [FS#4921] (r23686)
- Fix: When fitting another engine the cargo capacity of wagons could become lower, causing them to contain more than they should. This caused the cargo transfer from the replaced parts to put even more stuff in the already full wagon. Prevent this from happening by reducing the amount of cargo in the vehicle to the capacity when moving vehicles/wagons around, or when autoreplacing [FS#4912] (r23683)
- Fix: Vehicle numbers got miscounted when autoreplacing failed due to length checks [FS#4914] (r23681)
- Fix: [AI] Prevent removal of the (AI) company the local player is in [FS#4915] (r23680)
- Fix: [Script] Close the editbox of settings when changing an AI, to avoid invalid memory read/write (r23678)
- Fix: [Script] Invalidate AI Parameters window when changing AI [FS#4909] (r23677)
- Fix: When removing road stops the wrong tile was checked for updating the infrastructure cache [FS#4913] (r23676)
- Fix: [Script] The 'Configure' button in the 'AI / Game Configuration' window did not get enabled when activating a GameScript (r23668)


### 1.2.0-beta1 (2011-12-24)

- Feature: Ability to run a game script; a script that controls some of the logic of the game, e.g. to implement goals or tutorials (r23637)
- Feature: Allow to place locks also on river rapids and restore rivers, if locks are deleted [FS#4872] (r23512)
- Feature: Aircraft ranges (r23504)
- Feature: Configurable linewidth in plots (r23497, r22292)
- Feature: Add 'view website' button to the online content and NewGRF windows (r23495, r23492)
- Feature: [NewGRF] Action14 node INFO->URL_ to add an url (r23494)
- Feature: When looking for missing content, automatically select it so you can easily start the download [FS#4827] (r23468)
- Feature: Automatically close the online content window after confirming the download with 'ok' [FS#4827] (r23467)
- Feature: Add 'find missing content online' button to 'load savegame' and 'find network game' windows [FS#4827] (r23465)
- Feature: [NoAI] AIStation.GetStationCoverageRadius(StationID) (r23453)
- Feature: Infrastructure maintenance costs (r23415)
- Feature: Allow to create subsidies for any combination of source and destination types (r23408)
- Feature: Diagonal dragging the rail conversion tool when pressing CTRL [FS#4841] (r23338)
- Feature: Add ability to zoom in to 2x and 4x level (r23316)
- Feature: Settings to restrict viewport zoom levels (r23314)
- Feature: An economy.fund_buildingssetting, to disallow funding buildings (r23303)
- Feature: [NoAI] AITown::GetCargoGoal and AITown::GetGrowthRate to query statistics about a town regarding its growing (r23302)
- Feature: Show on the GUI when a town grows and what the requirements for growing are (r23300)
- Feature: [NewGRF] Properties to always include/exclude cargo types from the refit mask (r23291)
- Feature: A monospaced sprite font for the readme reader (r23288, r23274)
- Feature: Attempt to show a window for downloading the base graphics set if it is missing (r23244)
- Feature: In-game (translatable) readme.txt reader [FS#4780] (r23182, r23178)
- Feature: [NoAI] AICONFIG_AI_DEVELOPER flags to hide AI settings unless gui.ai_developer_tools is enabled (r23169)
- Feature: Always draw fences around field tiles [FS#1824] (r23168)
- Feature: Support for NewGRF version 8 (r23159)
- Feature: [NewGRF] Patch/setting variable 14: get the maximum height of the map (r23158)
- Feature: [NewGRF] Road vehicle property 23 to shorten vehicles without callback usage (r23149)
- Feature: [NewGRF] Allow passing 32bit parameters to 60+x variables (using var 7B). Currently most useful for vehicle var 60 (r23138)
- Feature: [NoAI] AICargoList_StationAccepting [FS#3799] (r23134)
- Feature: [NewGRF] Property for the rail type name (r23129)
- Feature: [NoAI] Allow AIs to query the amount of remaining operations for the current tick (r23118)
- Feature: [NewGRF] Ambient sound effect callback (r23114)
- Feature: Auto-refitting of vehicles during loading at a station when the vehicle allows it (r23089, r23087)
- Feature: [NewGRF] Callback to change refit cost depending on old and new cargo type (r23086)
- Feature: [NewGRF] Use variable 10 to enable vehicle GRFs to draw different sprites on the map and in various GUIs (r23080)
- Feature: [NewGRF] House callback 0x148 (r23072)
- Feature: [NewGRF] House variable 0x64 (r23070)
- Feature: [NewGRF] Long date of last service for vehicles, also available in the purchase list (r23068)
- Feature: A -q command line option to read a savegame, write some general info and exit (r23065)
- Feature: [NewGRF] stringcodes 9A 19 and 9A 20 to print 'short volume' and 'short weight' respectively (r23063)
- Feature: [NewGRF] Allow use of NewGRF text stack during callback 23 (r23040)
- Feature: Support company colour for the airports' runways [FS#4797] (r23010)
- Feature: [NewGRF] Allow to use offsets for all types of action5 except sea shores [FS#4795] (r23004)
- Feature: [NewGRF] Action2 variable 0x62 to get curvature/position difference to the n-th vehicle in vehicle chain [FS#2521] (r22998)
- Feature: [NewGRF] Allow access to other vehicles in the vehicle chain in VarAction 2 (r22997)
- Feature: Display autoreplace status in group GUI (r22985)
- Feature: Display profit icons for groups in the group GUI (r22984)
- Feature: Display the number of vehicles in the group GUI also for the ALL and DEFAULT groups (r22983)
- Feature: Allow road corners on steep slopes (r22968)
- Feature: Allow depots, standard road stops and airports on steep slopes (r22960)
- Feature: [NewGRF] Allow Action4 to change text IDs 0x00D1 to 0x00E0 for feature 48 (r22954)
- Feature: [NewGRF] Extended Action1 format to define arbitrary spriteset IDs (r22926)
- Feature: [NewGRF] Allow referencing spritesets from different Action1 in a single Action2 (r22925)
- Feature: Allow towns to build bridges over canals and rivers (r22899)
- Feature: Resize the tree build GUI to according to tree size (r22862)
- Feature: Conditional order depending on remaining lifetime of a vehicle (r22858)
- Feature: [NewGRF] Allow replacing depot sprites without having to provide rail overlays (r22854)
- Feature: Display separate ocean and canal speeds in the ship purchase list, if they differ (r22850)
- Feature: [NewGRF] Bits 8-31 in station variable 43 (r22848)
- Feature: [NewGRF] Also age wagons and articulated parts (r22816)
- Feature: [YAPF] Take canal/ocean speed fraction of ships into account (r22801)
- Feature: Progress bar for scanning NewGRFs (r22797)
- Feature: [NewGRF] Stringcodes for printing 0-based dates, unsigned words in power units (r22779, r22778)
- Feature: River generation (r22767)
- Feature: [NoAI] AITile::GetTownAuthority() (r22764)
- Feature: [NewGRF] Implement feature 04 property 18 bit 5 (r22746)
- Feature: [NewGRF] Per vehicle custom cargo ageing period (r22713)
- Feature: Display option to hide competitors' signs and station names [FS#4701] (r22708)
- Feature: Add a menu entry for the sprite bounding box debugging feature in the help menu and enable bounding boxes only in conjunction with the NewGRF developer tools (r22675)
- Feature: [NewGRF] Provide random bits in var 0x10 for callback 0x3B in all cases [FS#4690] (r22673)
- Feature: Do not spawn explosion effects when bulldozing in paused mode. They block the view (r22670)
- Feature: [NewGRF] Support for the land slope check callback for stations (r22659)
- Feature: [NewGRF] Custom error messages for object callback 0x157 (r22658)
- Feature: [NewGRF] More default error messages for the industry shape and location callbacks (r22657)
- Feature: [NewGRF] Add water class to the 'land info of nearby tiles' vars (r22655)
- Feature: [NewGRF] Support for ship props 14/15 (ocean/canal speed fraction) (r22639)
- Feature: [NoAI] Add several functions to AICompany to find out performance information (r22584)
- Feature: [NewGRF] Persistent storage for towns (r22569)
- Feature: [NewGRF] Support for station variable 0x69 (r22543)
- Feature: [NewGRF] Advanced sprite layouts with register modifiers (r22518)
- Feature: Save heightmap in scenario editor (r22514)
- Feature: Make the transparency options for industries also affect the effect vehicles created by industries [FS#4625] (r22506)
- Feature: [NewGRF] Implement variable 18 for custom station foundations (r22453)
- Feature: [NewGRF] When NewGRFs are disabled via Action E or due to GRM failure, also display an error in the GUI (r22444)
- Feature: [NewGRF] Allow to filter by town of the current industry when using industry variable 0x68 [FS#4591] (r22434)
- Feature: An advanced setting to specify the default palette to use for NewGRFs without action 14 palette information; this makes the default choice independent from the used base graphics (r22417)
- Feature: Sort the items in the currency dropdown; separate the 'Custom' item with a horizontal line from the rest (r22312)
- Feature: Separate default and NewGRF-supplied townnames with a horizontal line and only sort them within these groups (r22312)
- Feature: [NewGRF] Allow docks to feature company colour (r22293)
- Feature: Apply the same inflation to the initial loan as to the maximum loan. Note that this is no change to the economy; it only saves players some clicks when starting companies in later years (r22253)
- Feature: [NewGRF] Make var 0x48 available in CB 0x15C (r22231)
- Change: [Win32] Move painting the window and doing palette animation into a separate thread (r23482)
- Change: [SDL] Move 32bpp-anim palette animation to the draw thread instead of the single threaded bit of the game loop. This causes a speedup of up to 15% when animation is turned on with the 32bpp-anim blitter (r23451)
- Change: Make the company GUI somewhat smaller if there are no shareholders (r23424)
- Change: [NewGRF v8] Allow translating multiple languages with Action 13 (r23391)
- Change: Bring Squirrel to 2.2.5; besides some nice bug fixes, it mostly solves the sort() issues (r23383)
- Change: Move the 'default' overrides out of the base set in order to ensure they all use the same values (r23232)
- Change: Different directories for base sets and newgrfs. So data to base set or newgrf, and gm to base set (r23219)
- Change: [NewGRF v8] Do not override rail type prop 1B with prop 09 (r23166)
- Change: [NewGRF v8] Format of extra callback info for callback 144 (r23157)
- Change: [NewGRF v8] Use height level units in var 8A of callback 28 (r23155)
- Change: [NewGRF v8] Use height level units in nearby tile info variables (r23154)
- Change: [NewGRF v8] Use height level units in variable 20/A0 (r23153)
- Change: [NewGRF v8] Snow line height table uses values between 0x00 and 0xFF independent of number of height levels (r23152)
- Change: [NewGRF v8] Deprecate callback 11 and 12, and use callback 36 instead (r23151, r23150)
- Change: [NewGRF v8] Unify the return values of boolean callbacks, and check the results for validity (r23147)
- Change: [NewGRF v8] Make callback 22 return a probability to use instead of property 18 (r23146)
- Change: [NewGRF v8] Determine the 'first' refittable cargo of vehicles using the cargo ordering from the cargo translation table (r23145)
- Change: [NewGRF v8] Consider the 'default cargotype' properties as indices into the cargo translation table (r23144)
- Change: [NewGRF v8] Return the translated cargobit in vehicle var 42 (r23143)
- Change: [NewGRF v8] Unify the return values of callbacks returning D0xx texts (r23142)
- Change: [NewGRF v8] Invert result bit 10 of callbacks 149 and 157 to make them consistent with other slope check callbacks (r23141)
- Change: [NewGRF v8] Do no longer apply base cost fallbacks (r23139)
- Change: [NewGRF v8] New result format for callback 16 (r23137)
- Change: [NewGRF v8] Deprecate old-style callback results 0xFF?? (r23136)
- Change: Open the query string window centred as it (almost) always requires your attention [FS#4825] (r23130)
- Change: [NewGRF] Enforce that the default cargo type of a vehicle is one of the refittable cargoes in case of refittable engines (r23077)
- Change: Use the currency -> euro conversion rate for currencies that have been replaced with the euro, so when the switch happens the conversion rate at that point is roughly that of the real world conversion rate (r23056)
- Change: Disable palette animation for pixels with alpha, as the alpha and previous colour information will be lost when the palette is animated (r23016)
- Change: More suitable default news settings instead of everything on 'full' (r22897)
- Change: Always use the DOS palette for drawing, remove the '-i' option for palette selection (r22419)
- Change: Make YAPF the default pathfinder for ships, do not discourage players from using it anymore (r22352)
- Change: Remove pixel limiter for query strings (r22343)
- Fix: Dates cut off in the message history [FS#4896] (r23643)
- Fix: Fix transparency for steel mill, colour translations in some arctic buildings and a wrongly replaced sprites [FS#4892] (r23639)
- Fix: Draw PBS reservations also for bridges and tunnels with railtype overlays (r23586, r23584)
- Fix: Add missing characters for certain languages and the large font [FS#4870] (r23582)
- Fix: Extending a path reservation starting at a partially reserved rail station could fail [FS#4888] (r23564)
- Fix: [NoAI] ScriptSign::BuildSign() returned wrong result if the sign name was too long [FS#4886] (r23516)
- Fix: Drawing of newspaper headlines used different padding than the initial sizing of the window [FS#4884] (r23509)
- Fix: [Squirrel] Provide a proper error message when the _cmp meta-function does not return an integer (r23496)
- Fix: Make autoreplace, autorenew, cloning and autorefit check all articulated parts of a vehicle to find a shared cargo subtype (r23487)
- Fix: In case you already have orders, ignore the vehicles when adding an extra order [FS#4770] (r23484)
- Fix: Replace OS error messages with internal error messages when that is possible [FS#4594] (r23480)
- Fix: Clear the backed up orders of a removed station as well, otherwise one could create orders to a station that was never in the original backupped orders. For example a road vehicle trying to go to a buoy [FS#4876] (r23464)
- Fix: Do not assume all industries that cut trees have tile (0,0) and wait until all tiles of an industry are completed before starting to cut trees (r23458)
- Fix: Mark company window dirty when moving a rail engine creates or deletes a train (r23454)
- Fix: Some airport functions did not take the layout into account resulting in wrong noise levels or nearest towns [FS#4764] (r23441)
- Fix: Perform checks for NFORenum/GRFCodec in configure, including a version check so a proper error can be given when a too old GRFCodec or NFORenum is used [FS#4867] (r23438)
- Fix: Recolouring of some animated colours from the Windows (=least consistent) palette went wrong [FS#4868] (r23433)
- Fix: Prevent windows to be resized beyond the bounds of the (main) window [FS#4842] (r23429)
- Fix: [NoAI] The AIEvent.ET_COMPANY_NEW was only triggered if a company named itself, which seems like a very odd place to do so. Trigger it when the company is created instead (r23398)
- Fix: Bring some more order in the ordering of the windows, e.g. do not let a save or load dialogue get hidden by a news message [FS#4709] (r23336)
- Fix: Road vehicle purchase info failed to display vehicles carrying no cargo [FS#4820] (r23334)
- Fix: Abort building/moving HQ when clicking on the button again, just like when building rail, stations, etc [FS#4851] (r23331)
- Fix: Change the centre of train vehicles to depend on the vehicle length instead of being fixed at 4/8th of the original vehicle length to make sure shortened vehicles do not block tiles they should not block [FS#2379,FS#3569] (r23290)


## 1.1.x

### 1.1.5 (2012-01-14)

- Fix: Make default timeouts for certain network states lower and configurable [CVE-2012-0049] [FS#4955] (r23764)
- Fix: Check whether a water tile is really empty when overbuilding it with an object [FS#4956] (r23763)
- Fix: Missing locking causing crash in extreme case when being in the MP lobby [FS#4938] (r23752)
- Fix: Clear the backed up orders of a removed station as well, otherwise one could create orders to a station that was never in the original backupped orders. For example a road vehicle trying to go to a buoy [FS#4876] (r23464)
- Fix: Do not assume all industries that cut trees have tile (0,0) and wait until all tiles of an industry are completed before starting to cut trees (r23458)


### 1.1.4 (2011-12-05)

- Fix: Savegames made with the Catalan town name generator would trigger a 'savegame corrupt' exception [FS#4866] (r23418)
- Fix: [Network] Do not send chat messages to clients that have not joined yet [FS#4826] (r23337)
- Fix: Assertion could be triggered in case a station was removed just after a vehicle delivered cargo to it [FS#4849] (r23312)
- Fix: Pathfinders go haywire when you build a lock over a ship going perpendicular to the axis of the new lock [FS#4845] (r23284)
- Fix: [NewGRF] Prevent against writing data for unknown fonts (r23283)


### 1.1.4-RC1 (2011-11-20)

- Fix: 3-column view of NewGRF GUI had too much space for certain font sizes (r23251)
- Fix: Ignore special characters, such as the train 'character', when determining a fallback font (r23237)
- Fix: [NewGRF] Make train var 0xF3 consistent with TTDPatch (r23231)
- Fix: Invalidate build vehicle window when changing the setting for wagon speed limits (r23211)
- Fix: [NoAI] Hide AIObject from the documentation as it cannot be used (r23204, r23201)
- Fix: [Network] Unstable sorting in the network list when two servers had the exact same name [FS#4829] (r23202)
- Fix: Oil rigs that 'expired' did not get removed from the station list [FS#4822] (r23199)
- Fix: [Squirrel] replace custom qsort by std::sort to fix stack overflow [FS#4830] (r23190, r23187, r23186)
- Fix: Do not display railway fences between track and waypoints [FS#4627] (r23163)
- Fix: [NoAI] AIOrder did not handle implicit orders correctly in all cases [FS#4823] (r23135, r23133)
- Fix: When any keys on the on-screen keyboard were pressed the text cursor disappeared (r23132)
- Fix: [NoAI] AIOrder::IsCurrentOrderPartOfOrderList return false for valid vehicles and crashed for invalid ones (r23131)
- Fix: [NoAI] calling require() to include a file gave you 100.000 opcodes for free (r23117)
- Fix: Allow accessing the server's client info as well in the admin network [FS#4813] (r23115)
- Fix: [NewGRF] Run StartupEngines() if NewGRFs changed during loading a savegame, just like it is running when NewGRFs are changed during a game (r23083)
- Fix: Account for snow line table when determining the snow line for building houses (r23082)
- Fix: [NewGRF] If a NewGRF overrides a default house the minimum start year for that house was set to 1930 [FS#4794] (r23059)
- Fix: [NoAI] AIOrder::GetOrderCount() did not hide implicit orders (r23057)
- Fix: [NewGRF] When vehicles break down, update the image cache after changing the vehicle state (r23050)
- Fix: Use the same forest-check for the vegetation-map colour as for nearby station names [FS#4810] (r23049)
- Fix: Check that the selected font size is valid the font face in use and choose the nearest size to that selected if not. Font metrics should then just work (r23038)
- Fix: [NewGRF] Strip newlines from NewGRF strings that should not have newlines, e.g. the NewGRF's name [FS#4769] (r23036, r22970)
- Fix: The last custom playlist items went lost when the files in the .obm are not contiguous [FS#4776] (r23035, r23034, r23033)
- Fix: Palette conversion windows to DOS for light house / stadium animated colour was mixed up (r23032)
- Fix: For the admin 'bots' there was no distinction between bankruptcy and manual removal of companies even though the API suggested that [FS#4804] (r23031)
- Fix: Always show a chat message and send an admin packet when a new company is made [FS#4796] (r23030)
- Fix: Pass bottom of dropdown item rather than bottom of dropdown window, so the dropdown gets drawn better with different font sizes (r23018)
- Fix: AI backlog was to short to fully display the backtrace of some AI crashes [FS#4798] (r23012)
- Fix: When the last used server is deleted from the list also clear the last used server if it is the same [FS#4791] (r23011)
- Fix: [NewGRF] Make sure temporary storage is cleared before test and exec runs for DoCommands so NewGRF callbacks cannot change the result between the runs (r22996)
- Fix: [NewGRF] Tile was cleared before the object-placement callback was run, resulting in possible differences in test and exec run [FS#4775] (r22994)
- Fix: [NoAI] Do not return ERR_UNKNOWN when the vehicle would become too long (r22988)
- Fix: Draw buoy sprite without outline on the map, fix minor issues with original graphics (r22974, r22973, r22971, r22962)
- Fix: The savegame description and loading of savegames would crash with savegames from a patched stable (which did not bump the savegame version) [FS#4778] (r22958, r22957)
- Fix: Guard from reading outside the silly name list (r22955)
- Fix: [NewGRF] Properly limit the length of strings in a choice list (r22952)
- Fix: [NewGRF] Do not call CB 32 for disaster, effect vehicles or aircraft shadows/rotors (r22947)
- Fix: [NewGRF] Crash when accessing vehicle var 44 for a non-front aircraft [FS#4781] (r22946)
- Fix: Calculate the size of the start/stop vehicle button correctly (r22941)
- Fix: [OSX] Various OSX 10.7 issues causing OpenTTD to not work [FS#4751] (r22921, r22895, r22893, r22889)
- Fix: [NewGRF] Properties for feature 0x05 were not zeroed for each NewGRF, thus waterfeatures could glitch when the properties were set by a previous NewGRF and the NewGRF assumed the properties to be unmodified (r22918)
- Fix: Old TTO/TTD savegames could get non-stop via orders upon savegame loading, even when those orders did not exist back then. This 'conversion' feature is something for TTDPatch and old OpenTTD savegames [FS#4716] (r22914)
- Fix: The icon would (almost) never be shown for SDL builds [FS#4617] (r22910)
- Fix: The name of the heightmap glitches in the 'play heightmap' window (r22902)
- Fix: Locks would be incorrectly assembled (r22108)


### 1.1.3 (2011-09-15)

- Fix: Prevent authentication bypass for the admin port when a new game is started [FS#4771] (r22934)
- Fix: TTO savegames with any aircraft not in an hangar caused crashes during load (r22915)
- Fix: Windows 2000 and XP without service pack 3 must use the win9x binary/installer; the newer MSVC compiler of the compile farm does not support those versions of Windows anymore [FS#4749] (r22909)


### 1.1.3-RC1 (2011-09-04)

- Add: River graphics for the original base set (r22766)
- Fix: [NewGRF] DCxx text references via the text stack are not allowed, but caused crash [FS#4758] (r22882)
- Fix: Harden memory allocation (r22881, r22880, r22875)
- Fix: Miscalculation of train curve speed limits (r22879)
- Fix: Validate image dimensions before loading [CVE-2011-3343] [FS#4747] (r22878, r22877, r22874, r22873)
- Fix: Report an error in the news if autoreplace/renew fails due to the engine type being no longer available [FS#4712] (r22876)
- Fix: Perform stricter checks on RLE compressed BMP images [CVE-2011-3343] [FS#4746] (r22872, r22871)
- Fix: [NewGRF] Variables 40 and 81 of callback 18 are not the same as 80 (r22867)
- Fix: [NewGRF] Generic callbacks shall chain to the next GRF when the callback fails (r22866, r22865)
- Fix: Perform stricter checks on some commands [CVE-2011-3341] [FS#4745] (r22845)
- Fix: Harden savegame load against too many AI config settings [CVE-2011-3342] [FS#4748] (r22843)
- Fix: Compilation with GCC 4.7 (r22832, r22728, r22719)
- Fix: Allow to demolish aqueducts built in the scenario editor [FS#4741] (r22821)
- Fix: Towns expanding from the 'wrong' side of a tunnel or bridge [FS#4731] (r22810, r22809)
- Fix: [NewGRF] String codes for dates should use unsigned words, like old OpenTTD did before it learned dates before 1920 (r22774)
- Fix: [NoAI] Clarify the meaning of AIStation::IsWithinTownInfluence(), AITile::IsWithinTownInfluence() and AITown::IsWithinTownInfluence() [FS#4702] (r22763)
- Fix: [NewGRF] Also free allocated depot tables of NewGRF airports (r22760)
- Fix: [NewGRF] Invalid memory access when querying the grfID of the default objects [FS#4730] (r22757)
- Fix: When marking tile selections dirty, use the height information of the corners instead of the surface slope. This is more accurate when the foundation is kind of undefined [FS#4727] (r22755)
- Fix: Make aircraft point to the exit when leaving the hangar [FS#4696] (r22743, r22742, r22741)
- Fix: Display the size of the levelled platform in the measurement tooltip of terraforming operations [FS#4708] (r22740, r22739)
- Fix: Setting company passwords via the GUI on servers (including starting a company with the default password) failed, so no client could join that company [FS#4722] (r22738)
- Fix: [NewGRF] The construction stage sprites were incorrectly selected in cases other than 1 or 4 sprites per set (r22731)
- Fix: [NoAI] AITile::GetCargoAcceptance, AITile::GetCargoProduction and AIRail::BuildNewGRFRailStation did not check the cargo argument for validity (r22726)
- Fix: [NewGRF] Always draw NewGRF supplied texts with a default colour (r22725)
- Fix: [NewGRF] Do not restrict AdvVarAct2 to 255 operations (r22723)
- Fix: If there is no point in opening the rail/air toolbar, do not open it for people who use hotkeys either rather than only for those using GUI elements (r22716, r22715, r22714)
- Fix: [NoAI] Allow AIAirport::GetNoiseLevelIncrease() also for expired airports [FS#4704] (r22710)


### 1.1.2 (2011-08-14)

- Fix: Some corrupted savegames could crash OpenTTD instead of showing the 'savegame corrupted' message [CVE-2011-3342] [FS#4717] (r22737, r22736)
- Fix: [NewGRF] Triggering NOT_REACHED when playing with a NewGRF that supplies genders/cases for a language that was not installed [FS#4718] (r22735)


### 1.1.2-RC2 (2011-07-30)

- Fix: Cost of adding an extra road type to a bridge or tunnel was undercalculated [FS#4680, FS#4681] (r22700, r22699)
- Fix: Only insert cleared object tiles into _cleared_object_areas if clearing actually succeeds, else subsequent tests of the same tile will be skipped and considered successful [FS#4694] (r22698)
- Fix: When building a house it could be built at the wrong place if multitile houses failed some tests (r22697)
- Fix: [Network] Failed network address resolving could trigger temporary freezes [FS#4697] (r22696, r22695)
- Fix: [NewGRF] The override managers were not reset in some cases like creating a new scenario [FS#4691] (r22693)
- Fix: [NewGRF] Aircraft defined with IDs above the default aircraft's always defaulted to passenger cargo (r22690)


### 1.1.2-RC1 (2011-07-24)

- Change: [NewGRF] Only allow access (via hotkey and menu) to the bounding box visualisation when NewGRF developer tools are enabled (r22675)
- Fix: [NewGRF] Disallow accessing variable 1B in network games due to desync reasons (r22682)
- Fix: Switching from a red to a white highlight (by switching to another tool) without switching the highlight mode (HT_RECT etc.) did not mark the selection dirty [FS#4670] (r22649)
- Fix: [NewGRF] Parameters from NewGRFs were not properly parsed in all cases [FS#4599] (r22648, r22630, r22629, r22628, r22627)
- Fix: GetSection() does not return a LockPart [FS#4678] (r22645)
- Fix: [NewGRF] Disallow building NewObjects on water tiles owned by another company (r22643)
- Fix: [NewGRF] Disable the 'set parameters' button in the NewGRF GUI, if the GRF specifies to have no parameters and one would not be able to set any parameters anyway (r22642)
- Fix: Keep the previous owner of the upper and lower lock parts if they are built on existing water (r22638)
- Fix: [NewGRF] Airports should not expose the tile specific random bits of the north tile. Only airport tiles should access those (r22636)
- Fix: [NewGRF] Correctly reseed random bits of industries and industry tiles (r22635, r22634)
- Fix: [NewGRF] Implement variables 25 and 7F for railtypes (r22633)
- Fix: [NewGRF] Additional text in fund industry window is NewGRF supplied and thus should have a default colour (r22631)
- Fix: Also initialise _old_vds with newgame settings; TTD savegames do not contain these settings [FS#4622] (r22626)
- Fix: Do not zero the orders of disaster vehicles when converting savegames [FS#4642] (r22625)
- Fix: When closing an AI company the local player cheated to, we need to cheat them to another company [FS#4654] (r22624, r22623)
- Fix: When closing down companies their shares in other companies must be sold even if share trading is disabled at that point of time (r22622)
- Fix: When asking the user to confirm an unsafe unpausing, there is no need to execute a command if 'no' is chosen. This also prevents crashing when clicking unpause while the confirm window is shown (r22621)
- Fix: Enforce refit orders to be 'always go to depot' orders; service-only and stop-in-depot orders make no sense with refitting [FS#4651] (r22620)
- Fix: Consider the size of the vehicle sprite for the lineheight in the company GUI. This also makes the widget containing the sprite not skip drawing it, if the bounds of the widget are outside of the drawing area though the sprite actually needs drawing [FS#4662] (r22619)
- Fix: When changing difficulty settings over the network, do not just reopen the difficulty window if any game options window is opened; instead invalidate them properly [FS#4653] (r22618, r22617)
- Fix: [NewGRF] If callback 33 returns a value out of range, no sound effect shall be played [FS#4656] (r22614)
- Fix: Use rotated heightmap sizes for reporting scaling problems [FS#4663] (r22608)
- Fix: Do not show cargo accepted/produced in the new station window when no tiles are selected (mouse hovering a window or toolbar) [FS#4647] (r22595, r22593)
- Fix: Add active NewGRFs to the list of available ones when selecting the empty preset [FS#4644] (r22594)
- Fix: Reading of heightmaps with uncommon BMP formats failed due to uninitialised variables [FS#4645] (r22592)
- Fix: PBS order forecasting modified the current order index in case of a goto-nearest-depot order and no depot could be found [FS#4641] (r22589)
- Fix: Remove BaseStorageArrays from _changed_storage_arrays on destruction (r22583, r22551)
- Fix: Do not increment STL iterators after they have been invalidated (r22582)
- Fix: Do not lower the arrow buttons in the NewGRF/AI parameter windows if they are clicked when disabled (r22553, r22499)
- Fix: Clear airport persistent storage on construction/removal of airports (r22552)
- Fix: Possible crash when opening the airport build window for the first time [FS#4619] (r22538)
- Fix: Replace the half small airport structure on the intercontinental airport with some grass [FS#3494] (r22537)
- Fix: Documentation omission regarding admin protocol [FS#4632] (r22536)
- Fix: [NoAI] Doing rescan_ai in a game with running AIs caused a crash [FS#4631] (r22534)
- Fix: Do not create an implicit order if the current order is the first order in the order list and we visit the station of the last entry of the order list (r22532)
- Fix: MinGW 64 related compilation issues [FS#4623] (r22522, r22491, r22490, r22489)
- Fix: The layout selectors of the airport build GUI did not latch properly (r22497, r22495)
- Fix: Callback result for airport layout name was incorrectly used (r22496)
- Fix: Airport preview sprite can depend on the layout, so update the cached SpriteID when the layout changes (r22494)
- Fix: Engine IDs for coal and mail wagons were swapped in the TTO savegame conversion [FS#4622] (r22487)
- Fix: The caption of centred windows could be moved out of the main window and thus become inaccessible when resizing the main window (r22485, r22484)
- Fix: No client error packet was sent to the admin bots [FS#4585] (r22384)


### 1.1.1 (2011-06-01)

- Change: Automatic orders are better called implicit orders as no real order influencing path finding is added (r22474, r22473)
- Fix: Only try to insert implicit orders for ground vehicles. Aircraft may reach unscheduled terminals when skipping orders [FS#4624] (r22492)


### 1.1.1-RC1 (2011-05-15)

- Feature: [NewGRF] Allow to filter by town of the current industry when using industry variable 0x68 [FS#4591] (r22434)
- Change: Improve the speed of YAPF by tweaking hash tables size (r22351, r22350, r22348)
- Change: Show one digit of the fractional train length in the depot (r22336, r22305, r22304, r22303)
- Fix: When determining the executable path failed, the working directory was used instead, circumventing the not-home-directory check [FS#4613] (r22465)
- Fix: [Windows] Prevent a crash when launching OpenTTD with -d from a MSYS console [FS#4587] (r22464)
- Fix: Update the saveload window immediately after scanning a new directory, so queued events reach the window when already updated [FS#4615] (r22463)
- Fix: [NewGRF] The c and p parts of station vars 40, 41 and 49 were incorrect for large stations (r22455, r22286)
- Fix: [NewGRF] Zero register 0x100 as specified before resolving custom station foundations (r22452)
- Fix: Do not 'log' the NewGRFs in the screenshot when in the menu [FS#4610] (r22450)
- Fix: [NewGRF] When GRFs are disabled via Action E or due to GRM failure, also display an error in the GUI (r22444, r22443)
- Fix: [NewGRF] Do not popup fatal NewGRF error messages in the intro screen. The GRFs are not going to be activated there anyway and the GRF settings GUI will not display the errors either (r22442)
- Fix: Catenary was drawn incorrectly next to level crossings with foundations (r22437)
- Fix: [NewGRF] Apply railtype property 12 (station graphics) also to station groundsprites from action 1 (r22436)
- Fix: Git revision detection would return too much when tags are involved (r22435)
- Fix: [NewGRF] When action14 specified different values for the palette, the values were OR-ed. Use the last set value instead (r22416)
- Fix: [Network] Kicking yourself via remote console crashes the server [FS#4606] (r22414)
- Fix: [NewGRF] Make sure the action2 ID of a generic feature callback is valid (r22409)
- Fix: Check the availability year of all houses, not just the NewGRF houses, when making sure that at least one is available onwards from year 0 [FS#4581] (r22389, r22300, r22299)
- Fix: When a game uses a lot of NewGRFs the buffer for storing that information in the PNG is too small (r22388)
- Fix: Windows' recv seems to return 'graceful closed' before having passed the remaining buffer which causes OpenTTD to think all connections are 'incorrectly' terminated, i.e. without the 'I am leaving' packet from the client. So let the client wait a tiny bit after sending the 'I am leaving' packet and before gracefully closing the connection [FS#4601] (r22387)
- Fix: When the last AI company gets removed, the 'dead' state was not reset in the AI debug window [FS#4602] (r22386)
- Fix: Recolouring of silicon bridge was done incorrectly (r22380, r22379, r22378)
- Fix: Crash when clicking a removed company in the vehicle list dropdowns [FS#4592] (r22373)
- Fix: Keep better accounting of the order in which clients joined; client cannot be starved from joining and they get shown the amount of clients waiting in front of them (r22372, r22370, r22369, r22368, r22367, r22366, r22365, r22364, r22363, r22362, r22361)
- Fix: Make sure saving has completely and utterly finished before starting a new one. Otherwise you could start a save, which would be marked as done by the previous save stopping and then yet another save could be started... and that could create a deadlock [FS#4596] (r22371)
- Fix: Delete the client list popup when the client got removed (instead of previously selecting some other client) (r22360, r22359, r22358)
- Fix: When inserting automatic orders, do not create consecutive duplicate orders (r22333, r22332, r22331, r22330, r22329, r22328, r22327)
- Fix: Destinations of conditional orders were update incorrectly when deleting orders in front of the conditional orders, if the target order was the order just before of the conditional order (r22326)
- Fix: Vehicles skipped orders when inserting automatic orders failed (r22324)
- Fix: [NewGRF] When determining refittability use the cargo translation table of the GRF setting the refitmask instead of the GRF defining the action 3 (r22316)
- Fix: Make road vehicles, ships and aircraft skip orders if they are leaving a depot and heading to the same one again; just like trains (r22309)
- Fix: Waiting on a server could kick the client, or rather the client would kick itself due to an unexpected packet [FS#4574] (r22308)
- Fix: When drawing the town authority window, check whether the availability of the actions changed, and force a complete redraw in that case (r22307)
- Fix: The 'freeform edges' setting could be enabled when there were buoys on the northern border [FS#4580] (r22297)
- Fix: Reset Window::scrolling_scrollbar when raising scrollbar buttons [FS#4571] (r22294)


### 1.1.0 (2011-04-01)

- Fix: In the scenario editor you could build a ship depot using the appropriate hotkey. Removing that depot causes an assertion to trigger [FS#4558] (r22266)


### 1.1.0-RC3 (2011-03-18)

- Fix: New game settings were applied too early when starting a game via a heightmap [FS#4557] (r22259)
- Fix: Do not resort town, industry and signs list directly in OnInvalidateData(). There might be a scheduled rebuild which needs execution first. So, only set a trigger for resorting [FS#4546] (r22249, r22248, r22247, r22246, r22245, r22244, r22243, r22242, r22241, r22236, r22228, r22227, r22226)
- Fix: [NewGRF] Object variable 0x48 was not available in callback 0x15C (r22231)
- Fix: Compilation when compiling with --disable-ai (r22222)
- Fix: When downloading a file via HTTP failed mid-way and OpenTTD fell back to the old system the partial downloaded amount would be counted twice [FS#4543] (r22208)
- Fix: The 'center' (for movement) of vehicles is (currently still) always at 4/8th original vehicle length from the front, so trains should stop at the same location regardless of the length of the front engine [FS#4545] (r22206)
- Fix: Make the base costs for building and demolishing NewObjects also local to the individual NewGRFs (r22204)
- Fix: Removing a station order could stop when removing first automatic order (r22200)
- Fix: Invalidate the object build window when using the date cheat (r22193)


### 1.1.0-RC2 (2011-03-04)

- Fix: Following a vehicle with a very high VehicleID was impossible (r22181)
- Fix: [NewGRF] Memory leak if an industry NewGRF had more than one prop A or 15, or a station NewGRF had more than one prop 09 (r22175, r22165)
- Fix: [NewGRF] Disable a station NewGRF when it contains an unterminated spritelayout in action0 prop 08 instead of crashing (r22164)
- Fix: Building a station part adjacent to both an existing station and a rail waypoint failed [FS#4541] (r22163)
- Fix: No update of NewGRF window when unknown GRF name becomes available [FS#4533] (r22162)
- Fix: [NewGRF] Industry prop 0x11 is 4-bytes long, not 3 bytes (r22157)
- Fix: Stations/infrastructure were not properly sold on some clients during bankruptcy [FS#4529] (r22154)
- Fix: The Greek translation did not work as it breached the 200.000 bytes 'limit' for loading language files [FS#4536] (r22153)
- Fix: Windows video driver crashed when it could not go to full screen at the resolution of the configuration file when starting OpenTTD [FS#4521] (r22149)
- Fix: Do not run savegame conversion during SlNullPointers; the pointer might not be converted or be NULL at that point (r22146)
- Fix: Some valid keycodes were ignored along with the invalid ones (r22142)
- Fix: When commands need to invalidate windows, process these events asynchronously before the next redraw. Calling window code directly from command scope uses wrong _current_company and might issue nested DoCommands() which interfere with the running command [FS#4523] (r22141, r22140, r22135, r22134)
- Fix: [NewGRF] Skipping only the invalid part of an action14 failed, the rest of the action was skipped instead (r22138)
- Fix: Spectators had crashes when closing buoy windows (r22131)
- Fix: Build-station-window showed wrong selection when reopening [FS#4530] (r22128)
- Fix: Canals would get drawn as land in the smallmap when using the owner window (r22127)
- Fix: The animation-ness of two goldmine tiles were swapped, causing the wheeltower to not work properly, and the bottom corner to show the wrong sprite [FS#4528] (r22125)
- Fix: CommandQueue::Pop() did not update 'last'; popping the last item caused the queue to disconnect unless there was only one item [FS#4522] (r22123)
- Fix: When a NOT_REACHED in saveload can be reached due to an invalid savegame, use SlErrorCorrupt instead. In other words, do not crash but show an error message (r22122)
- Fix: In case of high frame_freq one could get commands executed after a new network game was started (r22121)
- Fix: [NoAI] Prevent AIs from getting consistently over their allowed amount of operations by subtracting the amount they went over 'budget' from the budget for the next 'tick' (r22120)
- Fix: The refit window was not correctly updated after selecting with Ctrl+Click [FS#4525] (r22118)
- Fix: CanRemoveRoadWithStop() failed for _current_company = OWNER_TOWN, and for OWNER_NONE-owned road (r22117)


### 1.1.0-RC1 (2011-02-18)

- Feature: [NewGRF] Test all possible industry layouts during construction and prospecting [FS#4131] (r22012, r22010)
- Feature: Wheel scrolling in the console (r21982)
- Feature: Console command to reset the engine pool. It removes the traces of engines which are no longer associated to a NewGRF, and can be used to e.g. 'fix' scenarios which were screwed up by the author. You can only use it when there are no vehicles in the game though (r21975)
- Feature: Add a setting to enable/disable funding local road reconstruction (r21974)
- Feature: Introduce 'minimal' number of industries as a replacement for the old 'none' setting in the new game window (r21969)
- Change: When loading old savegames with long trains set the maximum train length to the length of the longest train (r22061)
- Change: Always report mammoth trains are disabled to NewGRFs, and allow the maximum train length to be modified in multiplayer as well [FS#4471] (r22004)
- Fix: Remove invalid keycodes when reading hotkeys.cfg [FS#4510] (r22094)
- Fix: The server list did not get sorted with one item in it, so the 'position in the list' variable was never updated causing problems when using the keyboard shortcuts for scrolling [FS#4514] (r22093)
- Fix: When deleting towns, only relocate objects during DC_EXEC (r22087)
- Fix: [Windows] If fullscreen fails with current resolution, use desktop resolution [FS#4489] (r22081)
- Fix: The owner view of the smallmap was not updated after a company colour change (r22079)
- Fix: Maximum train length interfered with wagon replacement when wagon removal was turned on [FS#4499] (r22078)
- Fix: NewGRFs with invalid multi-tile houses could cause a valid 1x1 house following it to be seen as multi-tile, causing crashes [FS#4501] (r22075)
- Fix: Immediately update the train weight when you change the multiplier for train cargo weight (r22073)
- Fix: Some hotkey names in hotkey.cfg for the scenario editor toolbar were completely bogus (r22071)
- Fix: Crashes when disconnecting after requesting the map [FS#4503] (r22070)
- Fix: Delete all savegame packets, not just the first one (r22069)
- Fix: Return 'connection lost' instead of 'okay' when SendPackets closed the connection, so we do not try to do anything else with the closed socket (r22068)
- Fix: Do not hold a mutex when sending packets and thus possibly closing the connection as that wants to acquire the mutex again (r22067)
- Fix: Verify we can allocate an Order, OrderList, CargoPacket, CargoPayment, and others before we actually try to do so (all corner cases) [FS#4468] (r22066, r22057, r22047, r22042, r22040, r22033, r22031, r22026, r22025, r22024, r22023, r22022)
- Fix: Crash when disconnecting and reconnecting while the server is still saving the savegame [FS#4497] (r22064)
- Fix: Memory leak when saving with LZMA or zlib fails mid-way (r22062)
- Fix: Make the send chat message window follow the position of the status bar (r22059)
- Fix: Metric and imperial HP are not the same. As imperial HP are used internally, set a conversion rate for metric HP [FS#4408] (r22056)
- Fix: [Squirrel] Some invalid squirrel code caused the squirrel compiler to crash [FS#4490] (r22055)
- Fix: The land area information window was not updated after a language change (r22053)
- Fix: Roads under road stops would get a wrong owner after overbuilding (r22051)
- Fix: In ancient savegames, e.g. TTO savegames, non primary vehicles (wagons and such) could have unitnumbers or even orders. However, these orders would not be updated when a station is removed. As such some savegames have wagons with current orders to invalid stations which triggers trouble in the load conversion. So, trash any orders/unitnumbers a non-primary vehicle has [FS#4496] (r22050)
- Fix: [NewGRF] Company 0 does not always exist, so put temporary vehicles in a valid company (r22048)
- Fix: Make sure order indices stay in range when copying, sharing, unsharing or deleting all orders [FS#4487] (r22046)
- Fix: Update the consist cache when a part of a train is flipped in the depot [FS#4493] (r22044)
- Fix: Invalidate the right windows when a part of a train is flipped in the depot (r22043)
- Fix: Tab completion in chat did not cycle through all possible options (r22038)
- Fix: Crash when watching the vehicle view of a vehicle that has multiple sequential nearest depot orders (or consists of a single nearest depot order) when there is no depot with index 0 [FS#4488] (r22034)
- Fix: The server list got not resorted/redrawn after NewGRFs were downloaded [FS#4482] (r22029)
- Fix: When paused and having the allowed actions while paused setting on 'no actions' cheating money would fail [FS#4479] (r22016)
- Fix: Only show one AI per unique ID instead of all versions in the output of 'openttd -h' (r22007)
- Fix: Smoke/sparks of trains would be shown under bridges, or rather through bridges [FS#4480] (r22006)
- Fix: When the difference between force and resistance is smaller than the mass(*4) there would be no acceleration anymore, even when at higher (or lower) speed the force and resistance balance out better [FS#4473] (r21997)
- Fix: [YAPF] Under some circumstances vehicles could be lost [FS#4472] (r21996)
- Fix: [NewGRF] Make computations of closest-land/water-distances handle waterish tiles more correctly (r21994)
- Fix: When building a lock on dry land costs for clearing water were deducted rather than for building canals (r21993)
- Fix: AIs trying to change the AIOF_GOTO_NEAREST_DEPOT flag for existing orders triggered an assert. Explicitly forbid this as precondition for SetOrderFlags [FS#4467] (r21992)
- Fix: The share/copy-orders-cursor was not updated to refer to the new vehicle when it got autoreplaced/-renewed [FS#4466] (r21991)
- Fix: Vehicle status bar glitches on speed changes (r21989)
- Fix: Scrolling of the console in pages used wrong line height and scrolled too much (r21979)
- Fix: Redraw the town authority window after modifying town authority settings (r21973)
- Fix: Crash when a multiplayer company goes bankrupt with 'you' in it [FS#4464] (r21970)


### 1.1.0-beta5 (2011-02-04)

- Feature: GUI setting to disable reversing at signals (r21962)
- Feature: Not loading and not unloading is now possible (r21961)
- Change: [NewGRF] Disable the flipping of train engines/wagons in the depot by default for NewGRFs [FS#4462] (r21966)
- Change: Show the length of vehicles in tiles, instead of half tiles in the depot (r21960)
- Change: Replace longbridges settings with custom maximum bridge and tunnel length setting (r21959)
- Change: Randomise the vehicle a small UFO targets, do not use the one with lowest index (r21949)
- Fix: Do not count the number of vehicles but the length of vehicles to (configurably) limit train length [FS#4461] (r21960)
- Fix: [NewGRF] Reset the carry flag every 4 bytes in Action 6 when adding more than one variable (r21951)
- Fix: Road vehicle was moved under the bridge when it was destroyed by an UFO while on a bridge (r21948)
- Fix: Crash when converting a savegame with vehicles crashed in a tunnel entry, or with vehicles reversing there (r21947)
- Fix: Funny behaviour when a road vehicle reverses while overtaking, so abort the overtake attempt when reversing the road vehicle [FS#4447] (r21946)
- Fix: Not all vehicles should be tested to be inside a tunnel upon savegame load [FS#4460] (r21940)
- Fix: Do not remove existing road/tram bits when overbuilding stops of the opposite road type [FS#4457] (r21936)
- Fix: Allow to overbuild road stops which are built over trams (r21935)
- Fix: Automatic orders behave now stable wrt. service orders and are not added or removed depending on the need of servicing [FS#4440] (r21933)
- Fix: The town window would not be invalidated in the scenario editor if the ground changed and thus the required cargoes for town growth [FS#4554] (r21929)
- Fix: Converting an expensive rail type to a cheap one could give more money than removing and rebuilding cost (r21919)
- Fix: Languages improperly sorted in the 'start server' window [FS#4443] (r21918)
- Fix: The minimum speed needed for (realistic) acceleration to work properly can sometimes be more than the (temporary) maximum speed causing Clamp to 'fail'. Make sure that the minimum speed always overrules the maximum speed [FS#4442] (r21916)
- Fix: Include the capacity of non-refittable vehicles in the refitted-capacity, if their cargo matches (r21904)
- Fix: Do not count articulated parts when passing the number of vehicles to refit to the command. That may exceed 8 bits (r21902)
- Fix: [NoAI] Hide automatic orders from AIs as they have no way of dealing with them (r21900)
- Fix: Do not show a vehicle selection in the RefitWindow for refit orders. You cannot select anything anyway (r21899)
- Fix: Using a pointer-iterator and adding things (thus reallocating) to the iterated array caused OpenTTD to crash on invalid pointers [FS#4438] (r21898)
- Fix: Only some scenarios from the main scenario folder and no heightmaps could be started in the 'start server' window [FS#4421] (r21892)
- Fix: Crash when scrolling outside of the main window (with some video backends) [FS#4434] (r21889)
- Fix: [NewGRF] String codes 0x80 and 0x81 were broken since the typechecking of string parameters [FS#4422] (r21885)
- Fix: When a train after reversing ended at the last bit of a bridge ramp and directed outside the bridge, it could still have track set to TRACK_BIT_WORMHOLE (r21880)
- Fix: When a single-vehicle train was reversed while on a slope, its GOINGUP/DOWN were not swapped (r21874)
- Remove: Settings for vehicle speed in the vehicle view, long date in status bar, drawing of bridge pillars, support for depot orders, time tabling and joining of stations upon building (r21958, r21957, r21956, r21955, r21954)
- Remove: The non-uniform stations setting; it has been broken for over a year, and thus not used [FS#4456] (r21953)


### 1.1.0-beta4 (2011-01-21)

- Feature: [NewGRF] Rail type property to influence sorting of rail types in the drop down list [FS#4394] (r21866)
- Feature: [Network] Console command to change the password of other companies for servers [FS#4368] (r21855)
- Feature: [NewGRF] Introduction dates/required types for rail types; e.g. introduce a particular rail type in 1960 (or when a vehicle using it is introduced), but also allow limiting its introduction to only happen when the required railtypes are available [FS#4393] (r21842)
- Feature: Limit vehicle lateness to the length of a full timetable cycle, e.g. when a cycle takes 50 days and the vehicle is 65 days later reduce the lateness to 15 days (r21832)
- Feature: After building a road or tram bridge/tunnel, connect it to any existing road or tram (r21778, r21777)
- Feature: Display NewGRF object sprites during object picking (r21772)
- Feature: Display NewGRF station sprites during station picking (r21755)
- Change: Allow LMB scrolling with the mouse outside of the extra viewport instead of cancelling scrolling when going slightly over the edge (r21838)
- Change: Only show rail/road types that will eventually be available in-game. For example do not show trams when there is no tram NewGRF loaded (r21817)
- Change: Keep aqueducts and road/tram tunnels and bridges after removing a company (r21780)
- Fix: Distant-join station would build at the wrong location when having persistent building turned on and selecting a 'second' location for the station tile [FS#4430] (r21864)
- Fix: Slowing down of trains was done by reducing the speed by 10%, but also when you are just 1% too fast, so limit the slowdown till the new maximum speed [FS#4423] (r21847)
- Fix: Left-mouse-button dragging would switch over to other viewports instead of staying locked to the viewport you started on [FS#4419] (r21837)
- Fix: When a train was reversed while inside a tunnel/bridge, it would not have (re)set the GOINGUP/DOWN bits after leaving the tunnel/bridge (r21836)
- Fix: Desync debug savegames might not be actually saved in case threading is enabled, which is enabled by default [FS#4427] (r21833)
- Fix: Service orders for trains/aircraft would (sometimes) not get a time when autofilling [FS#4414] (r21831)
- Fix: Crash with the small map window on big endian platforms [FS#4417] (r21830)
- Fix: The expectations from the 'always build infrastructure' setting name/description did not match the behaviour [FS#4007] (r21826)
- Fix: Allow dragging of combo signals (again) [FS#4378] (r21816)
- Fix: [YAPF] Apply a pathfinder penalty for back of one-way path signals so those are not preferred over other possibilities [FS#3908] (r21815)
- Fix: Check GRF version from action 8, and disallow usage of GRFs with versions above 7 (r21814)
- Fix: Crash when displaying the owner view [FS#4411] (r21813)
- Fix: Do not create automatic orders when there are no manual orders, and remove unreached automatic orders when reaching an ordered waypoint or depot [FS#4404] (r21809, r21808)
- Fix: Loading a TTO savegame failed after loading a TTDP savegame (r21799, r21798)
- Fix: The size (in characters) of the string inputs was too small for loading some TTD savegames (r21797)
- Fix: Drive through road stop state was not properly converted from TTDPatch savegames [FS#4398] (r21796)
- Fix: Broken usage of GetTileOwner() caused wrong conversion of old savegames (r21793)
- Fix: Terraforming limit was off-by-one when terraforming a single tile height [FS#4407] (r21791)
- Fix: TTDPatch savegames can have train waypoints encoded as buoys [FS#4398] (r21790)
- Fix: When the font misses the fallback character '?', use the sprite font's '?' instead [FS#4405] (r21789)
- Fix: Crash due to invalid rail station width and height data stored in TTDPatch savegames [FS#4398] (r21786)
- Fix: Crash when converting savegame with custom waypoint name (r21784)
- Fix: Diagonal tile iterator failed for A * 0 selections [FS#4396] (r21768)
- Fix: Do not limit tile clearing during bankruptcy [FS#4397] (r21767)
- Fix: PBS reservation was not shown on road crossings with NewGRF railtypes [FS#4369] (r21765)
- Remove: The 'stopall' console command, as its functionality was broken. Group start/stop commands can be used instead [FS#4409] (r21804)


### 1.1.0-beta3 (2011-01-09)

- Feature: Configurable limit amount of tiles that can be cleared/terraformed by a company [FS#4331] (r21728)
- Feature: Show a list of companies in the owner legend and allow them to be toggled for visibility (r21720, r21718)
- Feature: Console command 'list_ai_libs' to get a list of recognised AI libraries [FS#4372] (r21703)
- Feature: Allow changing the AI configuration in the scenario editor / in game [FS#4362] (r21696)
- Change: Tune 'realistic' acceleration even more to make more trains reach their top speed, and make it behave more like TTDPatch (r21712)
- Change: Display the minimum height of the tile in the LandInfo window instead of the height of the northern corner. So it is more useful for NewGRF and AI developers, and maybe more transparent for players (r21711)
- Fix: The diagonal iterator would iterate twice over some tiles [FS#4395] (r21747)
- Fix: [NewGRF] Canal variable 83 accessed water random bits also for non-water tiles (e.g. watery industries or objects) (r21746)
- Fix: [NewGRF] Canal variable 80 shall return consistent heights within a lock (r21745)
- Fix: Allow Ctrl+Clicking automatic orders for scrolling to their destination (r21744)
- Fix: Coast tiles were not drawn under bridges [FS#4386] (r21743)
- Fix: Make clearing refit orders work again [FS#4388] (r21739)
- Fix: Start loading when cur_order_index points to the destination station, i.e. after deleting not-reached automatic orders [FS#4384] (r21738)
- Fix: A loading order was also marked as 'not part of orders' when the order before the current order was deleted (r21737)
- Fix: Admin bots were not always notified of password changes [FS#4377] (r21727)
- Fix: Vehicle sprite was cached into a 16 bit variable, causing incorrect sprites to be displayed (r21709)
- Fix: [NewGRF] Report TTDPatch flag 4A (newobjects) as set (r21708)
- Fix: The old ship pathfinder is too stupid to provide 'lost' notices; it would even get lost while following its own path [FS#4370] (r21706)
- Fix: Do not perform any more checks after the connection is closed [FS#4374] (r21704)
- Fix: Changing AI settings ingame was impossible when the difficulty level was other than custom (r21694)
- Fix: Due to an error in the Debian changelog building of Debian/Ubuntu packages failed (r21682)


### 1.1.0-beta2 (2010-12-31)

- Feature: Command logging using the admin interface (r21668)
- Feature: Concept of automatic station orders; add stub orders for intermediate stations and remove them when not visiting them anymore. This allows you to see what trains visit a station without actually having to order a vehicle to stop at all stations (r21642)
- Add: [NoAI] AIEventTownFounded (r21664)
- Add: [NoAI] AIRail::GetName() to get the name of a railtype (r21663)
- Add: [NoAI] AITown::IsCity() so AIs can find out which towns grow faster than others (r21654)
- Change: Do not show price to build a bridge in the scenario editor as they are free to build there [FS#4358] (r21673)
- Change: Do not highlight tile when selecting a vehicle to clone or an order to skip to (r21616)
- Fix: Estonia introduced the Euro in 2011 (r21670)
- Fix: Autofill timetable had side effects in test mode, possibly causing desyncs in MP [FS#4354] (r21660)
- Fix: Cargo payment graph was not properly invalidated when payment rate changed [FS#4351] (r21658)
- Fix: Use a bool instead of uint8 to store a bool and use the dedicated accessor function when reading boolean settings [FS#4345] (r21656)
- Fix: Infinite loop in the road pathfinder due to bouncing around in an 'one way' trap; two one ways pointing towards each other making it impossible to leave [FS#4338] (r21651)
- Fix: Make '[centre|main] view' consistent, and make '[main|global] view' consistent [FS#4339] (r21650)
- Fix: Newly created skip-to order was created at wrong place (r21633)
- Fix: Ships with the old pathfinder would easily show up as lost, even when it would eventually find a path. Now also the distance from the 'end' of the pathfinding run to the destination is compared to the current distance to the destination; if the distance to the destination at the end of the pathfinder run is less than the current distance from the destination the ship will not be marked as lost. This means that the ships with the old pathfinder will less likely get marked as lost, but due to the design of the old ship pathfinder there 'lostness' is merely a best guess. When you still get a lost message you need to build buoys to guide the ship pathfinder [FS#4325] (r21631)
- Fix: Version detection of subversion branches and tags got broken (r21630)
- Fix: Crash under certain circumstances when using autorail [FS#4327] (r21619)


### 1.1.0-beta1 (2010-12-24)

- Feature: [NewGRF] Variable 7B for accessing 60+x variables while taking the parameter from the accumulator (r21604)
- Feature: Allow to refit only the selected part of a train consist (r21567)
- Feature: Store the used OpenTTD version, base graphics set, NewGRFs and AIs in the PNG screenshots (r21558, r21553)
- Feature: Make the delay of the chat messages timing out unrelated to the number of passed game days, i.e. do not stop ageing chat messages when the server is paused, and make the timeout user configurable [FS#532] (r21513, r21512)
- Feature: Vehicle lost messages for ships and road vehicles [FS#1956] (r21511, r21510)
- Feature: Diagonal tile clearing and terraforming by pressing Ctrl [FS#730] (r21500)
- Feature: [NewGRF] Use the station graphics property to determine a fallback for the depot sprites [FS#4279] (r21473)
- Feature: Add explicit make 'shared orders' an option in the orders menu (r21464)
- Feature: Make it more clear that you are stopping a shared order, and make it possible retain the order list upon unsharing [FS#3711] (r21461)
- Feature: Hotkey Ctrl+W for returning to the main menu [FS#3217] (r21459)
- Feature: Scroll to the inserted order [FS#4215] (r21457)
- Feature: Building while paused always works in the scenario editor [FS#1521] (r21430)
- Feature: Perform the compression of savegames to send to the client asynchronously. This will reduce the lag of the other clients to the time it takes to make the memory dump and it will speed up downloading the map as the download starts earlier (possibly with a slightly lower bandwidth due to slow compression) [FS#4284] (r21399)
- Feature: Do not store savegames to disk when transferring it from the server to a client (r21398, r21397)
- Feature: Use alphabetical order when sorting industries by type at the industry directory window (r21389)
- Feature: Allow entering of the new year in a text box when cheating the year [FS#4289] (r21388)
- Feature: Support for limiting the amount of (accepted) incoming data for a server (r21363)
- Feature: Natural sorting of strings using ICU [FS#4214] (r21344)
- Feature: [NewGRF] Implement action0 visual effect properties for ships and RVs (r21240)
- Feature: [NewGRF] Support callback 0x10 for RVs and ships (r21238)
- Feature: [NewGRF] Make positioning of diesel fumes and electric sparks actually work (r21230)
- Feature: [NewGRF] Support OpenTTD's genders, cases and plurals (r21216, r21211, r21209)
- Feature: Display mail capacity when refitting an aircraft to passengers (r21214)
- Feature: Make the statusbar's location configurable [FS#4201] (r21179)
- Feature: Forced construction of missing industries (r21175)
- Feature: Do not build industries during economic recession (r21169)
- Feature: Use desired industry counts rather than relative probability to decide which industry to build (r21168)
- Feature: Allow to sort purchase lists for trains and road vehicles by tractive effort (r21105)
- Feature: [NewGRF] Add CB36 support for road vehicle property 0x15 (Speed) (r21100)
- Feature: [NewGRF] Implement stringcode 9A 0C (station name), 9A 0D (weight) (r21086, r21085)
- Feature: [NewGRF] Add CB36 support for road vehicle properties 0x13 (Power), 0x14 (Weight) and 0x18 (Tractive effort) (r21058)
- Feature: XZ/LZMA2 savegame support. New default reduces savegame size by 10 to 30% with slightly more CPU usage. With maximum settings it reduces savegame size by 20 to 30%, but that takes 7 to 14 times longer. Map saving + downloading takes, on average, 5% less (r21044)
- Feature: Chat directly to the server or a bot/admin/IRC channel monitoring the server (r21000)
- Feature: Remote administration (r20975-r20963)
- Feature: [NewGRF] The concept of minimum loadable version to NewGRFs when choosing compatible NewGRFs (r20960, r20958)
- Feature: Centre new extra viewports on the tile below the mouse. Only centre on centre of main viewport if mouse is not in any viewport (r20956)
- Feature: [NewGRF] Make it possible to distinguish player built/randomly placed industries in the location and land slope check callbacks (r20942)
- Feature: Highlight all destination tiles when building a lock [FS#4153] (r20932)
- Feature: Transfer orders imply 'leave empty' by default [FS#3905] (r20927)
- Feature: Allow to select a custom percentage of water in the map generation window (r20832)
- Feature: Make it possible to select vehicle to clone and vehicle to clone orders from directly from vehicle lists and depot window [FS#3999] (r20753)
- Feature: Separate GUI icons for vehicle/company profit, exclusive rights and unread news (r20720)
- Feature: [NewGRF] Support for newobjects (r20670)
- Feature: Make the (flat) area around an industry configurable (r20659)
- Feature: [Network] Allow rate limiting of incoming commands (r20553)
- Feature: Filter signs at the sign list window [FS#3472] (r20516)
- Feature: Ignore _ in console command names so there is no 'inconsistent' behaviour w.r.t. underscores anymore without breaking backward compatibility greatly (r20515)
- Feature: A new screenshot type that makes a zoomed-in screenshot of the visible viewport [FS#3973] (r20508)
- Feature: Setting for none/original/more smoke [FS#3093] (r20376)
- Feature: Airport previews (r20381, r20369)
- Feature: [NewGRF] Support for callback 0x147 ('add sprite offset') for canals (r20353)
- Feature: [NewGRF] Support for property 09, feature 05, i.e alternate canal sprite layout (r20352)
- Feature: Add rescan_newgrf console command (r20344)
- Feature: [NewGRF] AdvVarAct2 operators for SHL, SHR and SAR (r20332)
- Feature: [NewGRF] Air drag property support for trains and road vehicles. Air drag for vehicles with air drag not set or set to zero will use a default value depending on their max speed (r20303, r20302, r20301, r20300, r20299)
- Feature: More user-friendly gui to change NewGRF parameters (r20258)
- Feature: [NewGRF] Add support for static NewGRF information, i.e. Action 14 (r20250)
- Feature: Display suppliers and customers of an industry or cargo (r20206)
- Feature: Allow horizontal resizing for all vehicle lists [FS#3955] (r20174)
- Feature: [NewGRF] Information (var 4A) about the current railtype a train is on (r20165)
- Feature: Tooltips are shown by hovering the mouse over a widget instead of by right clicking on it [FS#3913]
- Feature: Customisable hotkeys (r20055)
- Feature: Wrap console lines when they are too long [FS#3816] (r20046)
- Feature: [NewGRF] Variable 43 depot build date for railtypes [FS#3886] (r20003)
- Feature: Show some savegame details when selecting items in saveload GUIs (r19984)
- Feature: Open vehicle view when clicking on the caption of vehicle news (r19944)
- Feature: [NewGRF] Access to industry founder (var A7) during callbacks 28 and 2F (r19901)
- Feature: Add highlighting of drag destination in depot and order GUI gui [FS#3705] (r19889, r19888)
- Feature: Configure NewGRFs from a single window (r19841)
- Feature: Give depots an unique name in the same manner buoys and waypoints are named. Also allow them to be custom named [FS#3691] (r19801, r19799)
- Feature: Hide all other industries when Ctrl+clicking an industry type in smallmap legend (r19770)
- Feature: [NewGRF] Access to random bits of houses and industries from construction callbacks 17, 28 and 2F. That is: The random bits the house/industry will start with, if construction succeeds [FS#3477] (r19744)
- Feature: A simple sprite alignment helper. It does not store the new offsets anywhere so as soon as the sprite is reloaded the offsets are gone (use a bigger sprite cache if this happens). Also anything that reloads NewGRFs (new games, loading games or (re)applying NewGRFs) clears the sprite cache and as such resets the offsets (r19723)
- Feature: New base costs for building/clearing canals, building/clearing aqueducts and building/clearing locks (r19720)
- Feature: Ctrl+click on a vehicle to start/stop it (r19714)
- Feature: NewGRF debugging/inspecting of (primarily) enabled callbacks and values of variables (r19709)
- Feature: Graphs with negative values are no longer forced to have the zero axis in the middle, resizeable graphs (r19662, r19631)
- Feature: [NewGRF] Support callback 36 for aircraft speed also in the build menu (r19660)
- Feature: Add an input box to the AI Debug window where you can input a break string [FS#3496] (r19544)
- Feature: Add buttons to enable/disable all cargoes at the cargo payment rates graph (r19542)
- Feature: Sort industries alphabetically at the smallmap legend, fund industry list; sort cargoes alphabetically at cargo payment graph, build vehicles cargo filter dropdown, station ratings and refit options (r19541, r19540, r19436, r19535, r19522, r19503)
- Feature: Console command 'reload_newgrfs'; only available when NewGRF developer tools are enabled (r19515)
- Feature: Enter the starting year in the scenario editor by clicking at the date panel (r19397)
- Feature: Configurable slope steepness for road vehicles from 0% to 10%, default is 7% (r19346)
- Feature: Realistic acceleration for road vehicles (r19345)
- Feature: Allow to (over)build and remove multiple road stops using drag and drop (r19231, r19230, r19229)
- Feature: Show warnings and errors in console as well, not only in a message box (r19225)
- Feature: [NewGRF] Action 0/1/2/3 support for NewGRF airporttiles (r19194)
- Add: [NoAI] AIOrder::IsVoidOrder to find void '(Invalid Order)' orders (r20389)
- Add: Support for MSVC 2010 (r20032)
- Add: [NoAI] AIIndustry::GetIndustryID(TileIndex) (r19773)
- Change: Make it possible to start actions that require selecting stuff (landscaping, vehicle cloning, etc) in the viewport while paused. As side-effect you will get an error message explaining the command cannot be executed because the game is paused instead of seemingly nothing happening when you click. Additional side effect of this is that you can make use of the measurement tooltip while paused [FS#4292] (r21480)
- Change: Make building aqueducts behave more like building tunnels. They cannot be built on flat (or foundation) tiles, so there is at most one destination tile like there is only one for tunnels [FS#4153] (r21471)
- Change: Place the bridge building window under the mouse instead of somewhere randomly on the screen and change the default sort order [FS#3975] (r21460)
- Change: Make sure the client is listening, or rather receiving, our frames (r21361)
- Change: Read some metadata from (official) source tarballs so you will more likely get the right version/revision out-of-the-box (r21351)
- Change: Be more explicit that the game state can get broken by changing NewGRFs (r21335)
- Change: Use the last red instead of last red exit penalty for making sure other waypoint entries are evaluated as well when they are occupied, e.g. when there are no signals before the waypoint but a train just beyond the waypoint is stopped (like for stations) (r21271)
- Change: Do not receive money for removing the rail of non-rail rail station tiles, i.e. rail station tiles for which the NewGRF has prevented trains to be routed through (r21266)
- Change: Show a different 'lag' message when a client is lagging because of connection trouble or lagging because the client is just slow (r21254)
- Change: Mention the OpenTTD version on the console/logs when starting an OpenTTD dedicated server like we mention it in the title bar for the GUI version (r21253)
- Change: Filter stations by cargo they have a rating for instead of having cargo waiting [FS#4206] (r21144)
- Change: Limit the number of exceptions in the refittable cargo list to 7 (r21083)
- Change: Reduce the chances to accidentally break savegames with NewGRFs by limiting loading of savegames that miss NewGRFs or change NewGRF settings in-game [FS#3012] (r21116)
- Change: Tuned realistic acceleration to be a bit more realistic in order to make acceleration 'slower', which highlights the differences between vehicle types more (r21106)
- Change: Do not make client reconnect waiting time depend on the company; in coop games that does not spread clients at all, and most companies have a low number causing it not to be spread out either. Use the ClientID instead (r21008)
- Change: Add installing options or rather options to not install certain documentation, in a similar way to GRFCodec/catcodec (r20999)
- Change: Only display liveries in the livery window if they are used by some vehicle somewhen (r20849)
- Change: [NoAI] Rename AIAbstractList to AIList (r20563)
- Change: [NoAI] AIOrder::GetOrderFlags returns AIOrder::AIOF_INVALID for void orders (r20389)
- Change: [NewGRF] Adapt vehicle var FE bit 6 to new railtypes (r20175)
- Change: [NewGRF] Call callbacks 14A, 14B and 14C after all industry variables have been assigned, so more variables are valid during the callbacks (r19907)
- Change: [NoAI] Remove HasNext() from all lists/iterators and add IsEnd() instead (r19294)
- Change: Add the default installation directory of lzo/zlib for Mac OS X/MinGW to the paths where (the headers of) those libraries are searched [FS#3638] (r19285)
- Fix: Crash due to cargo payments belonging to a non-existing company [FS#4324] (r21605)
- Fix: Company league table used stats from two quarters ago instead of last quarter [FS#4323] (r21601)
- Fix: The default visual effect only depends on properties of the Engine (wagon or not, tractiontype, ...), not whether it is used as articulated part, front engine or whatever in a specific consist [FS#4275] (r21598)
- Fix: [OSX] A double mouse cursor was shown under certain circumstances [FS#2585] (r21578)
- Fix: Show 'plant trees' button lowered on the terraform toolbar, like how other buttons are lowered when you selected a 'build' action [FS#4315] (r21539)
- Fix: 2CC recolour sprites were the same for DOS and WIN palette, thus 'dark green', 'brown', 'grey' and 'white' were wrong for DOS [FS#4312] (r21535)
- Fix: Do not apply the last signal red pathfinder penalty when the signal is a path signal [FS#4302] (r21524)
- Fix: Tooltips were not removed when their related window got closed [FS#4300] (r21477)
- Fix: Make sure the query window is only opened once per parent window/callback [FS#4298] (r21472)
- Fix: Crash when news item gets removed at just the wrong moment [FS#4180] (r21458)
- Fix: [NewGRF] Ensure the parameter for house variable 60 is the id of an original house (r21456)
- Fix: [NewGRF] A NewGRF with incomplete string codes at the end of a string could cause invalid memory reads (r21433)
- Fix: The server did not check for the paused state when allowing to execute commands [FS#3771] (r21429)
- Fix: Vehicles could be built while the game is paused. Now you can enable or disable that with a setting, which replaces the build-while-paused cheat [FS#4021] (r21428)
- Fix: Purchase lists were not invalidated when using 'resetengines' (r21374)
- Fix: Fields were not cleared under snow though they were intended to be [FS#4283] (r21367)
- Fix: New railtypes with overlays did not use the shore sprites as groundtiles for three-corner-raised slopes (at shore) [FS#4277] (r21353)
- Fix: Buffer overflow in strgen for strings with very large arguments (r21346)
- Fix: Bogus cache mismatch warnings with desync debugging because some cache was invalidated but never reset [FS#4272] (r21338)
- Fix: Make it more likely that the savegame and transferred file are the same file and not different ones [FS#4271] (r21334)
- Fix: Use the correct font sizes when checking for missing glyphs (r21321)
- Fix: [Content] Crash when creating file download by the content download system failed (r21319)
- Fix: AIs in an infinite loop in e.g. autosave, but also getting settings and such from info.nut, would not be interrupted after a while causing OpenTTD to seem to not respond [FS#4260] (r21311)
- Fix: [Content] Do not add HTTP connection to list of connections when it fails in the beginning (r21302)
- Fix: Fonts set in openttd.cfg were not properly checked for missing glyphs on language change [FS#4261] (r21298)
- Fix: FreeBSD introduced strndup as well [FS#4259] (r21295)
- Fix: [Windows installer] Check for existence of save/scenario dirs before asking for deletion confirmation [FS#4251] (r21294)
- Fix: Under some circumstances two vehicles could leave a non drive-through road stop at once [FS#3935] (r21263)
- Fix: [NewGRF] Custom station foundations using the 'simple foundations'-method did not draw any sprite for WSE-slopes when there are foundations on both neighboured tiles in the north. As there must be at least one sprite to provide the correct offset for the groundsprite draw the (empty) default foundation sprite in that case [FS#4246] (r21262)
- Fix: The main menu error messages would not show when you had an error message open in the game while whatever triggered you to go back to the main menu (r21255)
- Fix: Rescanning AIs did not 'forget' removed AIs [FS#3952] (r21250)
- Fix: Upon rescanning AIs the new AIs would (after some time) show up in the AI list but you could not select all (r21246)
- Fix: [YAPF] Road vehicles not finding the nearest depot in some (corner) cases [FS#4130] (r21229)
- Fix: [NewGRF] The specs' cargo strings and OpenTTD's use of the clashed. Provide properties so NewGRFs can provide cargo strings tailored for OpenTTD while retaining (some) backward compatibility [FS#4172] (r21224)
- Fix: Use proper plural for the short cargo unit names (r21223)
- Fix: Under some conditions, group count would be wrong after moving train engines in the depot window [FS#4207] (r21205)
- Fix: [OSX] Do not let the mouse cursor jump when switching to full screen mode (r21200)
- Fix: [OSX] Finding a fallback font failed when compiling for OSX 10.4 as it tried to match also OpenTTD-specific control characters [FS#4001] (r21197)
- Fix: Use non-interactive randomness for townnames on map generation, so they are controlled by the generation seed as well [FS#4226] (r21192)
- Fix: [OSX] Unify compiler flags with other OS and work around a compiler bug in gcc-4.0.1 which breaks graphics display in x86_64 binaries [FS#4210] (r21149)
- Fix: Station list was not updated when a new cargo got a rating (r21145)
- Fix: Station ratings were not updated (anymore) after an aircraft crashed (r21137)
- Fix: Bridge speed limits should apply to all wagons of a vehicle, not just the head of the vehicle [FS#4213] (r21136)
- Fix: Helicopter flight altitude was determined inconsistently in different places (r21119)
- Fix: Do not use the maximum track speed where the maximum vehicle speed is meant (r21107)
- Fix: Display the real maximum speed for aircraft instead of always using the engine value (r21096)
- Fix: Aircraft speed would ignore callback 36 result when it is greater than the engine speed (r21094)
- Fix: [OSX] Mouse cursor would leave footprint with 8bpp blitter when switching to full screen (r21037)
- Fix: [OSX] Properly set the palette when using the 8bpp blitter during start-up (r21036)
- Fix: Centre industry gui and waypoint gui after resize [FS#4171] (r21021)
- Fix: Draw bridge pillars with correct length on all tile corners by drawing only half of the pillar sprite if required (r20950, r20947)
- Fix: Accidentally moving the mouse of the scrollbar arrows while pressing it clicks the button next to the arrow [FS#4071] (r20922)
- Fix: Refit costs were not shown for long cargo names [FS#4160] (r20921)
- Fix: When using non-smooth or NewGRF-economy changing production rates does not work, so allow changing the production multiplier instead (r20901)
- Fix: The station with the second highest rating was doubly penalised when distributing cargo. Now the penalty is completely removed and the granularity/precision of the distribution in increased by using fractional cargo. This should make competing stations less all-or-nothing [FS#3637] (r20857)
- Fix: Make sure (gradual) loading is properly terminated for consists with multiple cargo types. Do not stop loading if the timetabled wait is not over yet [FS#2534] (r20843)
- Fix: Place less trees at once when planting random trees at the scenario editor [FS#4094] (r20829)
- Fix: Do not use new game settings when creating many random towns/industries at the scenario editor [FS#4094] (r20712, r20711)
- Fix: Keep _current_company and _local_company in sync during GUI operation [FS#3804] (r19933)
- Fix: When building a lock, do not add the cost of building canals if they are already built, pay for clearing the other tiles and do not add the first bridge type's cost to aqueducts (r19719, r19718, r19717)


## 1.0.x

### 1.0.5 (2010-11-20)

(None)


### 1.0.5-RC2 (2010-11-14)

- Fix: Reading (very) recently freed memory [CVE-2010-4168] (r21182)
- Fix: Default service interval for ships/aircraft got switched [FS#4222] (r21155)
- Fix: Size of sort buttons for save/load and build vehicle list gui could be too small [FS#4221] (r21151)
- Fix: [Windows] Make sure to be upgraded openttd is not running when installing [FS#4212] (r21146)
- Fix: [NewGRF] Crash when disabling static NewGRFs (when joining/starting a server) [FS#4208] (r21130, r21129, r21128)
- Fix: Upper limit for snowline was too low [FS#4203] (r21078)
- Fix: Wrong (maximum) value shown for generation seed in the in-game console [FS#4192] (r21075)
- Fix: Under some circumstances the file handle of the downloaded savegame would not be closed, and validity of the handled was not checked in all cases (r21027)
- Fix: [NewGRF] Crash when getting an industry ID at an offset that uses some 'old' style industry tile [FS#4157] (r20912)


### 1.0.5-RC1 (2010-10-31)

- Change: Make OpenTTD aware of XZ/LZMA compressed savegames so loading those gives a proper error message (r21047)
- Change: Make it possible to make .tar.xz bundles (r21042)
- Fix: Missing default values for the custom town number in the world generation options (r21034)
- Fix: Dropdown menu glitched in small screenshots, when issuing them from the menu (r21031)
- Fix: Do not let the resize button go past the bottom of the screen [FS#4176] (r21015)
- Fix: The detailed performance rating window could be too narrow [FS#4102] (r21010)
- Fix: For the compact notation 1.000.000k and 1.000M would be shown depending on the initial (and later rounded) value. Make everything that would round to 1.000.000k be drawn as 1.000M as well (r21009)
- Fix: Do not consider the text direction character when searching for missing glyphs (r21007)
- Fix: Chat/console messages got sometimes messed up due to LTR names in RTL translations and vice-versa [FS#3746] (r21006, r21004)
- Fix: Size of sort buttons for order and vehicle list gui could be too small (r20997)
- Fix: [NewGRF] The X and Y offsets in the parameter for industry vars 60, 61, 62, 63 are unsigned instead of signed (r20996)
- Fix: When removing a rail station, do not leave track under non-station tiles (r20990)
- Fix: [NewGRF] Ignore the variable for Action7/9 condition type 0x0D and 0x0E as documented (r20979)
- Fix: Crash when, while the 'go to' cursor is active, you open the order list of a vehicle of another company and then select a 'go to' destination [FS#4159] (r20916)
- Fix: Helicopters fired a bit too late [FS#4155] (r20910)
- Fix: Road/water toolbars did not get updated when the first vehicle of their type becomes available [FS#4141] (r20856)
- Fix: Smallmap legend buttons must all be equal in size, even if their contents is not (r20851)
- Fix: Deadlock when aborting map generation on Windows [FS#3707] (r20822)
- Fix: Be a bit more lenient with invalid savegames; do not crash on saveload related NOT_REACHEDs, just show the user an error that the savegame is corrupted [FS#3714] (r20819)
- Fix: Make the crash-on-saveload message clearer and more correct [FS#3791] (r20818)
- Fix: [NewGRF] Clamp/convert some vehicle variables so NewGRFs get their specified range (r20800, r20799, r20792)
- Fix: [NoAI] Document that AITile::HasTransportType does not work for TRANSPORT_AIR [FS#4117] (r20798)
- Fix: [NewGRF] Disable houses without a size that are available according to their building flags (r20797)
- Fix: [NewGRF] Make sure all houses in the house spec array are valid. It was possible that part of a multitile house was not copied because the array was full (r20796)
- Fix: Building 2x2 houses did not work for 2x2 road layouts on all map sizes (r20791)
- Fix: [NewGRF] Remove a check which is wrong for NewGRF houses and serves no use for original houses [FS#4118] (r20790)
- Fix: Spelling mistake in Slovak real town names (r20787)
- Fix: Do autosave-on-exit as well when using kill/CTRL-C to terminate a dedicated OpenTTD (r20783)
- Fix: [NoAI] AIEventCompanyAskMerger was disguised as AIEventCompanyMerger (r20765)
- Fix: [NewGRF] Assert when an industry previously build on water was flooded because its NewGRF changed/is missing [FS#4112] (r20754)
- Fix: Do not use new game settings when creating many random towns/industries in the scenario editor [FS#4094] (r20712, r20711)
- Fix: Graphics glitch when switching to a different-sized font while the chat message box was visible (r20705)
- Fix: Vehicle lists of non-trains could not resize horizontally causing truncation of texts [FS#4123, FS#3955] (r20174)


### 1.0.4 (2010-09-14)

- Change: Move removal of bin/data/opentt[dw].grf from distclean to maintainer-clean (r20752)
- Fix: Recent NFORenum does not know '-?' (r20715)


### 1.0.4-RC1 (2010-08-30)

- Change: Merge the extra GRF's sources and make it possible to rebuild them easily (r20490)
- Fix: Empty NewGRF presets were not selectable [FS#4087] (r20694)
- Fix: Desync checker checked the wrong variable (r20677)
- Fix: Drawing the 'OpenTTD' text in the intro game caused crashes with very low resolutions [FS#4081] (r20618)
- Fix: Crash when a NewGRF defined an invalid substitute type for a house and the NewGRF was removed during the game, disable houses with different size than their substitute [FS#3702] (r20611, r20610, r20609)
- Fix: Retain information about all base sets that are found and not only the latest version to stop confusing people that use newer versions of the base sets than those available via BaNaNaS (r20607)
- Fix: Let NewGRFs var43 var (information about liveries) for vehicles not be influenced by the local setting determining whether to show liveries or not [FS#4063] (r20605)
- Fix: 'Downscale' a full load order to a load if possible order when removing the order while the vehicle is loading. This to prevent the vehicle from (possibly) staying forever in the station [FS#4075] (r20600)
- Fix: Crash when the tooltip is wider than the window is [FS#4066] (r20596)
- Fix: No (proper) savegame conversion was done when _date_fract got a new value range (r20592)
- Fix: Autoreplace failed while attaching non-replaced wagons to the new chain, if to-be-sold-engines would become front-engines and the unitnumber limit would be exceeded (r20583)
- Fix: Autoreplace can trigger an assertion when at the vehicle limit [FS#4044] (r20582)
- Fix: Go via station and go via waypoint behaved differently when a train went back to the same (unordered) station again [FS#4039] (r20580)
- Fix: Draw bounding boxes using white instead of pure white, so they are recoloured to grey in coloured newspaper instead of blue [FS#4051] (r20578)
- Fix: Scroll button flickering when pressed [FS#4043] (r20577)
- Fix: Warn OpenGFX users when they are using a base set that misses sprites (r20566)
- Fix: Wrong tooltip for the company select button in the AI debug and performance rating windows [FS#4053] (r20556, r20555)
- Fix: In old savegames aircraft can have an invalid state (r20528)
- Fix: Crash when the content download tried to get a MD5 checksum of an 'originally' loaded NewGRF [FS#4038] (r20519)
- Fix: Draw error messages in white by default, they may not have a colour set when coming from a NewGRF (r20514)
- Fix: Entering half the 'generation seeds' in the console's 'newgame' command failed to set the correct seed [FS#4036] (r20512)
- Fix: Desync when vehicles change NewGRF properties such as visual effect when changing railtype [FS#3978] (r20505, r20504, r20503, r20502)
- Fix: Desync when converting rail all as trains with a part on the converted rails need updating and not only the engines (r20500)
- Fix: Ignore the non-stop state when comparing one order type to another order type, otherwise non-stop nearest depot orders fail [FS#4030] (r20498)
- Fix: Non-dedicated servers failing to load a game caused the introgame to be the server's game causing desyncs when people tried to join [FS#3960] (r20497)
- Fix: [NoAI] checking whether water tiles are connected failed in some cases [FS#4031] (r20489)
- Fix: Statues were not removed when towns would be removed (r20481)
- Fix: Do not spend cash when building a statue fails [FS#3985] (r20469, r20227)
- Fix: Adding 'goto nearest depot and stop' orders in one go was denied. This caused both AI adding those orders and backed up order restoration to fail [FS#4024] (r20441)
- Fix: For docks 'facing' north, i.e. having the watery part a the northern side, the station joiner had an off-by-one to the north w.r.t. the station spread against the actual other (correct) building tools [FS#4022] (r20438)
- Fix: Make snow on bridges depend on bridgeheight and make snowiness of bridgeheads depend on the tileheight at the entry [FS#3947] (r20424, r20423, r20422, r20421, r20420)
- Fix: During world generation the snow-mapbits are not yet available, so test the snowline variable directly (as they were before) [FS#4017] (r20418)
- Fix: PBS reservations were always displayed on halftile foundations if the railtype uses overlays [FS#4013] (r20408)
- Fix: Make the default minimum width for editboxes 10 pixels to prevent crashes [FS#4010] (r20394)
- Fix: Prevent buying more vehicles than allowed or buying companies when you'd get too many vehicles [FS#3993] (r20393, r20392, r20391, r20390)
- Fix: Initialise fund-industry buttons when opening window (r20386)
- Fix: Update cursor dimensions when reloading grfs resp. changing base graphics, so the cursor does not glitch if it becomes bigger (r20384)
- Fix: Stop vehicle following after zooming out [FS#3989] (r20361)
- Fix: [NoAI] Ship depots were constructed along the wrong axis [FS#4004] (r20348)
- Fix: Fallback font selection due to missing glyphs did not work as intended (r20296)
- Fix: When it is known the loading an old savegame is going to fail, bail out immediately (using an exception) instead of going on until e.g. the expected number of byte is read (r20247)
- Fix: The caption of the 'Available vehicle' lists was black, whereas for building those vehicles, which uses the exact same window, it was white (r20244)
- Fix: [NoAI] Clarify the documentation for AIBaseStation::GetLocation (r20238)
- Fix: Refit costs from refit orders are subtracted from the vehicle yearly income [FS#3988] (r20234)
- Fix: Road vehicles could be dead locked with one way roads. This allows one wayness to be removed if there are vehicles on a tile; it does not allow you to add one wayness to roads that have vehicles on them as it makes turning vehicles jump [FS#3961] (r20230)
- Fix: 'Service at nearest depot' behaved the same as 'Go to nearest depot' [FS#3986] (r20229)
- Fix: Depot did not become unsnowy, when snowline rises [FS#3976] (r20224)
- Fix: Strip non-printable characters before showing it in an edit box, so when renaming a vehicle type you will not get the 'SETX stuff' that some NewGRFs use [FS#3974] (r20220)
- Fix: NewGRFs that defined a vehicle without either loaded or loading groups could crash OpenTTD [FS#3964] (r20199)
- Fix: [NewGRF] GetNearbyTileInformation can be used to get the terrain type of a MP_VOID tile [FS#3963] (r20197)
- Fix: [NewGRF] Vehicle var FE bit 6 did return incorrect values for new railtypes (r20175)
- Fix: Inconsistencies w.r.t. to km/h vs km-ish/h as 'base' unit for aircraft speeds [FS#3870] (r20164)


### 1.0.3 (2010-08-01)

- Fix: Make it possible to properly assess the length of the rail toolbar caption, do not require '{WHITE}' control codes (r20242)
- Fix: Check for disallowed level crossings also when converting rail (r20237)
- Fix: Haiku uses a 'special' location for headers (r20219)
- Fix: Desync due to (temporary) wrong railtype; when loading a savegame the railtype of some (high ID) trains could be wrong [FS#3945] (r20137)


### 1.0.3-RC1 (2010-07-17)

- Feature: [NewGRF] Textstack support for CB 38 (r20086)
- Feature: [NewGRF] Add a railtype flag to disallow level crossings per railtype (r20049)
- Change: Improve desync debugging, crash log data and the Debian packaging (by making a debug symbols package) (r20138, r20136, r20129)
- Fix: Do not scan /data and ~/data (if they happen to be your working directory). If it is the directory where your binary is located it will still scan them [FS#3949] (r20166)
- Fix: Integer comparison failed in case the difference was more than 'MAX_UINT'/2 [FS#3954] (r20162)
- Fix: [YAPP] Converting a one-way block to a path signal with trains on both sides could lead to a train crash [FS#3937] (r20156)
- Fix: [NewGRF] Improve handling of snowing of railtypes and (infra)structures on foundations [FS#3883] (r20153, r20132, r20126, r20125)
- Fix: Ships were not marked as dirty when stopping inside a depot [FS#3880] (r20142)
- Fix: Some windows ignored all hotkeys [FS#3902] (r20141, r20140, r20139)
- Fix: Do not allow building a rail track to the water using a tree-tile [FS#3695] (r20110)
- Fix: [NoAI] AITown::GetRating() returned wrong values [FS#3934] (r20103)
- Fix: Reading deleted memory when selecting a NewGRF in the content download window of which the data has not been acquired from the content server. The crash would occur after the content server's reply was processed and the ContentInfo object was replaced with another [FS#3899] (r20089, r20082)
- Fix: If after loading a savegame (including intro game) one tried to save a game (including autosave) and that failed (very) early on because it could not open the file for writing all pointers would be converted to NULLs which then causes corrupted game states [FS#3786, FS#3887, FS#3920, FS#3923] (r20087)
- Fix: gitignore and hgignore had more missing/wrong entries (r20078, r20033, r20031)
- Fix: Remove the space between 'open' and 'ttd' in the title screen (r20077)
- Fix: Road vehicles could get crashed twice in a tick [FS#3896] (r20053, r20034)
- Fix: Coloured_news_year was stored in savegames while it should be a client setting [FS#3916] (r20051)
- Fix: Crash when spectator tried to open a vehicle list without selecting any company [FS#3892] (r20041)
- Fix: Instead of loading the intro game when loading a savegame fails on the dedicated server, generate a new game [FS#3907] (r20039)
- Fix: Tram tracks did not show at level crossing with the new railtypes [FS#3911] (r20036)
- Fix: Under some circumstances you could get into an infinite loop [CVE-2010-2534] [FS#3909] (r20035)
- Fix: The 64 bits TortoiseSVN was not always properly detected (r20029)
- Fix: Do not close the sort dropdown in the (original) vehicle list when there are no vehicles. That code is meant for the 'actions' dropdown [FS#3881] (r20014)
- Fix: When joining a company with a password you could only enter 20 characters of the password (r20012)
- Fix: Sign sorting was unstable [FS#3893] (r20009)
- Fix: Trains should also have running cost while slowing down for stop (r20006)
- Fix: [NewGRF] Stringcodes 82, 83 and 84 were not properly converted to openttd codes so they did not work (r20004)
- Fix: Clear force_proceed when entering depots and when loading, resetting of force_proceed on manual stopping did not work [FS#3878] (r19992)
- Fix: Do not show an error message when trying to start/stop a crashed plane [FS#3874] (r19953)
- Fix: Allow turning of roadvehicles while waiting in a queue (r19945)
- Fix: Disallow moving of vehicle news window [FS#3865] (r19943)
- Fix: Under some (unlucky) circumstances the wrong company would be 'current company' when changing company colour or orders [FS#3903]


### 1.0.2 (2010-06-19)

- Fix: Owner of the Waypoint View window was not properly set (r19990)
- Fix: Close list of vehicles with given oil rig in orders when the oil rig is deleted (r19956)
- Fix: Close list of vehicles with given buoy/oil rig in orders when switching company (r19955)
- Fix: Do not close list of waypoint's trains when the waypoint view is closed when it is sticky (r19952)
- Fix: Close buoy's vehicle list when the buoy is deleted [FS#3869] (r19951)


### 1.0.2-RC1 (2010-06-05)

- Feature: Translated desktop shortcut comments (r19884)
- Change: Name invalid engines, cargoes and industries 'invalid', if the player removed the supplying NewGRFs, hide invalid engines from the purchase list (r19879, r19877)
- Fix: When 'pause on new game' is set, pause the game before CleanupGeneration() to avoid conflicts with concurrent GUI code [FS#3857] (r19934)
- Fix: Pay for the rail/road when constructing tunnels, bridges, depots and stations [FS#3859, FS#3827] (r19925, r19887, r19881)
- Fix: Closing chatbox could cause glitches when news message was shown [FS#3865] (r19921)
- Fix: [YAPP] Inform the pathfinder as well about the fact that the backside of an one-way path signal can be a safe waiting point [FS#3803] (r19896)
- Fix: Allow loading savegames from the console without specifying the '.sav' extension, i.e. make it consistent with saving savegames from the console [FS#3761] (r19885)
- Fix: Dropdowns did affect positioning of new windows because they were not yet removed when the new windows were positioned [FS#3812] (r19883)
- Fix: [NoAI] AIEngine::IsValidEngine() and AIEngine::IsBuildable() returned false positives. Especially wagons of unavailable railtypes were reported available (r19880)
- Fix: Default vehicle group texts were drawn one pixel too low [FS#3851] (r19878)
- Fix: It was not possible to send all trains with common waypoint order to depot (r19876)
- Fix: Compilation for NetBSD [FS#3809, FS#3840, FS#3845] (r19874, r19859, r19853, r19781)
- Fix: If the (guessed initial) destination tile of a road vehicle was not a road stop but was a T-junction or turn, the road vehicles would jump around in circles [FS#3817] (r19873)
- Fix: When a network connection gets lost and a game with AIs was loaded the client might crash due to the AIs not being loaded while the game loop is executed [FS#3819] (r19869)
- Fix: Use non-breaking spaces for currency pre-/postfixes (r19867)
- Fix: Crash when changing/viewing locale settings in the console [FS#3830] (r19865, r19864, r19863, r19862)
- Fix: Drawing fallback sprites for unavailable NewGRF waypoints failed (r19852)
- Fix: Ensure that both texts of the NewGRF gui download button fit (r19823)
- Fix: Kicking clients by IP did not work [FS#3784] (r19818)
- Fix: Compilation with MinGW GCC 4.5.0 and UNICODE (r19787)
- Fix: If a waypoint is immediately followed by a path signal a reservation would be made from that path signal before the waypoint is marked passed. As a result the order to go to the waypoint is used to reserve the path after the waypoint and as such trains get lost [FS#3770] (r19784)
- Fix: NULL pointer deference when testing relative scope *action2 on an unbuilt engine [FS#3828] (r19782)
- Fix: Crash on too long paths [FS#3807] (r19780, r19779, r19778, r19777, r19776)
- Fix: MP_VOID tiles shall have no tropic zone [FS#3820] (r19769)
- Fix: Half-desert tiles would never revert back to clear tiles (r19768)
- Fix: Height in smallmap was different from measured heights [FS#3808] (r19767)
- Fix: [NewGRF] Vehicle var 43 missed AI information in purchase list (r19761)
- Fix: Blocked roadvehicles should first check whether they are still blocked before accelerating again, instead of continuous starting/stopping (r19755)
- Fix: Try harder to find a suitable font that can be loaded, i.e. while searching for a suitable font test whether you can open it [FS#3740] (r19753)
- Fix: Make sure the chat area fits in the default window size; if you want it larger, you can always change/override it in the config file [FS#3798] (r19751)
- Fix: [NewGRF] Industry var 0x43 is not 'safe' during callbacks 22 and 38 either (r19750)
- Fix: [NewGRF] Possible divide-by-zero if a NewGRF checked industry var 42 while the production level was 0 (r19749)
- Fix: Do not recenter usually centred windows when resizing main window or changing language, if they have been moved/resized before [FS#3675] (r19746)
- Fix: The GUI is controlled by _local_company, not _current_company (r19745)
- Fix: NewGRFs could access map bits of not yet constructed industries and houses during construction callbacks (r19748, r19743)
- Fix: [NewGRF] Passing some invalid data to industry variable 67/68 could cause a crash (r19713)
- Fix: Check for industry availability more thoroughly and cancel object placement when selecting not available industries [FS#3787] (r19701)
- Fix: Avoid showing building toolbars behind the main toolbar when the 'Link landscape toolbar' setting is active [FS#3781] (r19696)
- Fix: Under some circumstances the player's name could be empty (r19693)
- Fix: Do not show an error message when trying to give another client an amount of 0 money [FS#3779] (r19684)
- Fix: Do not display an error message when double clicking on a vehicle in the 'available vehicles'-window (r19669)


### 1.0.1 (2010-05-01)

- Fix: Crash when using restart via rcon (r19722)
- Fix: Leaking a file descriptor [CVE-2010-0406] [FS#3785] (r19695)
- Fix: Crash when the music/graphics metadata files were unreadable [FS#3774] (r19674)


### 1.0.1-RC2 (2010-04-22)

- Fix: Desync when joining the game because of using the wrong variable (r19687)
- Fix: Truncated archives were not detected when using zlib 1.2.3. This also fixes zlib 1.2.4 compatibility, zlib 1.2.5 is bug free (r19686)
- Fix: Towns with 3x3 and 2x2 road layouts could not expand (r19683)
- Fix: When joining a MP game all clients with company ID > 0 would be shown as if they were a spectator [FS#3775] (r19680)
- Fix: Client status was shown incorrect in the console (r19678)


### 1.0.1-RC1 (2010-04-17)

- Feature: [NewGRF] Support for extended text code 0x9A 11, print qword (r19570)
- Feature: Give more detailed error message when trying to build a too long bridge (r19561)
- Feature: Add rail speed limit to land area information window (r19556, r19434)
- Add: [NoAI] AIRail::GetMaxSpeed(RailType) to get the speed limit of railtypes (r19591)
- Change: Sync Debian packaging updates from Debian, but keep building a single package (r19572)
- Fix: Crash of a dedicated server if the null blitter is overridden and (after a while) there is no company 0 on new year anymore [FS#3749] (r19664)
- Fix: In rare cases, update of signals could be missed (r19663)
- Fix: Various improvements of command handling, missing error messages, improper validation causing crashes [CVE-2010-0402] [FS#3748] (r19658, r19657, r19656, r19655, r19654, r19637, r19633, r19621, r19616, r19605, r19604)
- Fix: Industry generation failed for large maps and lots of industry types (r19652, r19643)
- Fix: When a company is sold, move connected clients to spectators [FS#3745] (r19651)
- Fix: A client would not be properly moved when moved while joining, e.g. when entering a company's password. This caused the client to be in the wrong company (according to the rest of the clients) and the client being kicked on the first command [FS#3760] (r19648)
- Fix: Trains loaded above the original IDs did not have a default railtypelabel assigned to them, causing them to be unavailable. Could cause desyncs if the multiplayer game was not started from a savegame [FS#3768] (r19647)
- Fix: Do not allow building cacti outside of the desert or rain forest trees outside of the rain forest area. This to prevent people from thinking planting rain forest trees makes the rain forest bigger and thus adds more place to build a lumber mill [FS#3728] (r19644, r19635, r19634)
- Fix: Desync when taking over companies (r19636)
- Fix: Chat message caused glitch when rejoining a network game [FS#3757] (r19629)
- Fix: Desync when a command is received and in the queue while a client starts joining, i.e. save the game state. This can happen in two ways: with frame_freq > 1 a command received in a previous frame might not be executed yet or when a command is received in the same frame as the join but before the savegame is made. In both cases the joining client would not get all commands to get in-sync with the server (and the other clients) (r19620)
- Fix: Company related graphs were not updated correctly after changing the company colour [FS#3763] (r19615)
- Fix: Possible invalid read when server moves client to spectators before they finish joining [FS#3755] (r19613)
- Fix: Crash when opening a savegame with a waypoint from around 0.4.0 [FS#3756] (r19612)
- Fix: Improve joining behaviour; kicking clients when entering passwords that was just cleared, 'connection lost' for people failing the password, access restriction circumvention [CVE-2010-0401] [FS#3754] (r19610, r19609, r19608, r19607, r19606)
- Fix: Desync debugging; false positives in the cache validity checks and saving/loading the command stream (r19619, r19617, r19602, r19601, r19600, r19596, r19593, r19592, r19589, r19587, r19586)
- Fix: Presence of online content was not properly updated after download due to duplicate slashes in the path (r19600)
- Fix: [NewGRF] Setting industry prop 0x24 to 0 caused empty station names (r19590)
- Fix: Crash when pressing 'h' (non-stop) in the order window of a ship or aircraft [FS#3744] (r19584)
- Fix: Graphs were not properly updated when going toggling keys (i.e. companies) (r19574)
- Fix: The timetable button was not automatically raised [FS#3739] (r19571)
- Fix: [NewGRF] Possible buffer underflow in NewGRF string code (r19569)
- Fix: [NewGRF] Do not return a random colour for unowned industries in var 45; TTDPatch does not seem to set the colour data in that case either and it could lead to desyncs (r19566)
- Fix: Window::OnResize() was not always called while resizing a window causing incorrect windows [FS#3730] (r19563, r19558)
- Fix: Bridge build error message should not show the same message twice (r19560, r19559)
- Fix: [NewGRF] During NewGRF loading, store rail type labels in temporary data and process after loading has finished. This avoids deactivated rail vehicles being reactivated if the climate property is set after the rail type property (r19557, r19502)
- Fix: Improperly scaled cargo payment graph when having lots of cargo (r19550, 19543)
- Fix: [NewGRF] Properties set before property 08 (house, industry, industry tiles) should be ignored, not trigger the NewGRF to be disabled [FS#3725] (r19547)
- Fix: Sorting industries by production was broken for NewGRF industries (r19538)
- Fix: Vehicle details window did not resize correctly after refitting a road vehicle to a longer variant [FS#3720] (r19533)
- Fix: Prevent drawing industries disabled at the smallmap as land tiles when they are built on water (r19523)
- Fix: Tunnels, bridges and road stops are build with only one roadtype (r19506)
- Fix: Remove same_industry_close setting did not do what it said and caused NewGRF trouble (r19499)
- Fix: Keep number padding intact when cloning vehicle names [FS#3710] (r19498)
- Fix: [NewGRF] Bytes and words get sign-extended for temporary/persistent storage (r19497)
- Fix: Stop reducing the size of the vehicle list after selecting a vehicle with a long description (r19480)
- Fix: Implement custom sound effect for helicopter take-off [FS#3668] (r19364)
- Update: Plural type of Slovak (r19452)


### 1.0.0 (2010-04-01)

- Fix: Network clients would crash while connecting to a server with AIs (r19526)
- Fix: [NPF] Crash when finding a waypoint before finding the closest depot [FS#3703] (r19460)


### 1.0.0-RC3 (2010-03-18)

- Feature: Append rail type speed limit (if set) to rail type selection list, and toolbar title (r19431)
- Feature: [NewGRF] Smallmap colours for railtypes (r19307)
- Change: Make the drive through and cargo list consistency checks only run when 'desync' debugging is enabled (r19403, r19398)
- Change: Update documentation for console command connect to use ip:port#company parameter format, in line with command line help (r19374)
- Change: [NewGRF] Increase railtype cost range (r19306)
- Fix: Mark industry windows dirty more often [FS#3701] (r19443)
- Fix: Custom group names are misaligned with default ones when using rtl languages [FS#3700] (r19438)
- Fix: With certain game settings one could clear tiles for free when building long roads (r19436)
- Fix: When loading a savegame created with a house NewGRF without that NewGRF available all houses became tall office blocks (r19435)
- Fix: Limit rail clearance earnings to 3/4s of rail build cost, to avoid money making loophole when rail build cost is less than rail removal earnings (r19433)
- Fix: Crash when the error message 'owned by <town>' was shown [FS#3696] (r19432)
- Fix: [NoAI] When the title game contains an AIPL block the AI settings where overwritten by those from the title game (r19429)
- Fix: Gracefully handle the case where we cannot open a .tar file (r19427)
- Fix: [YAPP] A train on a bridge/tunnel was not always found when checking for trains on a reserved path (r19425)
- Fix: [NoAI] The AI Debug window did not open if an AI or library fails to compile when loading a savegame [FS#3669] (r19395)
- Fix: One could not level the whole map anymore at once (r19392)
- Fix: Only show the 'No AIs available' error message when explicitly changing the number of AI opponents [FS3676] (r19389)
- Fix: [NoAI] When reloading a savegame, an AI failing to compile could trigger (trying) to read the not yet loaded information of another AI via the AI Debug window and its 'open with the most recently used AI' feature [FS#3666] (r19388)
- Fix: Close all orders windows when switching companies [FS#3671] (r19387)
- Fix: [IPv6] Netmask calculations were wrong if cidr >= 32 [FS#3684] (r19385)
- Fix: Overbuilding bridges, rail stations did not properly update PBS reservation [FS#3680] (r19384, r19383)
- Fix: [NoAI] List valuator could cause invalid iterators [FS#3665] (r19367)
- Fix: Close error messages about missing ownership when the company closes or is taken over [FS#3663] (r19358, r19357)


### 1.0.0-RC2 (2010-03-04)

- Feature: [YAPF] Consider the railtype imposed speed limit for pathfinding (r19301)
- Feature: BaNaNaS support for music sets (r19262)
- Feature: [NewGRF] Add 2 bits of pseudo-random data for rail types, based on tile location (r19235)
- Feature: [Windows] Add OpenMSX to the installer (r19220, r19219)
- Feature: [NewGRF] Add CB36 support for aircraft properties 0F and 11 (r19218)
- Feature: Scroll to current order destination when ctrl+clicking the start/stop bar (r19216, r19215)
- Feature: Concept of fallback base sets, i.e. do not automatically load the NoMusic/NoSound sets when there is another set; make NoSound part of base installations (r19214, r19213, r19212, r19211, r19206)
- Feature: Support for genders for cargoes, industries, vehicles, stations (r19180, r19179, r19178, r19177)
- Change: Increase the default small font size for freetype fonts as 6 point fonts are usually unreadable [FS#3655] (r19308)
- Change: [NewGRF] Railtype cost factor from byte to word value (r19306)
- Change: Improve error message with track building when signals are in the way (r19190, r19189)
- Change: Do not print the absolute path to AI script files in the AI debug window, use the relative path from /ai/ instead (r19166)
- Change: The Debian packaging; bring it in sync with the packaging used at Debian excluding package splitting (r19162)
- Fix: [Windows] Disable sound when a sound error happens instead of crashing [FS#3652] (r19304)
- Fix: [NewGRF] Return the TTD airport type in station var 0xF1 (r19299)
- Fix: [NewGRF] Segfault when station vars 0xF2/0xF3 is accessed when there is no truck/bus stop (r19298)
- Fix: [NoAI] Some methods of AIAbstractList left invalid iterators [FS#3566] (r19293)
- Fix: [YAPP] If reversing at path signals was disabled, a train would not reverse when hitting the back of an one-way signal (r19286)
- Fix: [NewGRF] Ensure prices cannot be set to zero. Zero prices break a lot of the internal logic to determine whether something has been done [FS#3646] (r19277)
- Fix: 'Cannot build <industry> here... <industry> in the way' showed the to-be-built industry twice, instead of the to-be-built industry and the industry that is in the way [FS#3618] (r19265)
- Fix: Writing (console) output to a file failed on Windows if the date would not be logged [FS#3639] (r19252)
- Fix: [NewGRF] Some GRF error messages did not free the previous error messages, creating a memory leak (r19251)
- Fix: With RTL languages clicking a horizontal scrollbar that could not scroll could cause a crash [FS#3643] (r19250)
- Fix: Start and end tiles were swapped in CMD_REMOVE_LONG_ROAD causing too much road to be removed [FS#3642] (r19249)
- Fix: DOS 'port' did not compile anymore (r19248)
- Fix: The -M command line option did not work (r19233)
- Fix: GetDestination() is invalid for nearest-depot orders (r19210)
- Fix: Compilation was broken for gcc 3.3 (r19207)
- Fix: The vehicle info in the autoreplace gui was drawn even when the window was shaded [FS#3634] (r19187)
- Fix: When selecting 'build many industries' in the scenario editor the 'build' button was not enabled [FS#3632] (r19176)
- Fix: Buoys are no Stations, only BaseStations (r19174)
- Fix: Under some circumstances timidity (via extmidi) would not shut down properly causing all kinds of trouble (e.g. blocked audio output). Try harder to shut down timidity and first shut down the music so shut down order is the inverse of initialisation order (r19168)
- Fix: Industry 0 could be chosen even if not available [FS#3631] (r19167)
- Fix: Vehicle running costs should not be changed in a running game [FS#3629] (r19165)


### 1.0.0-RC1 (2010-02-18)

- Feature: Allow to select different land colours for the smallmap (r19064)
- Feature: [NewGRF] Action 3/2/1 (i.e. new graphics) support for rail types (r19056)
- Feature: Add zoom-out to smallmap (r19039)
- Add: [NoAI] AIOrder::[G|S]etStopLocation to get/set the stop location of trains in a rail station (r19014)
- Change: Move home directory to a better place in Haiku [FS#3625] (r19151)
- Change: Do not load the 'new game' NewGRFs when you are certain the savegame would not have been saved with them, i.e. do not load the 'new game' NewGRFs for TTO savegames (r19044)
- Fix: Invisible depots draw the track, so also draw the overlays (r19154)
- Fix: [v]seprintf should return the number of added characters excluding '\0' on truncation [FS#3627] (r19149, r19148)
- Fix: [YAPF] Look-ahead for multitile waypoints 'made up' data that should not go into the cache, causing desyncs in MP [FS#3619] (r19141)
- Fix: Report a more useful error when failing to build a bubble generator (r19137)
- Fix: Resize station cargo widget when needed to display all accepted cargo types [FS#3617] (r19123)
- Fix: [NewGRF] Industry property 0x17 was interpreted incorrectly and in some cases circumvented the density difficulty setting (r19120)
- Fix: Removing towns (in the scenario editor) that had stations/depots refer to them or vehicles were on the town's road could cause a crash [FS#3616] (r19119)
- Fix: In the order window the Non-stop dropdown was not enabled for depot and waypoint orders and some buttons were raised too soon [FS#3593] (r19118, r19117)
- Fix: Do not crash on broken lng file and prevent it from happening again [FS#3611] (r19113, r19112)
- Fix: Not all news data was properly freed when starting a new game [FS#3614] (r19105)
- Fix: The BeMidi driver was broken [FS#3610] (r19097)
- Fix: Crash when one of the items in the news_display group in the config file has no value (r19096)
- Fix: Crash when a base set has an empty metadata field (r19095)
- Fix: Possible read/write after free when the client triggered the server to close the connection [FS#3599] (r19072)
- Fix: Remove Bidi control characters from the reordered text so they are not drawn [FS#3604] (r19067)
- Fix: [NewGRF] Settings that are part of the 'TTDPatch flags' can cause desyncs if they are changed in network games (r19066)
- Fix: When banning yourself via rcon do not send the 'command response' to the client as the connection has already been terminated [FS#3598] (r19054)
- Fix: Mass stopping/starting/autoreplacing gave empty errors when there were no vehicles [FS#3577] (r19024)
- Fix: City airport introduction date had become 5 years later (r19023)
- Fix: Loading old (0.1-ish) savegames failed (r19022)
- Fix: Do not NULL the pointers when saving the savegame on an error during saving; the savegame is still valid, so do not make it invalid [FS#3570] (r19021)
- Fix: When removing roads, the player was also charged for removing the foundations [FS#3591] (r19016)


### 1.0.0-beta4 (2010-02-04)

- Feature: Content mirroring support (r18994)
- Feature: Show empty query after creating new group (instead of 'Group nnn') (r18981)
- Feature: [NewGRF] NewGRF-settable rail type properties, increase number of possible rail types, per rail type speed limits (r18970, r18969)
- Feature: [NewGRF] Allow layering of multiple groundsprites in spritelayouts of stations, houses and industrytiles; so hacks with zero-sized bounding boxes are no longer needed and no longer cause trouble (r18959)
- Feature: [NoAI] Introduce GetBuildCost functions in several classes to get easier cost estimations before you start building (r18955)
- Feature: [NoAI] Allow editing AI settings while an AI is running (r18953)
- Feature: Make it possible to change newgame settings from within a game via the console (use setting_newgame instead of setting) [FS#2885] (r18943)
- Feature: Add a setting to reduce/disable aircraft crashes [FS#2678] (r18942)
- Feature: Make the crash position of aircraft a bit random by giving aircraft a chance to crash every tick they are breaking (r18940)
- Change: [NoAI] Use the highest version of an AI that can load the AI data from a savegame instead of the exact same version [FS#3232] (r18944)
- Fix: Off-by-one in the music playlist (song missing) [FS#3588] (r18997)
- Fix: [NewGRF] industry var A5 (=high 8 bits of var A4) returned the high 8 bits of var A2. Same problem for 9B/9A/98 (r18988)
- Fix: [NoAI] Make building long rails fail for AIs if there is an obstacle in the way (r18987)
- Fix: Possible invalid memory access when merging companies [FS#3584] (r18978)
- Fix: Estimating the cost of removing statues could clear the presence flag in the town (r18976)
- Fix: CMD_BUILD_ROAD missed CMD_AUTO. Also do not access tiles anymore after clearing them; that fails either in test or exec run [FS#3578] (r18974)
- Fix: Train acceleration for original acceleration model was not updated if the train's power changed (r18971)
- Fix: Make sure the values of settings loaded from a savegame are valid (r18950)
- Fix: After clicking move up/move down in the NewGRF/AI the selected item could be out of range [FS#1510] (r18948, r18947)
- Fix: It was possible to change AI settings without changing to the custom difficulty level by using the query text window (r18946)
- Fix: Remove the loading indicators as soon as a train crashes [FS#3575] (r18941)
- Fix: [NewGRF] Industrylayout's special water tile check did not properly check for crossing north border of map (r18938)
- Fix: [NewGRF] Value of variables 90 and 91 were not what NARS expects [FS#3551] (r18935)
- Fix: [Windows] In some rare case a deadlock could happen when stopping sound driver (r18934, r18913, r18892)
- Fix: [NoAI] Autoreplace is also valid for the default group (r18930)
- Fix: Preserve some timetable related vehicle flags during autorenew/-replace [FS#3568] (r18929)
- Fix: AIOrder::GetOrderDestination could return a non-waypoint tile when the waypoint was a multitile waypoint [NoAI] (r18924)
- Fix: On bankruptcy the company value did include the loan and as such the value at which you bought the company was too low [FS#3561] (r18908)
- Fix: Writing LZO-compressed savegames would produce invalid files and potentially overwrite memory (r18904)
- Fix: [Windows] File locations for Windows were not documented correctly for all versions of Windows [FS#3562] (r18903)
- Fix: Pressing cancel for the query windows of the world generation window caused the default to be set instead of no changes to the value [FS#3558] (r18896)
- Fix: Avoid duplicate path separator when searching for PNG files which prevented tar-lookups (r18891)
- Fix: [NewGRF] Perform bounds checking for all NewGRF data reads. Explicit length checks (which were not always correct) are no longer needed so these are removed to simplify code (r18884)
- Fix: Aircraft can be send to an hangar when the target airport has one and when it can land, not only when it has a plane terminal (r18880)
- Fix: [NewGRF] Crash when a NewGRF used var62 in an industry tile chain when the industry tile was part of an original industry (r18878)


### 1.0.0-beta3 (2010-01-21)

- Feature: Make building (long) roads work like building rail; build upon the first obstruction instead of failing totally [FS#3318] (r18803)
- Feature: Allow user customisable compression levels for the zlib compression (r18772)
- Feature: [NoAI] Rerandomise AIs on reloading (via the debug window) when they were randomly chosen [FS#3095] (r18763)
- Feature: [NewGRF] Implement VarAction2Houses variables 66 and 67 (r18736)
- Change: [SDL/Allegro] Make the number of samples/frequency runtime configurable (r18821, r18820)
- Change: Be consistent with airport naming [FS#3493] (r18819)
- Change: [NewGRF] Consider callback 19 only broken after subcargoes 0 to 255 have been used, instead of stopping at 15 (r18774)
- Change: Replace MiniLZO with the real library (r18769)
- Fix: Town noise population settings could not be changed in-game [FS#3532] (r18864)
- Fix: Do not pass AI strings through iconv [FS#3544] (r18862)
- Fix: Do not do screen redraw when the landscape contains broken slopes [FS#3540] (r18850)
- Fix: Default-waypoint was drawn incorrectly for monorail and maglev in the waypoint picker (r18841)
- Fix: In some cases error messages were not properly sent to the client before closing the connection. As a result the client would say 'connection lost' when the cause was something completely different (r18801)
- Fix: In some cases with invalid packets one can crash OpenTTD (r18800)
- Fix: [SDL] Possible deadlock when killing OpenTTD while starting it [FS#3521] (r18796)
- Fix: When copying an 'image' back into the buffer the 32bpp anim blitter triggered palette check of the whole window instead of only the part the got copied back [FS#3504] (r18791)
- Fix: Viewport could jump under high CPU load [FS#3515] (r18790)
- Fix: Crash when getting the tooltip of the industry amount in the world generation window [FS#3516] (r18787)
- Fix: [NoAI] NoAI's custom implementation of DoCommandP has several flaws (not masking of bits, not resetting town authority updates on checks/estimates, ...). Let it use DoCommandPInternal, DoCommandP without showing error messages and such, instead [FS#3507] (r18786)
- Fix: [NoAI] AIs did update their last cost incorrectly in network games if the cost of the DC_EXEC phase differed from the ~DC_EXEC phase (r18781)
- Fix: [YAPP] Remove a special check for two-sided signals when reserving a path as this causes trains to get stuck in front of them [FS#3483] (r18778)
- Fix: Assertions because the unloading and signal wait counter got into each others way [FS#3422] (r18764)
- Fix: [NewGRF] Spritelayouts do not need an Action 1 if only using default sprites [FS#3497] (r18761)
- Fix: [NewGRF] Action 9 did not properly detect whether an Action 8 was encountered already [FS#3500] (r18760)
- Fix: [NewGRF] Do not segfault when a NewGRF contains an Action 2 and Action 3 but no Action 0 (r18759)
- Fix: [NewGRF] CircularTileSearch skipped a few tiles close to the starting tile, as a result some NewGRF houses could be placed too close together [FS#3495] (r18755)
- Fix: The cargo payment button states were not properly set on opening the window [FS#3492] (r18750)
- Fix: [NoAI] The AI's name and version in the debug panel was not properly centred [FS#3491] (r18749)
- Fix: Clear the cached NewGRFs of a server when receiving a reply instead of when requesting the information. With slow/unstable network connections it would look like the NewGRF settings button went randomly missing [FS#3489] (r18746)
- Fix: Do not toggle the sticky- and shading-button twice per mouseclick when clicking fast [FS#3487] (r18744)
- Fix: [NewGRF] House prop 1D was trashed when a NewGRF contains prop 14 after prop 1D (r18742)
- Fix: Building trees on snow with rocks underneath caused an assert [FS#3501] (r18739)
- Fix: When a tree died while there was snow the amount of snow on the tile changed (r18738)
- Fix: [NewGRF] VarAction2Station variable 67 was not swapped properly for orientation (r18737)


### 1.0.0-beta2 (2010-01-05)

- Feature: Do not delete the rough/rocky status of a tile when it is covered by snow, this allows rocky tiles under snow if you have a variable snowline (r18719)
- Feature: [NewGRF] Add support for custom station foundation graphics (r18708)
- Feature: Allow virtually paying a percentage of the leg profit in feeder chains. This to give the user a better chance to get a feeder system without 'losses' (r18703)
- Feature: Configurable slope steepness for trains from 0% to 10%, default is 3% as before [FS#3459] (r18674)
- Feature: Allow contour-map to be shown with coloured industries in smallmap [FS#567] (r18665)
- Add: [NoAI] AIEngine::IsBuildable to check if you can build a certain engine (r18687)
- Change: [NoAI] Merge buoy and waypoint functions (r18725)
- Change: [NoAI] AIEngine::IsValidEngine will now also return true when you have at least one vehicle of that type even if you cannot build it anymore (r18687)
- Change: Update Squirrel from 2.2.3 to 2.2.4 (r18639)
- Fix: New viewports did not centre on the correct position [FS#3414] (r18730)
- Fix: The lock in the company window was only drawn for your own company [FS#3427] (r18729)
- Fix: Some invalid gender/plural indices in strings, which could eventually cause crashes [FS#3480] (r18727)
- Fix: With non-uniform industries the 'supplies' text when building a station could be incorrect (missing a cargo) [FS#3463] (r18726)
- Fix: Refitting a non-refittable vehicle to its default cargotype failed, causing problems for AIs [FS#3475] (r18724)
- Fix: The join station window did not account for scrolling, so if you did scroll the station was not joined with the selected station [FS#3476] (r18713)
- Fix: The wrong town is mentioned in the error when trying to make one way roads of town owned roads [FS#3478] (r18710)
- Fix: Animation buffer for 32bpp-anim blitter was only validated during sprite blitting, other drawing operations did not check it. Initial startup and window resize could therefore lead to crash [FS#3464] (r18709)
- Fix: Enable DrawGroundSpriteAt() to deal with foundations as DrawGroundSprite() does, and use this for drawing one-way-road-signs and clear-land-fences [FS#3467] (r18702)
- Fix: When deleting an industry on water (oil rigs) the tiles on water were not marked dirty (r18700)
- Fix: [NewGRF] GRF parameters were not properly initialised to zero, and not always checked for valid range (r18699)
- Fix: Crash when scrolling to an item removed by filtering in the 'add NewGRF window' [FS#3471] (r18697)
- Fix: [NoAI] AITile::IsCoastTile returned false for coast tiles with trees on them [FS#3404] (r18696)
- Fix: After a company went bankrupt it was impossible to build a new waypoint close to a deleted one until the grey sign was gone (r18692)
- Fix: Some keys that open windows that want to be located relatively to the toolbars/statusbar could cause a crash when in one of the end game screens [FS#3469] (r18690)
- Fix: In some cases _sl.chs is used when not initialised. As _sl.chs always refers to a single table when initialised replace _sl.chs with the actual table [FS#3470] (r18686)
- Fix: [NewGRF] Tile area of waypoints was not correctly given to NewGRFs in case of multi tile waypoints (r18679)
- Fix: [NewGRF] If an action B did not have a 'data' string but would print it OpenTTD would segfault [FS#3452] (r18671)
- Fix: Update all tiles when snowline height changes in larger steps than one tile [FS#3455] (r18670)
- Fix: [NoAI] Crash when trying to get the order destination of a 'nearest depot' order [FS#3454] (r18667)
- Fix: Aircraft on the metropolitan airport took a long route to the closest loading pad [FS#3169] (r18661)
- Fix: [NewGRF] Wrong strings drawn for cargo subtype in vehicle details [FS#3443] (r18658)
- Fix: When trying to attach a wagon to an existing free wagon chain, do not attach it to itself [FS#3442] (r18653)
- Fix: [NoAI] When AI tried to create NO_UNLOAD order, GOTO_NEAREST_DEPOT order was created instead [FS#3438] (r18651)
- Fix: [YAPP] Treat the backside of an one-way path signals as a safe waiting point [FS#3430] (r18648)
- Fix: [YAPP] A train inside a station was not always found when checking for trains on a reserved path (r18647)
- Fix: [YAPP] Do not extend the reserved path through a newly built path signal directly in front of a stopped or loading train. Also restore the reserved path in more cases after removing a signal [FS#3418] (r18646)
- Fix: Company league window was too narrow [FS#3434] (r18644)
- Fix: Rotation could not be changed for heightmaps [FS#3436] (r18643)
- Fix: When a company goes bankrupt and has vehicles on a drive through road stop that is not theirs, the 'filled' cache of the road stops would get corrupted [FS#3432] (r18642)
- Fix: Downloading music sets would fail (r18638)
- Fix: Crash when invalid pointers are left due to saveload failing at e.g. decompressing the savegame [FS#3421] (r18634)
- Fix: When making a screenshot the name of the previous screenshot went missing in the 'successful screenshot' message and the console command would be shown twice [FS#3419] (r18631, r18630)
- Fix: (un)loading counter being reset while loading a train and changing the (path) signal setup around the station [FS#3422] (r18628)
- Fix: {CARGO} takes 2 parameters, not 1. This made {N:XYZ} commands after CARGO mess up their indices and that then triggered an assertion [FS#3425] (r18626)


### 1.0.0-beta1 (2009-12-24)

- Feature: Music replacement sets, like graphics and sound replacement sets (r18608)
- Feature: Add shading and unshading of windows [FS#2943] (r18588)
- Feature: Initially select the last joined server when going to the server list [FS#3311] (r18578)
- Feature: Additional map variety option for TGP landscape generator (r18541)
- Feature: Add the possibility to not make new tree tiles in-game (r18522)
- Feature: Moving of AIs in the AI configuration window [FS#3359] (r18516)
- Feature: Make maximum pathfinder penalties for finding depots customisable, also increase it slightly to 20 tiles worth of penalties (r18481)
- Feature: [Strgen] Allow G and P to 'select' substrings of STRINGn for getting their gender (r18444)
- Feature: Make penalty for road stop occupancy user configurable (r18404)
- Feature: Fully scalable, by font size and content, GUI and improved right-to-left language support [FS#1905] (r15800-r18350)
- Feature: Set the start time of a timetable (r18294)
- Feature: Show the expected arrival/departure dates in the timetable window (r18285)
- Feature: [NewGRF] Add new price bases for removing industries, building/removing unmovables (new objects), building/removing rail-waypoints/buoys, interacting with town-authority, building foundations, funding primary industries (when not prospecting) and towns (r18283)
- Feature: Founding towns in-game (r18281)
- Feature: [NewGRF] Make price base multipliers related to vehicles only apply to the GRF locally, if it defines engines of that type itself (r18268)
- Feature: [NewGRF] CB 36 for roadvehicle property 09 'running cost factor' (r18011)
- Feature: Non-automatic screenshot name can be entered in console (r17938)
- Feature: Make it possible to disable background saving, only via the config file/in game console though [FS#2633] (r17893)
- Feature: Automatically select the railtype with the most engines for the autoreplace window/try to avoid showing an empty autoreplace list [FS#1760] (r17892)
- Feature: Show maximum tractive effort in the 'exclusive test'/'early offer'/'engine preview' window [FS#1619] (r17891)
- Feature: Double clicking on a NewGRF opens the parameters window (r17890)
- Feature: Double click on a item in the refit list refits without the need to click on the refit button (r17889)
- Feature: [NewGRF] Textstack support for CB 37 [FS#1862] (r17802)
- Feature: [OSX] Implement automatic fallback font selection for OSX (r17794)
- Feature: Translatable base sound/graphics set descriptions (r17790)
- Feature: Show the nickname of the person you are PMing [FS#3116] (r17741)
- Feature: [OSX] Add a MIDI driver using Cocoa/CoreAudio [FS#3223] (r17710)
- Feature: [OSX] Implement clipboard support for OS X [FS#2053] (r17708)
- Feature: Possibility to choose (randomise or enter custom) town name before its creation (r17612)
- Feature: [NewGRF] Callbacks for houses to disable drawing foundations and to disable slope changes, like industry tile callbacks 30 and 3C (r17558)
- Feature: [NewGRF] Implement callback 145 (custom station rating) (r17547)
- Feature: Filtering in Add-NewGRF dialogue (r17541)
- Feature: Add the date to all logging in the (real, not in-game) console if show_date_in_console is set. For dedicated server binaries the default is 'on', for the rest it is 'off' [FS#2339] (r17488)
- Feature: Reconnect console command (r17466)
- Feature: Allow building rail stations over existing rail without signals but will upgrade normal rail to electrified rail if necessary (r17460)
- Feature: Crash logger for all Unixy OSes in a similar way as the Windows crash logger (r17453)
- Feature: Open the 'Rename group' dialogue after creating new group (r17281)
- Feature: [NoAI] Older API compatibility wrappers, so one can get the 0.7 API in later versions while keeping the real API clean (r17214)
- Feature: The Windows installer can now optionally download OpenGFX and OpenSFX (r17191)
- Feature: Sort vehicle lists on (timetable) delay [FS#2945] (r17182)
- Feature: Localised decimal separator (r17157)
- Feature: Improved the sample rate conversion a bit (r17146)
- Feature: Allow higher sample rate and higher quality samples (r17140)
- Feature: Sound replacement sets, like graphics replacement sets (r17139)
- Feature: Multi tile waypoints (r17002, r17000, r16993)
- Feature: [NewGRF] Turn variable 0E/8E (vertical offset for trains in depot) and variable 1E/9E bit 3 (wagon width in depot) into grf-local variables (r16867)
- Feature: Highlight whole articulated vehicles in traindepot instead of only the first part (r16818)
- Feature: Ability to enter server and company password via command line when joining a server [FS#570] (r16555)
- Feature: Give the town generator a slight tendency to build towns near water by not discarding watery random tiles but by searching for near land [FS#2635] (r16147)
- Feature: Configurable digit group separator per language with user override (r16129)
- Feature: Make the first 4 rail building tools behave more like autorail (r16095)
- Feature: Allow sorting stations by the lowest cargo rating instead of only by the highest cargo rating [FS#597] (r16045)
- Feature: Allow filtering of vehicle purchase lists by cargo [FS#1941] (r16042)
- Feature: Allow (per order) to let a train stop at the near end, middle or far end of a platform from the point of view of the driver of the train that enters the station (r16037)
- Feature: Listen on multiple IPs/sockets and register all IPs to the master server (r16014, r15975, r15973, r15971)
- Feature: Full IPv6 support (r16000)
- Feature: Allow train vehicles to be shorten to 1/8 length, even if not at the end of the train (r15793)
- Add: [NoAI] AIOrder::AIOF_GOTO_NEAREST_DEPOT for goto nearest depot orders (r18518)
- Add: [NoAI] Enable the squirrel standard math library (r17498)
- Add: [NoAI] A vehicle list for all vehicle that are ordered to a specific depot (r17486)
- Add: [NoAI] AISubsidy::SubsidyParticipantType, AISubsidy::GetSourceType, AISubsidy::GetSourceIndex, AISubsidy::GetDestinationType, AISubsidy::GetDestinationIndex for better subsidy management (r17115)
- Change: Forbid industries to clear sea/river when levelling land (r18554)
- Change: Make it visible when you are to pass the next signal on danger and possible to cancel it (r18515)
- Change: Move the 'check online content' button from the AI list window to the AI configuration window. This makes it consistent with the NewGRF windows [FS#3340] (r18507)
- Change: Use zł instead of zl for the Polish Zloty [FS#565] (r18434)
- Change: Show different texts in town GUI when the town does not need food the whole year to grow (r18433)
- Change: Make road vehicles behave more like trains 'around' stations and use pathfinder penalties to determine to which 'part' to go (r18382)
- Change: Do not split up articulated vehicles in the train details view. If an articulated vehicle it too 'wide' draw the information on the next line and if there are multiple cargoes split that over multiple lines too [FS#2923] (r18344)
- Change: Make pause on join pause during the whole joining (including download) phase [FS#3287] (r18054)
- Change: Prefer extmidi over allegro midi and allegro over null driver [FS#3272] (r17875)
- Change: Several improvements to the performance of CargoPackets/CargoLists; time spent in those functions reduces by 55-85% (r17840, r17836, r17818, r17814, r17812, r17801, r17736, r17735, r17733, r17731, r17730)
- Change: [SDL] Make 'update the video card'-process asynchronous. Improvements of 2%-25% (real time) during fast forward on dual core/hyperthreading-enabled CPUs (r17776)
- Change: [NoAI] Make AIEngine:CanRefitCargo() not report refittability to Mail by default for aircraft. It is not necessarily true, and the special case of carrying both passenger&mail is better handled by AIs themself than by the API (r17719)
- Change: [OSX] Do not use deprecated methods/undocumented functions [FS#1411] (r17712, r17711)
- Change: Make SDL's video driver more likely to be loaded than Allegro's video driver; SDL seems to perform better (r17583)
- Change: Do not assume that there is always 'another' industry tile after two '0x18' industry tiles (r17521)
- Change: Make the performance ratings harder to exploit; only count profitable vehicles and recently serviced stations [FS2459] (r17485)
- Change: When removing a station or waypoint keep the rail unless Ctrl is pressed. This makes the behaviour consistent between the two (r17471)
- Change: Show the client id in join messages at the server (r17467)
- Change: NewGRF price modifiers now take effect every time when loading NewGRFs instead of once on gamestart (r17433)
- Change: Make a distinction between missing and corrupted data files. If (at least) one data file is missing do not consider the set to be usable. Do also no autodetect sets with missing files (r17241)
- Change: Update MiniLZO to 2.0.3 (r17215)
- Change: Update Squirrel to 2.2.3 (r17195)
- Change: Remove UNICODE notice in windows installer (r17186)
- Change: Apply the subsidy when subsidy's destination is in station's catchment area and cargo packets originate from subsidy's source [FS#265,FS#2094,FS#2589] (r17113)
- Change: Subsidies are not bound to stations after awarding anymore, they still apply to town or industry, no matter what station is used for loading and unloading. Awarded subsidies from older savegames are lost [FS#1134] (r17113)
- Change: [NoAI] Add AIBaseStation as a parentclass for AIStation and AIWaypoint, and move GetName, SetName and GetLocation to AIBaseStation (r17011)
- Fix: Conditional orders were seen as 'valid' and as such aircraft with only conditional orders did not crash (r18615)
- Fix: Pressing default for the starting year/snow line height edit boxes of the world generation windows did not work [FS#3398] (r18586)
- Fix: [OSX] Try to get a generic RGB colour space if getting the system colour profile failed [FS#3198] (r18573)
- Fix: [NewGRF] House property 15 did not work [FS#2613] (r18567)
- Fix: Do not try to overtake a vehicle in a road station as overtaking in a station is not allowed [FS#3390] (r18561)
- Fix: Make aircraft behave the same on autoreplace/autorenew as other vehicle types (r18553)
- Fix: First do the time-since-last-service check and only then determine whether autoreplace needs to take place. This way they will not keep autoreplacing continuously on failure, but only after some timeout. Also check some minimal requirements (engine availability, refittability) and a heuristic for the needed money when sending vehicles for autoreplace [FS#1762] (r18551, r18549)
- Fix: Do not account for path reservation costs when entering a signal block via a 'block' signal. This way you will not get double penalties, both red signals and reservation costs, for the block signalled tracks [FS#2722] (r18535)
- Fix: [NewGRF] An industry NewGRF that defined a too small size for action0 prop 0A could cause a crash (r18527)
- Fix: Allegro does not like to work with extmidi, so warn the user about that [FS#3272] (r18520)
- Fix: When you pass a signal at danger, in a PBS controlled area, do not try to do the 'safe' thing and stop, but continue going; the user wanted the train to pass the signal at danger so they have to suffer the consequences. Of course one can always stop the train manually [FS#2891] (r18515)
- Fix: No error message was created for the first fatal NewGRF error [FS#3368] (r18506)
- Fix: Improve airport movement on several airports [FS#3169] (r18505)
- Fix: Autoreplace and autorenew always reset their cargo sub type to 0. Now find a sub cargo type with the exact same name and use that, otherwise fallback to 0. So cargo sub types can be maintained via autoreplace *if* the new vehicle supports the same cargo sub type [FS#3159] (r18499)
- Fix: Cloning of vehicles could create vehicles with invalid cargo sub types for the build year of the vehicle. Fall back to another cargo sub type with the exact same name, otherwise fallback to cargo sub type 0 [FS#2616] (r18498)
- Fix: [NewGRF] Direction is accounted for long before motion counter is updated (r18479)
- Fix: Moving vehicles around/selling vehicle in the train depot could create states that are not allowed by the NewGRF attach callback [FS#3146] (r18472, r18470)
- Fix: Unselect an AI in the AI Settings window when it falls out of the range of active AIs [FS#3357] (r18436)
- Fix: Road vehicles would not pick an empty drive through stop. Now they will *if* the penalty for driving around is less than the occupancy penalty [FS#1944] (r18404)
- Fix: Long (articulated) road vehicles could block loading of others when the following road vehicle already got 'permission' to go to the next bay even when it could not reach it [FS#1495] (r18404)
- Fix: The tree 'which one to draw' hash was not anywhere near random and thus showed a very visible repeated pattern when only one tree type was used [FS#3343] (r18398)
- Fix: [NoAI] Make AIIndustryType::GetConstructionCost() return -1, if the industry is neither buildable nor prospectable (r18276)
- Fix: Use free type ascender/descender metrics to position font offset correctly (r18096)
- Fix: Make the 'pause' chat message when actually executing the pause command. This to prevent showing paused and especially unpaused to be shown when the state does not change. Output now mentions whether pause changes keep the game paused and what reasons for pausing there 'currently' are (r18052)
- Fix: [NoAI] Improve behaviour of (AIEngine|AIEventEnginePreview)::GetCargoType() and AIEngine::CanRefitCargo() wrt. articulated vehicles (r17898)
- Fix: [NewGRF] CB15 and CB36 (capacity) were not always called when they should [FS#3255] (r17897)
- Fix: Invalidate cache of vehicle vars 40-43 after testruns of certain commands, that change them temporarily (r17894)
- Fix: [OSX] The splash image was not displayed if the Quartz video driver was used (r17793)
- Fix: Do not let aircraft drive a while over the grass when landing at high altitude airports [FS#3259] (r17762
- Fix: Make the -c <config file> location relative to the current directory instead of the directory of the binary [FS#3247] (r17686)
- Fix: Some semaphore signals fell outside of the signal GUI. Now the signals are properly centred which should make that problem go away [FS#3242] (r17657)
- Fix: Some inconsistencies with the difficulty settings in the scenario editor. Also re-enable changing some difficulty settings (e.g. max loan) in the scenario editor [FS#3219] (r17644)
- Fix: Do not accept cargo produced in the same industry; generalise and improve the check used only for valuables (r17437)
- Fix: Pay only for cargo actually delivered, not for all cargo unloaded at station; can differ with 'stockpiling' industries (r17436)
- Fix: Improve movement of aircraft; do not make turns bigger than 45 degrees while in flight, do not move while turning on the ground (r17415, r17405)
- Fix: Crash in order GUI when changing some orders with both the mouse and keyboard at the exact same time [FS#2859] (r17384)
- Fix: Trains would not show smoke if the load/unload counter was not 0, though there does not seem to be a reason to check that variable anyhow anymore [FS#3162] (r17352)
- Fix: One was not offered to take over bankrupt companies anymore; caused by the introduction NoAI, although NewAI had the same problem too [FS#2769] (r17345)
- Fix: Minor improvements of the airport state machines (r17338, r17337, r17334)
- Fix: Road vehicles forgetting their servicing order when the path takes them away (in bird distance) from their destination first [FS#3057] (r17333)
- Fix: Mention of Ctrl modifier was missing from some tooltips [FS#3120] (r17300, r17297)
- Fix: Keep vehicle news and viewports following vehicles, when autoreplacing/renewing them [FS#3048] (r17147)
- Fix: Inconsistency between signs of stations and waypoints [FS#3081] (r17040)
- Fix: NewGRF stations would be triggering assertions for waypoints all over the place when using the more advanced station types [FS#2996] (r16909)
- Fix: Skipping a 'nearest depot order' because none could be found could cause multiple orders to get skipped [FS#2925] (r16457)
- Fix: Makedepend cannot handle the amount of files we have and it also miss some dependencies. So use our custom implementation of makedepend (r16307)
- Fix: Autopause and manual pausing conflict with each other, new game + pause on new game + autopause make the game not unpause on the first join [FS#2864] (r16242)
- Remove: [NoAI] AIVehicle::SkipToVehicleOrder as it was a duplicate of AIOrder.SkipToOrder (r18504)
- Remove: OPF for RVs and NTP for trains; both the oldest path finders (r18362)
- Remove: Support for gcc2. It has not been able to compile OpenTTD for months. All attempts to do another workaround failed (r16492)


## 0.7.x

### 0.7.5 (2009-12-23)

(None)


### 0.7.5-RC1 (2009-12-14)

- Add: Some missing latin-ish characters from the OpenGFX set (r18431)
- Change: Recolour the bubble generator just like any other industry [FS#3349] (r18409)
- Fix: Read after free in case no network connection could be made with the content server (r18493)
- Fix: [NewGRF] Initialisation of cargo payment was broken for NewGRF cargoes [FS#3344] (r18475)
- Fix: [NoAI] AIOrder::SkipToOrder did not properly resolve ORDER_CURRENT (r18471)
- Fix: When moving a wagon and only the last part of a dual headed engine you could split the dual headed engine over two vehicles. This could be used to crash servers [CVE-2009-4007] (r18462)
- Fix: [Windows] Forgot to load the symbol from SDL.dll (r18439)
- Fix: Do not run the 'jam protection' for vehicles in a depot [FS#3360] (r18428)
- Fix: [Windows] The help window would be too large in some cases [FS#3327] (r18424)
- Fix: Under some circumstances a pointer could be left untouched and then freed. Make sure this does not happen by ensuring it starts out as NULL instead of 'garbage' [FS#3298] (r18418)
- Fix: On slopes the original and better road layouts did not check their minimum distance requirements [FS#3332] (r18415)
- Fix: Aqueducts were not influenced by the 'long bridges' setting [FS#3338] (r18407)
- Fix: Drive through road stops did not get flooded (r18401)
- Fix: [YAPP] Trains on bridges were not found, when searching for the origin of a reservation [FS#3345] (r18392)
- Fix: (Invalid) GRFs could trigger invalid reads (r18391)
- Fix: One could not share orders between buses carrying different cargoes (r18380)
- Fix: Off-by-one in the preconfigured music lists [FS#3339] (r18369)


### 0.7.4 (2009-12-01)

- Fix: Endianness issue with saving the zoom level [FS#3333] (r18351)
- Fix: [NewGRF] When starting a new game the values of action D variable 13 were incorrect [FS#3324] (r18207)


### 0.7.4-RC1 (2009-11-15)

- Change: Prefer extmidi over allegro midi and allegro over null driver [FS#3272] (r17875)
- Change: [NewGRF] Apply default refitmasks only when the NewGRF did not set any of the three refittability properties (xor mask, positive classes, negative classes) (r17663)
- Fix: Crash when an articulated RV is turning on a drive through road station that gets forcefully (bankrupt) removed [FS#3310] (r18049)
- Fix: GCC 4.5 compiling (r18045)
- Fix: AIs failed to load their data from savegames by crashing them when they tried [FS#3290] (r18038)
- Fix: Screen jumped a bit for at least SDL and Allegro when right-click-dragging (r18030)
- Fix: [NewGRF] Improve parsing of RIFF data. Skip unknown chunks and check chunk sizes (r17999)
- Fix: When you start giving money (input window for amount), then get moved to spectators and you click 'Ok' a crash would occur (r17953)
- Fix: Use 24bpp BMP format instead of 32bpp for screenshots. Saves space and is supported by more image viewers (r17943)
- Fix: Close BMP file when making screenshot fails (r17941)
- Fix: Deadlock when trying to create screenshot with too long name (including path) (r17936)
- Fix: Crash when closing NewGRF parameter window with no NewGRF selected [FS#3291] (r17922)
- Fix: 32bpp BMP screenshots were in wrong colours on big endian machines and broken when screen width was not a multiple of 4 (r17910, r17909)
- Fix: Uninitialised values in some paths of loading TTO savegames [FS#3288] (r17908)
- Fix: Make the plane speed setting unchangeable in network games because it can be read by NewGRFs on game load and thus if it changes cause desyncs (r17902)
- Fix: [NewGRF] 'subtract-in' is also signed for production callback version 0 (r17857)
- Fix: [NewGRF] _date_fract runs from 0 to 73 since r2041. Variable 0x09 should not (r17824)
- Fix: Do not fail hard when no soundcard could be detected; just fall back on the null-driver [FS#3268] (r17788)
- Fix: CJK languages do not have spaces, so for adding newlines (multi line strings) we need to (properly) handle the case when there are no spaces instead of truncating the string [FS#3264] (r17772)
- Fix: Powernaut Helicopter got wrong 'load amount' (r17758)
- Fix: [NewGRF] 'last_value' and 'reseed' are shared between procedure and main chain, 'scope' and 'count' are not (r17672)
- Fix: Count only active clients (not those waiting for map download) when checking min_active_clients limit (r16506)


### 0.7.3 (2009-10-01)

- Fix: [NewGRF] Crash when trying to build an industry that has no industry layout defined [FS#3233] (r17638, r17633)


### 0.7.3-RC2 (2009-09-24)

- Update: Documentation about bug reporting and known bugs (r17554)
- Fix: When a command did not fail in test run and failed in execution run, error message was not set. Affects only few commands (r17607)
- Fix: [NewGRF] Crash when defining the same tile in a tile layout twice [FS#3218] (r17605)
- Fix: Vehicle image was not always updated when needed (r17594)
- Fix: [NoAI] Could not query the size of small airports when they could not be build anymore [FS#3212] (r17591)
- Fix: Erroneous message about changing the difficulty level [FS#3220] (r17588)
- Fix: Assertion triggered when the second vehicle in a 101+ (or 11+ if mammoth trains is disabled) vehicle free wagon chain is an engine and the first vehicle is moved to another chain [FS#3208] (r17576)
- Fix: [NewGRF] Memory leak when viewing the NewGRF settings of a server (r17563)
- Fix: [NewGRF] The NewGRF settings of (remote) network games did not get properly updated when the NewGRFs were rescanned causing reading of freed data [FS#2972] (r17562)
- Fix: [NewGRF] Close the 'Add NewGRF' window when you close the 'NewGRF Settings' window. The add window has a pointer to the settings which means that not deleting it would cause dereferencing an already freed pointer [FS#3206] (r17559)
- Fix: Vehicles waiting for their time table did not load anymore after their initial load was completed [FS#3201] (r17551)
- Fix: Aircraft were given an unfair advantage in station rating calculations (r17550)
- Fix: [NewGRF] Sign extending of profit calculation did not work (r17546)
- Fix: [NoAI] AIs had 'infinite' time when running code from the global scope [FS#3202] (r17545)
- Fix: [NoAI] Crash when doing commands in the 'global' scope [FS#3202] (r17544)


### 0.7.3-RC1 (2009-09-13)

- Add: [NoAI] AITown::GetLastMonthTransportedPercentage and AIIndustry::GetLastMonthTransportedPercentage (r17294)
- Add: [NoAI] AICompany::Get/Set PresidentGender (r17016)
- Add: [NoAI] AIEngine::GetDesignDate (r17014)
- Add: [NoAI] AIStation::GetConstructionDate (r17012)
- Add: [NoAI] AIAbstractList::SORT_ASCENDING/SORT_DESCENDING (r17005)
- Change: [NoAI] AITown::GetLastMonthProduction now returns the same value as AITown::GetMaxProduction (r17293)
- Change: Mention the MD5 checksum of the original NewGRF in the 'saveload failed horribly'-error message and make it more clear that the filename is of the current NewGRF [FS#3139] (r17267)
- Change: Make overbuilding the front tile of a road station/depot with road consistent with overbuilding the front tile of tunnels/bridges [FS#2802] (r17239)
- Change: Improve error output on missing or corrupt files (r17238)
- Change: [Unix] Only use colourised error output on interactive terminals (r17227)
- Change: [NoAI] Crash an AI when it uses a DoCommand/Sleep instead of just printing an error message in the AI Debug Window [FS#2980] (r17223)
- Change: [NoAI] When the API requests a string as parameter allow every squirrel type and convert to a string [FS#3101] (r17221)
- Change: Make strgen warn if the translation uses STRINGn or RAW_STRING instead of STRING (r17137, r17129)
- Change: [NoAI] Load the API before compiling an AI script so AIs can subclass API classes and use API constants as part of their own constants (r17043)
- Change: Add notion of Ctrl+Click in the tooltip for Loan borrow/repay buttons [FS#3066] (r16979)
- Change: [MSVC] Make all language files depend on english.txt (r16975)
- Change: There is no point in not randomising engine introduction-date before 1922. Instead disable the randomisation for the first two years after game-start, so you do not have to wait for the first engine (r16929)
- Fix: [Squirrel] In some cases the call stack would not be cleaned up properly during crash handling. Occasionally this causes asserts to be triggered or crashes [FS#3189] (r17515)
- Fix: When loading GRFConfigs from ini file, validate them wrt. duplicate GRF IDs [FS#3197] (r17510)
- Fix: When building a part fails during cloning, sell what was already cloned instead of leaving it 'for free'. Also make cloning multiheaded trains possible with with 'max - 1' vehicles existing [FS#3196] (r17509)
- Fix: [NoAI] The wrong value was restored to SetAllowDoCommand possible resulting in an AI that was not allowed to do any actions (r17500)
- Fix: Road vehicles could get lost when the preliminary destination (for the pathfinder heuristics) is unreachable [FS#3188] (r17491)
- Fix: When building roads is not allowed for town, then do not build the initial piece either [FS#3173] (r17444)
- Fix: Destruction of depots did not remove any vehicle lists related to the depot, causing windows pointing to deleted depots and (thus) crashes [FS#3180] (r17442)
- Fix: Economy recession would never end when economy is set to Steady while in recession (r17426)
- Fix: The index of orders loaded from old savegames was overwritten with an uninitialised value (r17419)
- Fix: Incomplete check on validity of industry type when building industries (r17413)
- Fix: [Squirrel] Guard against Squirrel stack overflows (r17403)
- Fix: [NoAI] During every save a few slots on the Squirrel stack were leaked (r17402)
- Fix: [NoAI] Several AITile::* functions did not check whether their parameters were valid (r17378)
- Fix: Memory leak when trying to bankrupt the local company, other minor improvements of bankruptcy (r17342, r17341, r17340)
- Fix: Not all non-ASCII characters were entered with escapes in the About window (r17309)
- Fix: [NoAI] AIRail::RemoveRailTrack returned ERR_PRECONDITION_ERROR for road/rail-crossings (r17307)
- Fix: [NoAI] Reloading an AI started a new AI in the first available company slot causing other AIs to be started [FS#3153] (r17298)
- Fix: [NoAI] AITown::GetLastMonthTransported did not work as documented at all, make it return what AITown::GetLastMonthProduction did (r17293)
- Fix: Crash after upgrading base graphics set when opening the game options menu and you were using the upgraded set [FS#3147] (r17291)
- Fix: [Squirrel] Stack was not always cleared properly with tail recursion (r17284)
- Fix: [Squirrel] Calling a function that has default parameters with not enough parameters can cause a crash (r17273)
- Fix: Other tunnel end not shown if building rail tunnels and the first railtype is not available yet [FS#3141] (r17251)
- Fix: [NoAI] AIs that crashed during Save() were not killed as they should [FS#3134] (r17231)
- Fix: [NoAI] Do not assert when an AI uses AI*Mode objects incorrectly but crash the AI instead (r17230)
- Fix: Remove the (deprecated since 2006) Encoding entry from the openttd.desktop file (r17226)
- Fix: With time tables vehicles would stay in the 'loading' state after they have finished loading [FS#3129, FS#3130] (r17222)
- Fix: Do not ignore white space changes (e.g. alignment fixes) in the exporter (r17220)
- Fix: [NoAI] IsRoadTypeAvailable(GetCurrentRoadType()) was not a precondition for several AIRoad::* functions (r17203)
- Fix: [NoAI] Do not say you are building a depot when you are actually building a station (API docs typo) (r17201)
- Fix: Accept monthly production values in the scenario editor [FS#2406] (r17198)
- Fix: [Squirrel] FPE when an AI tried to do '% 0' (r17195)
- Fix: [NoAI] Guard the valuator against 'external' modifications of the valuated list which could cause it to go into an infinite loop [FS#3124] (r17193)
- Fix: Do not return exit value of rm, but of the actual configure run (r17163)
- Fix: A stuck train could free the reservation of another train if it was reversed or did crash (r17152)
- Fix: A train entering a PBS section through a block signal could cause a train crash if another reservation ending at a safe tile was already present in the section [FS#3104] (r17151)
- Fix: Update vehicle position cache when the vehicle sprite changes [FS#3060] (r17121)
- Fix: Mark industry tiles dirty when trigger are triggered (r17118)
- Fix: Squirrel_export.sh failed for some locales (r17109)
- Fix: Make restart command work again and make the help show how it works and how it does not work [FS#3092] (r17097)
- Fix: News message about ordered refits failing was not very clear [FS#3091] (r17096)
- Fix: Crash when renaming some stations [FS#3082] (r17078)
- Fix: RPM spec file failed for CentOS; apparently their rpmbuild is pickier or so [FS#3024] (r17077)
- Fix: [NewGRF] Mark house tiles dirty when triggers were triggered (r17047)
- Fix: [NewGRF] Trigger house trigger 02 only for the north tile [FS#3085] (r17046)
- Fix: Graphical glitch with graph key [FS#3083] (r17041)
- Fix: '[bd]ash'-ism in configure [FS#3076] (r17026)
- Fix: Infinite recursion in content dependency checking [FS#3075] (r17015)
- Fix: Concatenating strings in Squirrel when non-ASCII strings were received from OpenTTD failed [FS#3074] (r17013)
- Fix: [NoAI] Documentation of AITile::LevelTiles was wrong (r17049)
- Fix: [NoAI] AIBridge::GetPrice returned incorrect values (r16986)
- Fix: Make it so that failing to generate many random towns in scenario editor returns a failing message [FS#3059] (r16977)
- Fix: The last manually added server would not be saved [FS#3062] (r16981)


### 0.7.2 (2009-08-01)

- Fix: Vehicles would wait 'very long' when they had nothing to unload and gradual loading was disabled [FS#3054] (r16933)


### 0.7.2-RC2 (2009-07-21)

- Fix: When marking trains stuck do not reset the unload/stuck counter when the vehicle is unloading. It will be automatically reset once the vehicle wants to leave the station [FS#3038] (r16901)
- Fix: [NoAI] Small errors in the API documentation [FS#3037] (r16865)
- Fix: Savegames from before 0.4 would get their waypoint 'index' messed up (r16854)
- Fix: Cargo payments were not destroyed when a vehicle was destructed. This only happened when you crashed a vehicle while it was unloading [FS#3032, FS#3046] (r16801)


### 0.7.2-RC1 (2009-07-15)

- Add: Plural 'rule' for Korean (r16811)
- Add: [NoAI] AIVehicle::GetReliability to get the current reliability of vehicles (r16790)
- Fix: Call the AI Save() function only once so AIs can not crash OpenTTD [FS#3034] (r16834)
- Fix: Use the palette of the vehicle being drawn instead of the one of the front vehicle (r16819)
- Fix: Automatic resizing of SelectCompanyLiveryWindow was not working as expected [FS#3021] (r16809)
- Fix: Service orders did not behave like conditional orders; if a train does not need service it did not completely skip the order, but still go in the direction of the depot [FS#3031] (r16802)
- Fix: Houses would not get build on the map edge [FS#3025] (r16795)
- Fix: Audio playback rate was fixed at 11025Hz regardless of the rate specified to the audio driver, resulting in incorrect playback speed. It is still preferable to use 11025Hz output rate if possible as OpenTTD's sample rate converter is very low quality (r16784)
- Fix: Do not use the same error message for turning around road vehicles and flipping parts of trains in the depot [FS#3019] (r16772)
- Fix: [Windows] The binary packages would not get their readme converted to DOS line endings (r16769)
- Fix: [NoAI] AITile::GetCargoProduction/Acceptance did not accept a radius of 0 anymore (r16767)
- Fix: In the refit window the 'Select cargo type to carry' line always showed the ship refit tooltip [FS#3018] (r16757)
- Fix: When loading a savegame Engine::grffile might be left NULL in certain cases (dynamic_engines enabled, articulated vehicle with only wagon-override action3s) (r16737)
- Fix: Show Close instead of Cancel when there is nothing to cancel in the content downloading window [FS#2991] (r16732)
- Fix: [NoAI] AIDepotList contained wrong tiles for hangars when st->xy != st->airport_tile (r16731)
- Fix: The Join station window did not show all stations nearby in some cases (r16728)
- Fix: Invalidate subsidies with invalid source or destination when converting older savegames (r16710)
- Fix: The list of animated tiles could have duplicates (only for old savegames) and tiles that were not animated [FS#2994] (r16709)
- Fix: When SDL/Allegro fail to initialise, fall back on another video driver but not to the null driver (r16702, r16700, r16699)
- Fix: Limit the screen's resolution to 65535x65535 so the dirty pixels stay within bounds of a 32 bits integer [FS#3001] (r16701)
- Fix: Only pay for whatever has been actually unloaded and perform the payment when unloading has finished [FS#2995] (r16694)
- Fix: Missing debug string for ESRB_SAFE_TILE in YAPF debugging helper [FS#3002] (r16690)
- Fix: When there is no AI version that can load data from the savegame, load the latest version of the same AI instead of a random AI (r16651, r16650, r16649)
- Fix: Loading of some town data from old savegames was broken (r16631)
- Fix: [NewGRF] Some of the var action 2 80+ variables contained wrong results from NewGRF perspective (r16615, r16613)
- Fix: Antialiased fonts broken; check pixel_mode instead of palette_mode (r16602)
- Fix: Give a more meaningful error message when console commands expect an integer but do not get one (r16600)
- Fix: Mouse would under some circumstances not be undrawn when drawing the first chat line causing two mouse pointers to be visible [FS#2969] (r16594)
- Fix: Do not crash when tars/NewGRFs are removed, just tell the file could not be opened/found [FS#2967] (r16590)
- Fix: Set default stack size to 1MB to prevent _chstk crash (MSVC) [FS#2978] (r16589, r16588)
- Fix: [Network] Always send the starting date from the game you are currently playing instead the starting date from the config file (r16573)
- Fix: Also catch FPEs in saveload and the warning about missing NewGRFs; only happens when assertions are disabled and NewGRFs are missing (r16572)
- Fix: In some cases, train could be stuck in depot [FS#2974] (r16571)
- Fix: [NoAI] AIMarine::AreWaterTilesConnected did not return true for bridge head<>neighbouring water tile (r16563)
- Fix: Removing of duplicates of base graphics set could behave randomly (r16548)


### 0.7.1 (2009-06-09)

- Fix: When finding duplicate graphics sets favour the more complete one (r16538)
- Fix: [Squirrel] Crash that occurred when an AI was halted while one or more generators were still in a 'running' state [FS#2942] (r16534)
- Fix: [Squirrel] Do not copy an object when we just checked that the pointer to it is NULL (r16532)
- Fix: Notify small UFOs on deletion of road vehicles, so they can head for somewhere else instead of stumbling over a ghost (r16525)
- Fix: [NoAI] StationIDs from oilrigs were not considered valid by the API (r16529)
- Fix: Draw PBS reservation as groundsprite resp. childsprite of foundation/bridgehead [FS#2959] (r16528)
- Fix: Missing guards in the NoAI API making it possible to hit an assert in OpenTTD [FS#2963] (r16524)
- Fix: [NoAI] Possible assert in AI debug window when an AI was stopped and a human company took its CompanyID [FS#2962] (r16522)
- Fix: [NoAI] Make sure AIBridge::BuildBridge returns what the documentation says it does (r16520)


### 0.7.1-RC3 (2009-06-03)

- Add: [NoAI] AISignList that can be used to get a list of valid signs (r16400)
- Change: [NoAI] Stop an AI when it takes too long to initialise or load [FS#2869] (r16425)
- Fix: Base graphics names must be unique, so do not add duplicates (r16503)
- Fix: [NoAI] When an AI was suspended while in a function called (indirectly) via call/acall/pcall OpenTTD crashed. Fix this by disallowing AIs to be suspended while called via call/acall/pcall [FS#2935] (r16502)
- Fix: [NewGRF] Invalidate NewGRF variable caches of more vehicles in more places. Esp. they were only invalidated for trains (r16480)
- Fix: [NewGRF] Call callbacks after initialisation of vehicle variables (r16479)
- Fix: [NewGRF] Determining most common (sub-)cargo-type was broken due to someone confusing similarly named variables (r16478)
- Fix: Loading indicator when 'unload' in and 'no loading' is off was pointing in the wrong direction [FS#2936] (r16477)
- Fix: Track reservation was drawn at bridge heads in the menu (r16470)
- Fix: [NoAI] Another try/catch related bug (r16454)
- Fix: Road vehicles ending up on the pavement when they are in a drive through station that got removed due to bankruptcy [FS#2909] (r16448)
- Fix: [NoAI] AIRail::GetRailStationDirection returned incorrect information (r16440)
- Fix: Crash when a company is deleted while a dropdown with company names is open (r16430)
- Fix: Do not allow content download via the console when there is no zlib as it is done for the GUI already [FS#2919] (r16420)
- Fix: Some 64bit architectures require size_t to be aligned at 8-byte boundary, ensure it for MemBlock (r16415)
- Fix: [NewGRF] Disable multitile houses with non-zero population on additional tiles as they cause desyncs and because the specs do not allow that either (r16383)
- Fix: [NewGRF] Valid UTF-8 sequences between 0x20 and 0xFF should be allowed as is instead of being treated as control codes (r16374)
- Fix: [NewGRF] Use a valid StringID as fall-back when undefined generic NewGRF strings of vehicles are requested (r16366)


### 0.7.1-RC2 (2009-05-21)

- Fix: The previously selected NewGRF station type was still remembered after switching to a different game without newstations enabled, preventing stations from being built (r16363)
- Fix: Pointer incremented with wrong count (r16361)
- Fix: Delete invalid depots in TTD savegames caused by improper SVXConverter conversions (r16357)
- Fix: Invalid read when OpenTTD savegame contains VEH_INVALID (r16353)
- Fix: Signal handler could end in endless loop (r16351)
- Fix: [NewGRF] When overriding 'original sounds', only allow overriding of the 'original sounds' and not any other that is already loaded (r16339)
- Fix: Desyncs when removing lots of stations/towns (r16329, r16328)
- Fix: Desyncs due to the fact that depot searching with a maximum search depth simply does not work with YAPF's caches [FS#2900] (r16323)
- Fix: Trains could get stuck in a depot when they wanted to go to the same depot again [FS#2873] (r16322)
- Fix: In the scenario editor change the (starting) game year of the scenario, not the (starting) game year for new games/scenarios (r16321)
- Fix: Loading of savegames created in revision between 0.3.5 and 0.3.6 caused crash (r16320)
- Fix: [NoAI] Set the autorenew settings for new AI companies to the default values, not to 0 or the local settings (r16316)
- Fix: [NewGRF] Allow accessing the house age when the house is not yet built (r16314)
- Fix: (Get|Set)TrackBits() is only valid for RAIL_TILE_NORMAL and _SIGNALS (r16311)
- Fix: Parameter is invalid when it is equal to length of an array (r16308)
- Fix: Close all windows before unloading the AI system as closing the content-download window will rescan for AIs [FS#2901] (r16306)
- Fix: ICC (Intel C++ Compiler) defined __GNUC__ but does not define __builtin_bswap32, so fall back to the default swap method for ICC (r16295)
- Fix: Road vehicles were unable to find a depot when turning around (in some cases), causing 'nearest depot' orders to be occasionally lost [FS#2893] (r16291
- Fix: Unable to (re)set the desert state for watery tiles [FS#2888] (r16290)
- Fix: Possible (in theory) desync related to autorenew settings (r16287)
- Fix: Crash after using the 'Reset landscape' function and remove all waypoint signs and buoys after resetting landscape (r16280)
- Fix: [NewGRF] Disable multitile houses for which the NewGRF does not define proper additional tiles (r16274)


### 0.7.1-RC1 (2009-05-11)

- Add: [NoAI] AIController::GetVersion, this returns the version of OpenTTD in the same way as for NewGRFs (r16253)
- Add: [NoAI] AIAirport::GetPrice, returning the building cost of an airport (r16252)
- Add: [NoAI] Two new error codes to AITile: ERR_AREA_ALREADY_FLAT and ERR_EXCAVATION_WOULD_DAMAGE (r16171)
- Add: [NoAI] AITile::Get(Min|Max|Corner)Height (r16166)
- Add: [NoAI] Several functions to AIOrder to check the what kind of order an order is and AIVehicle.SendVehicleToDepotForServicing [FS#2801] (r16165)
- Add: [NoAI] UseAsRandomAI as function in info.nut. When an AI returns false, it will never be chosen as random AI (r16113)
- Add: [NoAI] AIOF_STOP_IN_DEPOT to the orderflags in AIOrder to allow stop-in-depot orders (r16107)
- Add: [NoAI] GetURL() as possible function to info.nut. If AIs implement it, that url is shown when the AI crashes and also in the AI selection window [FS#2808] (r16093)
- Change: [NoAI] Reverse the order of the lines in the AI debug window [FS#2778] (r16091)
- Change: Harden string copying on places where it is possible (r16024)
- Change: Use recent Czech language for plural form (r15965)
- Fix: Wrong number of parameters or wrong parameter types sent to printf-like functions at several places (r16269)
- Fix: [NewGRF] When callback 2E returns an amount of 0, do not transport 1 unit to the station (r16268)
- Fix: [NoAI] Various documentation omissions with respect to IDs of various objects and corners for AITile::(Raise|Lower)Tile (r16267, r16266)
- Fix: [NoAI] Check slopes passed to the API better for validity (r16264, r16262)
- Fix: [NewGRF] Interpret setting bridge property 08 to 0 as always available (r16263)
- Fix: [NoAI] Enable parameter checking for AIController::* functions again (r16249)
- Fix: [NoAI] Make sure AITunnel::BuildTunnel returns what the documentation says it does (r16244)
- Fix: [NoAI] CmdBuildTunnel could be called with invalid parameters from the API code, causing crashes later [FS#2875] (r16243)
- Fix: Improve corner case order handling: mark order as done only when actually done, obey non-stop orders, do only stop/refit at the depot in the order (r16240, r16228, r16199, r16198, r16187)
- Fix: [NoAI] Use the stop/non-stop intermediate orderflags AIs can give for goto-depot orders (r16239)
- Fix: [NewGRF] ActionB should use the online parameters from GRFFile instead of the initial user-specified values from GRFConfig. Also use the values as they were set when the ActionB was executed, not as they are set when the message is shown (r16223)
- Fix: Possible crashes when quitting OpenTTD or forcing resizes/redraws of the screen during map generation [FS#2862] (r16220)
- Fix: Shared orders without orders were not properly converted causing corrupt/invalid orders when loading pre 0.7 savegames [FS#2878] (r16214)
- Fix: Hardcoded (old sized) MAX_COMPANIES constant (r16182)
- Fix: [Squirrel] The traps variable was not restored, causing try/catch blocks to be 'forgotten' during a suspend (r16181)
- Fix: Do not try to reserve path for trains crashed in station [FS#2866] (r16178)
- Fix: Forbid joining AI companies via the 'move' and 'join' console commands/multiplayer lobby (r16176, r16175)
- Fix: [NoAI] AIOrder::GetOrderDestination and AIOrder::GetOrderFlags did not work on ORDER_CURRENT when the vehicle was loading/leaving in a station (r16165)
- Fix: [NoAI] Change WAYPOINT_INVALID to 0xFFFF from -1 as that is the value the AIs got (due to casting) (r16150)
- Fix: The overflowsafe type did not like dividing by int64 larger than MAX_INT32 causing division by negative numbers and small anomalies when drawing graphs [FS#2855] (r16130)
- Fix: Road was removed when both the Remove button was active and Ctrl was pressed [FS#2582] (r16119)
- Fix: [NoAI] Make sure AIOrder::GetDestination always returns a tile belonging to the station (16109)
- Fix: [NoAI] When giving an aircraft a goto-hangar order do not let it be a normal goto-station order (r16108)
- Fix: [NoAI] AIOrder::SetOrderFlags always removed 'Service if needed' from goto-depot orders (r16106)
- Fix: Connect tried to validate too much of the company ID with too little information on hand [FS#2849] (r16096)
- Fix: [NoAI] AIDebug window profiled the blitters by invalidating itself unconditionally on repaint. On the other hand it was not invalidated in other cases when needed (r16094)
- Fix: The language is called Slovak, not Slovakish (r16090)
- Fix: Insanely fast trains would not stop in time for stations/'jump' over waypoints/via stations within a tick, which would cause the order not to be processed causing the train to go in loops until (with luck) it 'hit' the tile [FS#2824] (r16079)
- Fix: Content download progress bar 'resetting' due to mathematical overflow [FS#2845] (r16071)
- Fix: Memory leak when querying a server multiple times (r16064)
- Fix: [NoAI] MOF_COND_DESTINATION was not accepted by CmdModifyOrder() (r16063)
- Fix: Non advanced vehicle list did not handle company switching correctly (r16054)
- Fix: Do not warn that crashed vehicles are getting old; upgrading them is impossible [FS#2740] (r16048)
- Fix: The currency abbreviation for the Romanian Leu is now RON [FS#774] (r16041)
- Fix: Dash was not able to run iconv detection (r16035)
- Fix: [NewGRF] Do not give '... Mines' as name to the station of oil rigs, or more general: do not add '... Mines' when the all of the cargoes are part of the liquid, passenger or mail classes [FS#2785] (r16029)
- Fix: Storing/loading some currencies failed due to inconsistent settings 'tables' [FS#2826] (r16028)
- Fix: Usage of uninitialised memory when trying to build a random new industry, but there are no industrytypes to choose from (i.e. all appearance probabilities are zero) (r16027)
- Fix: 'Build separate station' in the station picker would reuse deleted stations [FS#2818] (r16025)
- Fix: 32 bpp sprites in tars would also be shown in the list of heightmaps [FS#2817] (r16023)
- Fix: Sometimes the unregister 'query' thread could be delayed so much that the network stuff was already closed and the packet would never reach the master server causing the server to appear online longer than necessary (r16022)
- Fix: Chance16() did not work for b = 1. Also transform the formula to not use divisions (r16006)
- Fix: Inconsistency between using NETWORK_NAME_LENGTH and NETWORK_CLIENT_NAME_LENGTH for the length of client names (r15988)
- Fix: [NewGRF] Abort production callback after 0x10000 iterations and show a messagebox blaming the NewGRF [FS#2787] (r15958)
- Fix: [NewGRF] Set callback_param1 (var 10) to 1 only when requested (r15957)
- Fix: Tooltip of detailed ratings window button showed wrong message (r15943)


### 0.7.0 (2009-04-01)

- Feature: Watermark crash.sav and do not generate crash information if a loaded crash.sav causes a crash so the real crash report does not get overwritten (r15893)
- Feature: Add autoclean_novehicles setting which will, when autoclean_companies is true, remove any company with no vehicles and no active client after autoclean_novehicles-months (r15848)
- Add: [NoAI] AIIndustryType::IsBuiltOnWater(), HasHeliport() and HasDock(). Just like AIIndustry (r15901)
- Add: [NoAI] AIBridge::GetBridgeID() so AIs can get the type of bridge that are already build (r15875)
- Add: [NoAI] AIRoad::GetRoadVehicleTypeForCargo() to tell whether a certain cargo needs a bus- or a truckstop (r15860)
- Fix: Chat completion got called twice causing tab completion to seemingly fail (r15905)
- Fix: YAPF did not apply the platform length (too long/too short) penalties (r15900)
- Fix: Fixing the slopes was done a bit more often than intended making map generation with the original generator horribly slow (r15895)
- Fix: YAPF used different penalties for aqueducts than for other water tiles (r15891)
- Fix: Round the production rate up, so e.g. oilrigs always produce some passengers on lowest production level [FS#2772] (r15888)
- Fix: Libtimidity cannot handle frees of NULL (in contrast of most other frees) [FS#2770] (r15886)
- Fix: Make sure house class/ID counters do not overflow (r15831)


### 0.7.0-RC2 (2009-03-23)

- Change: [NewGRF] Expose GRF ID of engines in var action property 0x25 (r15739)
- Fix: Some (newer) GCCs have trouble compiling the Windows specific part of fontcache.cpp; jumps across variable declarations [FS#2752] (r15818)
- Fix: When sorting on cost do not sort on the running cost [FS#2749] (r15778)
- Fix: Do not show the message about reporting an AI crash for the dummy AI (r15774)
- Fix: Number of active clients was not always properly updated [FS#2475] (r15773)
- Fix: Settings from the [gameopt] section (from old 0.6 config files) were overwritten with default values (r15771)
- Fix: Infinite loop when skipping sprites when a GRF is invalid (or truncated) (r15767)
- Fix: Crash when opening the content list window twice; inconsistencies when clicking download twice [FS#2744] (r15766)
- Fix: Add Engine::GetDisplayDefaultCapacity() and use it everywhere, so CB 36 is also used everywhere (r15763)
- Fix: [Windows] Inlined UTF-8 characters (in the source code) are not handled properly on Eastern versions of Windows so escape them (r15762)
- Fix: [Windows] On some system searching a font using its English name fails. So now we search the font using the localised name and use the English name for the final 'validation' only (r15757)
- Fix: Number of houses in house variables 0x44, 0x60 and 0x61 were incorrect after 0xFF had been reached and could desync clients joining afterwards (r15755)
- Fix: Crash when clicking the small area between the savegame list and the save button in the save game window [FS#2742] (r15753)
- Fix: Do not try to (un)draw the cursor when the screen is not ready (r15752)
- Fix: The big UFO sometimes landed just outside the map. Instead of landing, just disappear (fly away) in those cases (r15750)
- Fix: Crash because submarines would sometimes start far outside of the map [FS#2739] (r15748)
- Fix: Road ownership getting lost when removing a road stop [FS#2736] (r15747)
- Fix: Update threading code for OS/2, add mutex support, fix compilation (r15746, r15745)
- Fix: When town generator failed to create requested number of towns, there were too many cities (r15744)


### 0.7.0-RC1 (2009-03-16)

- Feature: Pop up the AI Debug Window if one of the AIs crashed and show a message that the user should report the crash [FS#2728] (r15708)
- Feature: Allow the number of towns that will be generated in the generate world window to be customised [FS#2672] (r15695)
- Fix: Enabling freeform edges could cause submarines to get stuck on land tiles (r15733)
- Fix: Centring on a vehicle did not respect its z coordinate (r15725)
- Fix: Do not show passenger-/mail-capacity if the aircraft carries only cargo (r15705)
- Fix: Blame NewGRFs returning inconsistent information in purchase-list/after building before users have a chance to blame OpenTTD for incorrectly autorenewing/-replacing [FS#2595] (r15701)
- Fix: Just sell the old engines after autorenew/replace. Do not bother about trains exceeding the trainlimit, which will be sold anyway [FS#2721] (r15692)
- Fix: Do not crash when the generate map does not contain a suitable location for a town [FS#2720] (r15689)
- Fix: Do not crash when someone substitutes the 'map generation' sprites with garbage [FS#2720] (r15685)
- Fix: Vehicle images would be determined during the process of moving the vehicle which means that only the (orientation) data for the vehicles in front of it is valid. Now the data for the vehicles behind the vehicle are valid too [FS#2546] (r15677)
- Fix: It was possible to remove rail tunnels/bridges and aqueducts build by rival companies [FS#2718] (r15667)
- Fix: Sorting of engines in the purchase list did not use the same numbers as the GUI showed, e.g. articulated parts were not taken into account when ordering by capacity [FS#2689] (r15666)
- Fix: Handling of aircraft crash counter did not take account of the reduced number of calls (from 6 down to 2) to the aircraft event handler, resulting in crashed aircraft taking three times longer than they should to clear. Compensate by increasing the counter by 3 on every call instead of 1 (r15665)
- Fix: Growing of vsize as (some) threads were not properly released (r15663)
- Fix: Do not mark a company as having ratings in a town when querying the cost of a command (r15662)


### 0.7.0-beta2 (2009-03-10)

- Feature: Allow downloading scenarios and heightmaps via the in game content download (r15632)
- Feature: When cloning a vehicle with a custom name, add and/or increment a number at the end of name and assign it to the new vehicle (r15621)
- Feature: Show scenarios/heightmaps from both your home directory and installation directory (r15615)
- Feature: Allow building road stops on road/tram tracks of competitors (r15601)
- Feature: Show required/already-delivered cargo needed for town-growth in town-view-window and only if it is really needed (r15559)
- Feature: [NewGRF] Support vehicle vars 0x47 and 0xF2 in purchase list (r15542)
- Feature: [NewGRF] Show the cargo subtype in the vehicle details window (r15480)
- Change: The background of the the waypoint sign is now in the company colour (r15593)
- Change: Allow the default debug level of 6 for a dedicated server to be overridden by -d (if used after -D) (r15543)
- Change: [NewGRF] To decide whether a vehicle is refittable do not test its current capacity for being zero, but always use the 'capacity property' (r15541)
- Fix: [Squirrel] Almost infinite loop in garbage collection (r15659)
- Fix: Undeterministic file sorting when the date is equal for all files [FS#2716] (r15657)
- Fix: Changing vehicle.dynamic_engines when there are already vehicles can cause crashes (r15656, r15586)
- Fix: Only ever call any vehicle callbacks after the whole articulated engine has been built (except 0x16) (r15654)
- Fix: C++'s new (this) is seldom a good idea as destructors of member variables are not run causing memory leaks [FS#2706] (r15652)
- Fix: [OSX] Hack around an OSX stupidity in < 10.4 w.r.t. signals by not having any signal handling support for OSX < 10.4 (r15648)
- Fix: Add an EngineOverrideManager to give the term 'compatible NewGRF' again some sense and to not crash because of trivial changes [FS#2612] (r15645)
- Fix: Closing a network connection twice in the case that sending packets starts failing while disconnecting [FS#2710] (r15644)
- Fix: Game crashes when network pools are empty, so always allocate at least one pool block [FS#2712] (r15641)
- Fix: Do not allow more than 64 road vehicles to reserve a slot at a single road stop. 255 + 1 gives trouble, but 64 is even more than the road stop would be able to handle within the slot timeout time [FS#2707] (r15635)
- Fix: Kicking/banning a client from the Client list window crashed the server [FS#2705] (r15628)
- Fix: UTF8 string handling could cause buffer overruns [FS#2698] (r15626)
- Fix: When trying to reserve a self-crossing path the failed reservation was sometimes not cleared completely [FS#2701] (r15619)
- Fix: Towns would only build houses where the grid would not be, even when they are not allowed to build roads and the user 'implements' another layout [FS#2661] (r15604)
- Fix: Crash when using an extraordinarily large sprite as cursor [FS#2696] (r15601)
- Fix: Crash when opening viewport while scrolling the map and the mouse 'lands' on the window decoration of the viewport [FS#2695] (r15598)
- Fix: [NewGRF] Refit-info in purchase list did only check the first articulated part (r15592)
- Fix: Change owner of waypoints and deleted stations when merging companies or when a company bankrupts (r15588)
- Fix: Last activity time not properly updated causing downloads to be aborted after a minute [FS#2684] (r15580)
- Fix: Force unload not working when trying to force unload at the station where you received the cargo [FS#2680] (r15574)
- Fix: Theoretical buffer overflow when a company with too long name funded a road reconstruction (r15572)
- Fix: When building signals by dragging from a pre/entry/combo block signal, the signal you started at became a normal block signal [FS#2674] (r15567)
- Fix: Dependency information was not requested after the content state was reset causing the dependencies not always being selected (and thus downloaded) automatically [FS#2675] (r15565)
- Fix: Crash when saving a preset with unknown NewGRFs [FS#2646] (r15561)
- Fix: The font width cache was not updated when changing fonts causing the font spacing to be off when changing fonts in-game (auto font detection) (r15557)
- Fix: -v null crashing in 2051 due to trying to show the high score of the spectator (r15554)
- Fix: [NoAI] Crash when setting a depot order to the southern part of a ship depot [FS#2656] (r15551)
- Fix: The keep_all_autosave setting was ignored for dedicated servers/spectators [FS#2651] (r15546)
- Fix: If a buoy was placed directly in front of a dock, that dock was seen as a buoy and thus skipped once within 3 tiles [FS#2653] (r15545)
- Fix: Extracting downloaded content did not work for Windows if one uses a non-ASCII path [FS#2650] (r15544)
- Fix: [NewGRF] When articulated parts have no available default cargo, use the cargo type of the first part for livery selection [FS#2617] (r15541)
- Fix: Testing of 'only_this' in CmdRefitRoadVeh() could be skipped by 'continue' (r15540)
- Fix: [NewGRF] If an aircraft cannot carry any available cargo, it should not be available either instead of falling back to passenger/mail. Just like the other vehicle types also do (r15539)
- Fix: Do not allow special sprite characters (e.g. the ship sprite) as characters in input like filenames or text that is sent over the network (r15537)
- Fix: The local command queue did not get properly cleaned when leaving a game meaning you could end up executing commands of the previous network game [FS#2644] (r15529)
- Fix: Do not try to find the AIs the server runs when joining a multiplayer server (r15525)
- Fix: Use distance to closest station tile as estimate for YAPF too (NPF already does so). This makes it behave 'better' with wide stations [FS#2631] (r15518)
- Fix: [NewGRF] Wagonoverrides and articulated engine parts use the colour scheme of the engine, but not its recolour callback, nor its 2CC flag. Same applies to roadvehicles [FS#2642] (r15517)
- Fix: [NewGRF] Livery overrides for articulated parts of roadvehicles were not applied (r15516)
- Fix: Make the join/spectate command require to be connected to a network game; in SP it could lead to crashes (r15514)
- Fix: Generating a map with the original map generator with freeform edges on resulted in a crash [FS#2641] (r15511)
- Fix: Pre-0.5 OpenTTD stored new_nonstop and full_load_any in a different way, savegame conversion was not working for them (r15500)
- Fix: Crash when opening the game options when the currently loaded base graphics pack has less than 2 valid graphics files. For example when someone replaces all their original base graphics with custom work (but keeps the name) or renames the dos ones to windows or vice versa [FS#2630] (r15476)


### 0.7.0-beta1 (2009-02-16)

- Feature: Make it possible to have multiple windows with edit box open simultaneously (r15424)
- Feature: Add ability to select which base graphics set is used from the Game Options window. The change takes effect when the window is closed. This option can only be used from the intro menu, as reloading graphics during a game may cause issues (r15389)
- Feature: Do not draw superfluous catenary wires [FS#1761] (r15347)
- Feature: Add option to group and subtotal expenses list in the company finance window (r15301)
- Feature: Allow moving clients between companies/spectators by the server and the clients themselves (r15242)
- Feature: Native support for Transport Tycoon (Original) savegames (r15216)
- Feature: Allow terraforming of the tiles at the edges of the map (r15190)
- Feature: [NewGRF] Allow a grf to customise house name via callback 0x14D, during Tile Inquiry process (r15172)
- Feature: Downloading content from a central server (content.openttd.org) where authors can upload their NewGRFS/AI etc. This should make joining servers that use only NewGRFs that are distributed via this system easier as the players can download the NewGRFs from within the game. It should also make it easier to see whether there are updates for NewGRFs and make the necessary updates (r15126)
- Feature: Add support for IP range bans using CIDR notation (r15094)
- Feature: An AI framework so people can write their own AIs. This also removes the old cheating and heavily broken AI (r15027)
- Feature: [NewGRF] Support var 0x45 (curvature info) also for road vehicles (r14945)
- Feature: [NewGRF] Automatically set last engine ageing year to the last 'introduction year plus half model life', to allow engines later than 2050 to appear (r14926)
- Feature: Distant joining of stations (r14919)
- Feature: Advanced setting to keep various building tools active, which are usually closed after placing an object (r14902)
- Feature: Remove the window limit, but leave a configurable limit on the number of non-sticky non-vital windows (r14899)
- Feature: Allow road vehicles to move multiple steps in a tick (code based on train movement code) and add support for RV prop 15. This gives RVs a maximum speed of 318mph instead 79mph. This only implements higher speeds, not 'realistic acceleration' (r14869)
- Feature: Automatic reversing in front of block signals can now be disabled by setting pf.wait_oneway_signal respectively pf.wait_twoway_signal to 255 (r14852)
- Feature: Few (optional) optimisations to making (initial) orders; like keeping goto selected [FS#1984] (r14827)
- Feature: Make the road grids of town match, when all are using the same road layout of course [FS#2390] (r14821)
- Feature: Pressing CTRL while dragging to build a bridge builds the last built bridge type if possible [FS#2238] (r14805)
- Feature: Make the date format for default savegame/screenshot names configurable (r14792)
- Feature: Allow scrolling with the left mouse button pressed (if enabled). Primarily useful for systems with touch screen (r14789)
- Feature: Allow up to 15 companies (r14735)
- Feature: Allow up to 255 clients in multiplayer games (r14730)
- Feature: When the chosen language is not supported by the current font, try to find a font that does and use that instead (r14618)
- Feature: [NewGRF] Action0Industries property 24 (industry supplies default name for nearby station) (r14598)
- Feature: Non-destructive autofill with option to keep waiting times [FS#1124] (r14592)
- Feature: Stop-in-depot order; after this order you have to manually start the vehicle again (or sell it) (r14524)
- Feature: Arrow key scrolling in the server list (r14517)
- Feature: Initial support for handling bidirectional scripts and connecting Arabic characters (r14479)
- Feature: Allow sorting vehicles by remaining life time (r14352)
- Feature: Ability to reset name to default/automatic value (for vehicles, engines, towns, groups, stations, waypoints, managers and companies) (r14334)
- Feature: [NewGRF] Add Variational Action 2 Variable 0x47 for houses, Coordinates of the house tile (r14294)
- Feature: Allow overriding the palette of the base GRFs. This way you can play with NewGRFs made for the Windows palette with the DOS palettes base GRFs (and vice versa). Note that for this to work correctly ALL NewGRFs must use the same palette; mix and match is not yet supported (r14229)
- Feature: Double click to join selected server/company (r14209)
- Feature: Allow both the German as well as non-German toyland graphics as 'correct' and official graphics (r14197)
- Feature: Allow people to create their own base graphics easily and without requiring code changes (r14197)
- Feature: [NewGRF] Add support for property 0x13 for Bridges. In other words, one can now specifies a 16 bits cost multiplier (r14172)
- Feature: Make it possible to choose between the DOS and Windows graphics packs while retaining the possibility to override the palette (r14151)
- Feature: Increase the size of the console backlog. Now it'll only remove backlog items when there are more than a threshold and when they are there longer than (another) threshold (r14056)
- Feature: Make it possible to filter list_patches output like it is done for other list_* console commands (r14041)
- Feature: Path based signalling (r13926-13967)
- Feature: Show [total-]cargo info in depot when [ctrl-]right-clicking on vehicle (r13923)
- Feature: NewGRF presets, selected by a drop down list in the NewGRF window. Presets are saved in the config file (r13781)
- Feature: Add a few extra columns with information to the server list (r13732)
- Feature: [NewGRF] Add var 65 in Variational Action 2 Variables for Houses (r13603)
- Feature: [NewGRF] Implement var 63, variational action2 variable for Houses. Or, in more simple terms, the check for the animation frame of nearby house (r13519)
- Feature: Aqueducts (r13464)
- Feature: [NewGRF] Add var 0x69 for industries, long format construction date (r13443)
- Feature: [NewGRF] Add long format introduction and maximum construction year for house (r13437)
- Feature: [NewGRF] Add access to current long year and date from Action 7/9/D and VarAction2 (23/24 or A3/A4), and add access to (long format) building year, in Variational Action2 Variable 49 for Vehicles (r13376)
- Feature: Splitting of the main toolbar when the resolution becomes very low so the buttons are still visible and usable (r13339)
- Feature: Make news messages use a linked list instead of a moving circular buffer. This makes it possible to store more news messages in the history (r13317)
- Feature: The number of news messages is reduced by removing every news message that is a configurable amount older than when it would not be shown in the newspaper popup/ticker, which is e.g. a month for industry production changes and half a year for subsidy offers. As a result the more important messages will stay longer in the message history (if longer than 30 messages) (r13317)
- Feature: Allow to have more than only two airports per town. The number of airports is now controlled by the noise each of them generates, the distance from town's centre and how tolerant the town is (13226)
- Feature: Introducing the so called 'engine pool' which primarily removes the fixed engine type limits and also happens to allow (with the patch option 'dynamic_engines') multiple NewGRF vehicle sets to coexist (r12924)
- Feature: [NewGRF] The ability to play NewGRF sounds for industries and stations (r12817)
- Feature: [NewGRF] Add some support for NewGRF station animation (r12798)
- Feature: Sorting vehicle lists by road vehicle/train length (r12766)
- Feature: Conditional 'skip/jump' orders (r12667)
- Feature: Ability to send a vehicle (using default orders) to the nearest depot (r12661)
- Feature: Ability to force a vehicle to not load or to not unload at a station (r12650)
- Feature: Four different non-stop types, individually selectable per order. Replaces 'TTDP compatible order' setting (r12648)
- Feature: Three different load type in a single game instead of two. One can choose full load all and full load any instead of full load being governed by the 'full load any' patch setting (r12648)
- Feature: Financial and Player Selection Face windows are now remembering their position when toggling sizes (r12634)
- Feature: Show what cargoes a station could be supplied with (r12596)
- Feature: [NewGRF] Add random action 2 type 84. For vehicles only (r12452)
- Feature: [NewGRF] Add support for var A2/22 for action 7/9/D: Difficulty level (r12449)
- Feature: Add +/- toggle buttons to station cargo waiting list to show/hide the detailed transferred cargo information (r12446)
- Feature: Open the time table when pressing the order button while pressing the CTRL key (r12441)
- Feature: On Screen Keyboard for input fields so someone without a keyboard can enter text too [FS#1846] (r12425)
- Change: When checking for unique names, compare only with manually set names [FS#1923] (r14958)
- Change: Apply the 'warn if train's income is negative' setting to other vehicle types, too (r14835)
- Change: When loading games in 'network' mode use the start date of the save game for the server and all clients when loading the NewGRFs instead of the current date. Prevents desyncs caused by action 7/9s skipping parts of the GRF based on the date or some other variables that can differ at NewGRF load time (r14769)
- Change: Only say a engine/vehicle is refittable when it can be refitted to at least two cargo type or when it has subcargoes (r14683)
- Change: [NewGRF] Since our NewGRF handling is better than it used to be, disable a NewGRF if unexpected sprites are reached (r14184)
- Fix: A town could build a statue under a bridge [FS#2618] (r15397)
- Fix: Multiple vehicles could be filling the timetable and only the data from one vehicle would be taken. Now only allow one to be filling at a time [FS#2466] (r15382)
- Fix: When testing for parallel road two tiles away, do not move more than one tile along the road (r15381)
- Fix: [NewGRF] The subcargo returned by vehicle variable 0x42 should be the most-common-subcargo of the most-common-cargo. If nothing is transported 0x..FFFF00 should be returned (r15378)
- Fix: A tram circling around in a depot did never actually 'enter' the depot [FS#2605] (r15375)
- Fix: Changing town road layout in-game caused ugly road networks [FS#2121] (r15340)
- Fix: Company could never have auto-assigned colour 0 (dark blue) (r15281)
- Fix: Deadlock (with wide fonts) or desync when generating manager name (r15279)
- Fix: Close all windows *before* starting a new game/loading a game instead of doing that as one of the latest steps of loading the game. This caused, in some cases, the NewGRF settings to be reset when the game was already loaded resulting in instant desyncs when joining a network game [FS#2577] (r15256)
- Fix: Aircraft could be 'loading in the air' or have zero speed while in air after converting old savegames [FS#2571] (r15230, r15227)
- Fix: Tile error location not reset when levelling land causing a tile to be highlighted when there was nothing to flatten [FS#2542] (r15138)
- Fix: Signs with sign 'Sign' were lost when converting from TTD savegames (r15137)
- Fix: [NewGRF] Add support for 8 byte action7/9 data, used as a mask for GRFID checks (r15114)
- Fix: [NewGRF] Keep industry variables 8E and 8F in sync with 93, when changing production using results 0D, 0E or 0F of callback 29 or 35 (r15103)
- Fix: [NewGRF] Disable a NewGRF from loading if it contains multiple Action 8s (r14979)
- Fix: Wrong defaults for service interval when switching between service interval in days and service interval in percentages [FS#2508] (r14959)
- Fix: [NewGRF] Building new station parts did not allocate a new station spec effectively breaking variable 41. This was due to the limited number of station specs that we can have per station. This fix makes newly build station parts create a new spec until one cannot allocate new station specs anymore and it'll revert to the old behaviour (sharing station specs) [FS#1832] (r14956)
- Fix: [NewGRF] Station specs did not get deallocated when building a new station part over them (r14955)
- Fix: Sharing/cloning/inserting of orders that the/a vehicle (in the shared list) cannot go to (wrong station type etc) [FS#1890] (r14954)
- Fix: The 'animation state' of the bubbles was stored in a variable that was not stored in the savegame. Using a variable that gets saved in the savegame solves the desync and makes it a bit clearer [FS#2512] (r14931)
- Fix: Abort dragging of vehicles in the group window when they are deleted [FS#2500] (r14925)
- Fix: Do not unnecessarily reset the cursor, when a different vehicle is dragged (r14924)
- Fix: [NewGRF] First create all articulated parts of roadvehicles, then call callback 36 capacity, also call it for all articulated parts (r14903)
- Fix: Overflow of number of orders per vehicle [FS#2495] (r14830)
- Fix: Off-by-one causing possible out-of-bounds reads (r14811)
- Fix: In an MP game in SP mode no company would go bankrupt. Furthermore companies that passed the 'bankrupt' period (4 quarters) would not go bankrupt when loading the game back in MP. Now any company that is in MP or not 'currently controlled by the player' in SP will bankrupt [FS#1993] (r14750)
- Fix: Do not let any disaster vehicle (Helicopter or Airplane) target invalid industry (r14746)
- Fix: Memory leak in Action 0x0F (new town names) (r14737)
- Fix: Writing a single char to the config file caused reading outside a buffer (r14729)
- Fix: First transfer the whole load of a vehicle chain to industries before triggering any processing. This reduces callback usage and resolves critical rounding errors when using input-cargo-multipliers instead of production callbacks [FS#2460] (r14705)
- Fix: Zeppeliner (disaster) should target st->airport_tile, not st->xy (r14694)
- Fix: [NewGRF] Gradual filling graphics were not chosen according to the NewGRF spec [FS#2435] (r14678)
- Fix: [NewGRF] Check sprite size when executing action 6 (r14674)
- Fix: [NewGRF] Property 7 and callback 12 were broken for aircraft. Now callback 12 is properly called also for 'mail'. If the callback is not used, 'mail' uses 1/4 of property 7 (rounded up) [FS#2444] (r14672)
- Fix: Possible stack corruption when reading corrupted sprites [FS#2415] (r14610)
- Fix: [NewGRF] Return the current year as construction year for unfinished houses (r14608)
- Fix: [NewGRF] When callback 1E fails, use the standard random colour (r14605)
- Fix: The company ID is off-by-one with respect to the rest of the GUI in the cheat window [FS#2422] (r14603)
- Fix: The range for kicking/banning clients is based on the maximum number of clients, not the maximum number of companies [FS#2414] (r14588)
- Fix: Allow capacity callbacks (15, 36) to return zero capacity (r14578)
- Fix: Crashes when a NewGRF sends an invalid string [FS#2395] (r14563)
- Fix: Order pool seemed to look full when it was not as it only checked whether it was possible to allocate a new block of pool items instead of checking for free pool items (r14547)
- Fix: Do not deliver cargo to industries not inside station catchment area [FS#2138] (r14530)
- Fix: Allocate stub (empty) sound entries when loading an empty/corrupt/incorrectly sized sample.cat instead of making valid NewGRFs fail to load (r14527)
- Fix: Make sure trains stop at the end of a station; a 3/8th length train did stop 2/8th of its length too early causing a 63/8th long train not to fit in a 4 tile station [FS#2379] (r14526)
- Fix: Small possible chance of desync due to sorting on pointer instead of by (station) index [FS#2348] (r14463)
- Fix: When a road stop gets moved make sure to update the destination of RVs going to that road stop [FS#2330] (r14446)
- Fix: Support for spaces in directories passed to ./configure [FS#1802] (r14440)
- Fix: Trains would sometimes move one time too often/little when moving from diagonal<->non-diagonal tracks [FS#1793] (r14436)
- Fix: Balance the monthly random industry changes, by introducing a daily random industry change [FS#1885] (r14332)
- Fix: Save the palette of the loaded NewGRFs in the savegame, so joining with a server using Windows palette will make a client with the DOS palette do palette conversion and (thus) not cause a desync (r14233)
- Fix: Glitches (alignment issues/inconsistent vehicle graphics) in original graphics (r14214, r14211)
- Fix: One could not get a list of vehicles sharing an order when the number of orders was 0; you could see that the vehicles had a shared order though [FS#2085] (r14097)
- Fix: Various assorted autoreplace issues/misbehaviours [FS#1264, FS#2037, FS#2038, FS#2110] (r14083)
- Fix: The autoreplace gui showed vehicle types for replacement which CmdSetAutoReplace() did not accept (r14037)
- Fix: Automatically recalculate inflation if NewGRFs are changed and cargo types are added, so that cargo payment rates are correct [FS#2074] (r13836)


## 0.6.x

### 0.6.3 (2008-10-01)

- Fix: NewGRF VarAction 2 variable 43 for industries saw MP_VOID tiles as land tiles and was inefficient (r14417, r14416, r14415)
- Fix: Possible buffer overrun/wrong parameter type passed to printf (r14414, r14397)
- Fix: Generation seed set using -G was always overwritten by -g (r14408)
- Fix: Do not allow extending signals by dragging in any direction other than the track direction [FS#2202] (r14013)


### 0.6.3-RC1 (2008-09-22)

- Fix: Invalid v->u.air.targetairport could cause crashes at several places [FS#2300] (r14383, r14344, r14343)
- Fix: Moving the first vehicle of a train elsewhere might require a new unitnumber for the remaining chain which might not be available (r14384)
- Fix: Trams jumping when reversing on a single trambit (like caused during road construction reworks) or when (manually) reversing in a corner [FS#1852] (r14371)
- Fix: Multiheaded parts in free wagon chains were not connected (could cause desyncs) (r14366, r14362)
- Fix: [Windows] Some keypress combinations could be handled twice [FS#2206] (r14363)
- Fix: The ownership of roadtiles was not properly set for very old savegames (including TTD's) making it impossible to remove some pieces of road [FS#2311] (r14359)
- Fix: Desync due to randomly ordered vehicle hash by flooding and road vehicle overtake/following (r14356, r14258)
- Fix: Signs were not updated on company bankruptcy/sell, and thus could have the colour of invalid player (r14348)
- Fix: Delete the RenameSignWindow when 'its' sign is deleted (r14345)
- Fix: Signs from old savegames were lost (causing little memory leaks) (r14340)
- Fix: When a company was renamed and then manager was renamed before building anything, company name changed (r14328)
- Fix: When you rename a town before building something and build something near that town your company would be called '<old townname> Transport' [FS#2251] (r14327)
- Fix: Free any blocks that a helicopter may have on an oilrig when the helicopter gets forcefully removed (bankruptcy). For other airports this is not needed as they cannot be used by multiple companies [FS#2241] (r14324)
- Fix: Possible assert when renaming removed waypoint (r14322)
- Fix: Properly delete orders so the pool does not fill up (r14319)
- Fix: Do not allow building road over level crossings and drive-through road stops in the wrong direction; do not allow adding roadtypes to non drive-through road stops; pay for all added road bits [FS#2268] (r14316, r14315, r14314, r14308)
- Fix: Aircraft frozen above oil rig when the next order is invalid [FS#2244] (r14309)
- Fix: [YAPF] Only reserve road slots for multistop when they are really reachable [FS#2294] (r14305)
- Fix: One could be trying to get the station name of a station that is outside of the pool (r14297)
- Fix: Default for sound effects and music volume should be in the valid range for that setting [FS#2286] (r14289)
- Fix: Make small UFO aware of articulated RVs so they crash the complete vehicle instead of a small part of it (r14270)
- Fix: Desyncs after deleting a waypoint because of explicit destructor call instead of using operator delete (r14265)
- Fix: Merge keycode for 'normal' 0-9 keys and keypad 0-9 keys so people do not get confused that the keypad does not work as expected [FS#2277] (r14260)
- Fix: Clicking on the smallmap did not break the 'follow vehicle in main viewport' [FS#2269] (r14243)
- Fix: The engine-purchase-list-sorter doubled running-cost and halved capacity of double-headed engines [FS#2267] (r14239)
- Fix: Feeder share was computed wrong when splitting cargo packet (r14234)
- Fix: Signs (town name, station name, ...) could be too long for 8bit width in pixels (r14221)
- Fix: 10 days != 6*2.5 days, effectively causing the payment graph to show the wrong data (r14219)
- Fix: When determining length of a string with limited size, first check if we are not out of bounds already (r14204)
- Fix: Properly update the current timetable's travel/wait times instead of only doing it for one vehicle in the shared order chain and only when some bit has not been set [FS#2236] (r14192)
- Fix: Sprite payload skipping would not skip enough bytes in a very small subset of compressed sprites (r14191)
- Fix: After applying NewGRF settings, all rail and road types were available as the engine availability check was performed too early (r14182)
- Fix: Close all related vehicle lists when closing a station window (and not only the train list) (r14180)
- Fix: RemoveOrderFromAllVehicles() did not mark enough windows dirty (r14179)
- Fix: Incorrect cargo weights (r14144)
- Fix: GetSlopeZ() gets a virtual coordinate, not a tile (r14139)
- Fix: Close the 'manage vehicles' dropdown once the number of vehicles in the list reaches 0 [FS#2249] (r14133)
- Fix: [Strgen] Changing order of parameters {X:...} did not work for strings including some {StringY} (r14111)
- Fix: Desync due to bubbles in toyland (r14110)
- Fix: Make NewGRF action 0x06's changes persistent over the several loading stages [FS#1986] (r14102)
- Fix: Make the 'Transfer Credit' display aware of the entire consist, not only the first vehicle (r14098)
- Fix: Do not flood a NewGRF industry when it implicitly tells that it wants to be build on water (land shape flags bit 5) [FS#2230] (r14093)
- Fix: The vehicle window of articulated road vehicles would show the clone/refit button when the vehicle was not completely stopped in the depot (r14090)
- Fix: Flawed parsing of words (as in 2 bytes) in GRF strings due to sign extension [FS#2228] (r14087)
- Fix: Division by 0 in NewAI [FS#2226] (r14062)
- Fix: NewGRF callback 23 did not use the NewGRF compatible text stack [FS#2224] (r14058)
- Fix: NewGRF text stack's 'push word' did not move the data around properly (r14057)
- Fix: Long strings in the edit box would cause OpenTTD to stop drawing the string. This is especially noticeable with low resolutions and the chat input box (r14054)
- Fix: [OSX] Changed the condition for selecting 8 or 32 bpp blitter by default. Now we will pick 32 bpp if no 8 bpp fullscreen resolutions are available on the main display (the one with the dock) (r14032)
- Fix: Crash when the AI tries to find the depot of an airport that does not have a depot [FS#2190] (r13999)
- Fix: MSVC cannot handle changed files in the prebuild event, so make the version determination a separate subproject [FS#2004] (r13998)
- Fix: The dedicated console removed any character that was not a printable ASCII character instead. Now it allows UTF8 formatted strings too [FS#2189] (r13992)
- Fix: Resetting construction stage counter reset more than it should (r13981)
- Fix: Wrong tooltip for the industry directory's list [FS#2178] (r13917)


### 0.6.2 (2008-08-01)

- Fix: Custom vehicle names from TTD(Patch) games were lost (r13884)
- Fix: NewGRF Callback 10 (visual effect and powered wagons setting) and powered wagons operation were not performed for articulated wagons [FS#2167] (r13870)
- Fix: In some cases the sprite cache could be filled with unremovable items [FS#2153] (r13869)
- Fix: Return of wrong parent scope of (NewGRF) industry variables (r13868)
- Fix: Loading of TTD(Patch) savegames from the command line did not work (r13859)
- Fix: Buffer overflow for too long filename supplied as '-g' parameter [CVE-2008-3577] (r13858)
- Fix: Cargo type lookup was incorrect for NewGRF version 7 files without a translation table [FS#2157] (r13855)
- Fix: GetTownByTile() is only valid for houses and roads (r13851)
- Fix: Power, running cost and capacity of multiheaded engines were (too often) doubled in newspaper resp. offer window (r13844)
- Fix: FreeType may return a bitmap glyph even if a grey-scale glyph was requested [FS#2152] (r13832)


### 0.6.2-RC2 (2008-07-25)

- Fix: Building through the wrong side of a drive through station was allowed [FS#2166] (r13822)
- Fix: Check for vehicle length changes outside a depot (callback 0x11) and give a warning about that [FS#2150] (r13816)
- Fix: Several minor memory leaks. They only happened once per game (r13809, 13810)
- Fix: Checking for train waiting at other side of two-way signal was broken [FS#2162] (r13806)
- Fix: Some revision checking code was unintentionally disabled (r13776)
- Fix: Enforce the validity of a NetworkAction (chat packet) issued by a client (r13775)
- Fix: Selecting non-full length vehicles in the depot gui would place the 'mouse pointer' out of the centre of the vehicle making it hard to 'aim' [FS#2147] (r13759)
- Fix: NewGRF rail continuation would always mark a tunnel on the same axis as connected, even when the tunnel faces the wrong direction (r13734)
- Fix: Assumption that non-north tiles of a house do not have the 1x1 building bit set was flawed with some NewGRFs. This caused the amount of houses to differ, which causes the town radii to differ, which causes desyncs when towns are expanded (r13729)
- Fix: Possible desync on the autorenew settings 20+ game years (i.e. 4.5+ hours) after a company was started (r13718)
- Fix: Any player could construct new companies [FS#2144] (r13716)
- Fix: Remove the unique_id from the message that a client has joined as it is only exposes the unique_id more than needed (r13714)
- Fix: Possible crash on creating a network packet [CVE-2008-3547] (r13713)
- Fix: Enforce the length restrictions of company and president name in the commands too (r13712)


### 0.6.2-RC1 (2008-07-16)

- Fix: Possible buffer overflow in string truncation code [CVE-2008-3576] (r13700)
- Fix: Handle SETX(Y) properly when truncating a string instead of ignoring it and returning a too long string (r13699)
- Fix: In some cases the (sound) mixer could overflow causing artifacts in the sound [FS#2120] (r13695)
- Fix: Do not rely on .tar files always ending with a block of zeros (r13693)
- Fix: Make sure a command is ran in the context of autoreplace or not (r13691)
- Fix: In the case that elrails and 'realistic' acceleration are disabled all electrified engines would have no power on load, until the vehicle got turned around, loaded or got into a depot [FS#2102]- Fix: Saving TTD imported games in recession failed due to wrong (and unneeded) type conversions in the saveload code [FS#2131] (r13679)
- Fix: Inactive companies from old (TTD) saves could be marked active in some cases, which then loads garbage in their statistics and such [FS#2126] (r13676)
- Fix: Memory leak when NewGRFs got forcefully disabled and they defined GOTO labels (r13675)
- Fix: Crash when drawing a non-real sprite caused by NewGRF interference [FS#2127] (r13674)
- Fix: Desync when building electrified trains on a dedicated server that was started with electrification disabled [FS#2122] (r13673)
- Fix: Bus/truck forgetting go-to-depot order when entering a non-drivethrough road stop [FS#2117] (r13664)
- Fix: Server crashing when banning the rconning client (r13661)
- Fix: Signals were not updated correctly when a player removed a non-existing track piece (r13626)
- Fix: Crash when one tries to raise the northern corner of MP_VOID tiles (i.e. the southern corner of the tiles on the southern map edge) in the scenario editor [FS#2106] (r13624)
- Fix: Only the front of a RV would be considered when determining to what cargoes a vehicle can be refitted instead of all cargoes [FS#2109] (r13622)
- Fix: If the first bridge can not be build for a given length, then none of the other bridges can. Effectively meaning that if someone replaces the first bridge with a bridge that can be only 3 tiles longs then only other bridges that can be 3 tiles long will be buildable, but only if they are 3 tiles long [FS#2100] (r13611)
- Fix: Signal states could be propagated through waypoints built in orthogonal axis (r13589)
- Fix: [OSX] 10.5 failed to switch to fullscreen (r13584)
- Fix: RVs continuing onto next DT station when they are build adjacent to them [FS#2040] (r13581)
- Fix: Disable static NewGRFs when non-static NewGRFs query them in the context of network games. This makes it impossible for static NewGRFs to disable non-static NewGRFs and 'bad' things happening because the non-static NewGRF does not know about the static NewGRF (r13576)
- Fix: Properly count number of non-north housetiles [FS#2083] (r13518)
- Fix: Incorrect usage of strtoul (r13508)
- Fix: Clear the memory for the new AI during the loading of a savegame so it does not try to execute commands generated in a different savegame, which could be resulting in the AI trying to give orders to stations that do not exist (r13505)
- Fix: Drawing of zoomed out partial sprites could cause deadlocks or crashes (r13502)
- Fix: First determine where to *exactly* build a house before asking a NewGRF whether the location is good instead of possibly moving the house a tile after the NewGRF said the location is good (r13489)
- Fix: Track was not removed on company bankruptcy when there was a ship on lower halftile (r13488)
- Fix: Let ships also navigate on half-tile sloped watery rail tiles (r13485)
- Fix: Division by zero when one would press 'd' (skip order) when there's no order (r13409)
- Fix: Do not crash when resolving vehicle sprite groups with zero sprites (r13397)
- Fix: In the purchase list, CB36 for capacity was not called for the first part of rail and road vehicles (r13385)
- Fix: Loading of very old OpenTTD savegames was broken (r13373)


### 0.6.1 (2008-06-01)

- Fix: Industry tiles would sometimes tell they need a 'level' slope when they do not want the slope (r13348)
- Fix: Attempts to make the old AI perform better (r13217, r13221, r13222)


### 0.6.1-RC2 (2008-05-21)

- Fix: Do not send rcon commands of the server to the first client but do directly execute those on the server (r13137)
- Fix: For multiheaded engines, halve power and running cost when used instead of when loading, to allow callback values to work properly (r13074)
- Fix: Loading of TTDP savegames with rivers in them [FS#2005] (r13066)
- Fix: Update build industry window when raw_industry_construction setting is modified (r13060)
- Fix: Revert changes to multihead engine weight -- the original values were correct (r13023)
- Fix: Debugging was not possible with MSVC 2008 (r12996)
- Fix: List used for sorting GRFs was not freed (r12993)
- Fix: Default difficulty settings were different to TTD's original settings [FS#1977] (r12951)
- Fix: All vehicles would be available when an original scenario would be played [FS#1982] (r12948)
- Fix: Keep only first 15 bits for non failed callback results (r12947)
- Fix: Reading/modifying invalid data under some circumstances (r12943)
- Fix: Minor errors related to industries accepted/produced cargo (r12933)
- Fix: Town rating was affected even after the test run (r12920)
- Fix: Flood road tiles even when there are road works in progress [FS#1965] (r12919)
- Fix: Do not initialise Station struct with tile=0, buoys will never change that value [FS#1960] (r12915)
- Fix: Game crash when a spectator/server tried to show an engine with no owner when a NewGRF requested a specific variable (r12914)
- Fix: Report reverse sprite status (FD/FE) to NewGRF for manually toggled vehicles (r12910)
- Fix: Vehicles going twice to a depot when the automatic service interfered with the current order [FS#1985] (r12629)


### 0.6.1-RC1 (2008-04-26)

- Fix: Vehicle groups, engine replacement rules and player/company names were not properly reset/freed after bankrupt (r12906)
- Fix: Remove trams from savegames saved in OpenTTD without tram support, it is better than to simply crash [FS#1953] (r12904)
- Fix: GCC on FreeBSD does not support -dumpmachine causing configure to fail. Use g++ instead [FS#1928] (r12876)
- Fix: Make the town rating tests use less memory and much quicker (r12859)
- Fix: Usage of AutoPtr made (trying to) build stuff very (time) expensive (r12857, r12855)
- Fix: Ensure that prop 25 is set for all vehicles in the consist before other properties as it could cause desyncs (r12856)
- Fix: Too much catenary was drawn about tunnel entrances, middle bridge pieces and non-rail station tiles (r12853, r12852)
- Fix: Use YAPF for fairly old savegames from before YAPF was introduced (r12845)
- Fix: The industry tick trigger should only be triggered once every 256 ticks, not every tick... Also bail out of the triggers a little earlier if you know they are not going to happen anyway (r12844)
- Fix: Inconsistent use of 8/15-bitness of NewGRF callback results with respect to TTDP's implementation of the specification (r12819, r12818, r12759)
- Fix: Possible out of bounds array access (r12809)
- Fix: Enforce autorenew values range in command (r12808)
- Fix: Vehicles could break down during loading and keep loading. The intention of the break down code is not to break down when having zero speed, therefore break downs now do not happen when loading [FS#1938] (r12795)
- Fix: [OSX] In some rare cases when using an uncalibrated monitor the system colour space could not be retrieved. Show an error when this happens instead of just trying an assertion (r12776)
- Fix: Slope checking for NewGRFs failed (r12759)
- Fix: Check the TILE_NOT_SLOPED flag of the _north_ tile of multi-tile houses to decide if autoslope is allowed (r12717)
- Fix: Do not move windows below the toolbar on resizes unless they would go behind the toolbar [FS#1904] (r12714)
- Fix: Increase default sound buffer size only for Vista [FS#1914] (r12708)
- Fix: Do not crash very hard on unrecognised savegames, just go back to the intro menu instead (r12707)
- Fix: In some cases a news messages would not be shown [FS#1906] (r12683)
- Fix: Removing road pieces from a town gave you twice the intended penalty [FS#1920] (r12682)
- Fix: When a road vehicle has a tram only stop multiple times in a row in its orders, only the first one would be skipped [FS#1918] (r12678)
- Fix: Colour remaps on station sprites only worked for company colours [FS#1902] (r12674)
- Fix: Remove buggy buoys at tile 0 from old TTDP savegames (r12642)
- Fix: Possible NULL pointer dereference when reading some NewGRF data [FS#1913] (r12637)
- Fix: Infinite loop in case your compiler decides that enums are unsigned by default (r12622)
- Fix: The convert signal button disallowed signal dragging when the signal GUI was closed (r12577)
- Fix: Binding to a specific IP could cause OpenTTD to not register properly with the masterserver if one has multiple external interfaces (r12574)
- Fix: The function min() has 32bit arguments, clamping of 64bit values did not work (r12572)
- Fix: Towns could not terraform when inflation raised terraform prices enough (r12564)
- Fix: Do not affect town rating change by the order in which we examine stations (r12561)
- Fix: Redraw the signal GUI when the signal drag density changes in the patch settings and vice versa (r12553)
- Fix: Do not install scenarios into the current user's homedir when running 'make install', that is silly. Simply always install scenarios system wide instead (r12542)


### 0.6.0 (2008-04-01)

- Fix: Final formatting of some string codes from NewGRFs was not done correctly [FS#1889] (r12488)
- Fix: Timetable times for aircraft were always doubled [FS#1883] (r12477)
- Fix: Remove broken endian-dependent code and unnecessary rgb to bgr swapping [FS#1880] (r12453)
- Fix: Do not 'disable' the drawing of autorail overlays when the tile is 'error'-marked (red pulsating selection) [FS#1871] (r12439)
- Fix: Plural rule for Icelandic was wrong (r12417)


### 0.6.0-RC1 (2008-03-26)

- Feature: Show whether a town is a 'city' in the town description title bar (r12391)
- Feature: Increase house animation frame number from 32 to 128 (r12347)
- Fix: Loading of TTD savegames (r12399, r12401)
- Fix: Vehicle lists related to stations not closed when the station is deleted [FS#1872] (r12393)
- Fix: Trams failing to turn on bridge heads/tunnel entrances [FS#1851] (r123890)
- Fix: Train could break apart when reversed while partially in a depot [FS#1841] (r12386, r12384)
- Fix: Non-breaking spaces should not be broken (r12385)
- Fix: Check return of AfterLoadGame for success or failure when loading TTD games [FS#1860] (r12383)
- Fix: Use 'items' unit for batteries, fizzy drinks, toys and bubbles in total cargo tab [FS#1864] (r12382)
- Fix: The number of houses was not computed right [FS#1835, FS#1535] (r12381)
- Fix: Update train acceleration and max speed after setting cached value to ensure the correct max speed is used with disabled real acceleration (r12380)
- Fix: Refresh vehicle details window when cached values are updated (r12378)
- Fix: Set cached value for vehicle property 25 before other cached values [FS#1854] (r12377)
- Fix: Do not close a dropmenu when clicking on a dropdown widget (r12374)
- Fix: Windows music driver fails if path is too long or if containing non-latin chars [FS#1849] (r12373, r12372)
- Fix: Do not let window hide behind the main toolbar after resizing the screen [FS#1823] (r12371)
- Fix: Close language drop down when parent window is clicked/closed [FS#1853] (r12370)
- Fix: Reset train speed limits when _patches.realistic_acceleration changes (r12369)
- Fix: Commands were sent to clients waiting for map download causing 'executing command from the past' error [FS#1650] (r12367)
- Fix: Do not allow building 'zero' road bits (r12363)
- Fix: Randomise variable 8F only once per callback 28 (r12362)
- Fix: openttdd.grf was using the wrong colours for glyphs due to a grfcodec bug (fixed in grfcodec 0.9.10 r1837) (r12360)
- Fix: Some callback-results were treated as 8 bit, when they were 15 bit, and vice versa (r12352, r12358)
- Fix: Do not try to flood water tile [FS#1836] (r12350)
- Fix: NTP skipped junction just after bridge end (r12348)
- Fix: Remove duplicated and inconsistent code wrt. autoreplace with rules in both vehicles' group and ALL_GROUP [FS#1748, FS#1825] (r12346)
- Fix: Do not try to restore backupped timetable when timetabling is disabled [FS#1828] (r12345)
- Fix: Slow helicopters never got the 'chance' to finish the landing routine (r12343)
- Fix: GRM buffer for cargoes was incorrect size [FS#1827] (r12341)
- Fix: Recalculate cached train data after clearing reversing flag when entering depot (r12339)


### 0.6.0-beta5 (2008-03-04)

- Feature: Vehicle variable FE bit 5, 6 and 8 [FS#1812] (r12331, r12330)
- Feature: Support loading full range of 0xD0xx NewGRF strings which includes 0xD000 to 0xD3FF (r12316)
- Feature: Ability to change aircraft speed factor, from so called 'realistic' (matching other vehicles) (1/1) to original TTD speed (1/4) (r12293, r12294)
- Change: Update readme about where openttd looks for files (r12321)
- Fix: Do not pause/unpause the game when showing load/save windows when the game is paused due to missing GRFs [FS#1733] (r12336)
- Fix: Disallow building level crossings over one-way roads as this allowed competitors to remove the one-way state [FS#1819] (r12329)
- Fix: Wrong Y pillar specified for girder with arch bridge (r12328)
- Fix: Vehicles could be sorted in a wrong order when a vehicle name changed - cached name was not invalidated (r12324)
- Fix: Vehicle sorting by name was broken, it was comparing the same string (when caching was not used) [FS#1821] (r12323)
- Fix: Endian issue when saving/loading group owner (r12322)
- Fix: Wrong transparency options could be saved after toggling all [FS#1817] (r12320)
- Fix: Map string IDs that are embedded from other strings [FS#1815] (r12317)
- Fix: Include prop 25 data for all train parts, not just those that carry cargo (r12314)
- Fix: YAPF and NTP did not apply penalty for uphill tracks on steep slopes (r12313)
- Fix: Restore timetable from backupped orders and add group ID to the backup [FS#1549] (r12296)
- Fix: Do not draw trees nor lamps between tram tracks (r12290) [FS#1807]
- Fix: [Windows] Do not create save dir on install (r12269)
- Fix: Autoreplace did not update vehicle index for timetable window [FS#1805] (r12261)
- Fix: GetProductionAroundTiles() may fail if only the second production slot exists (r12258)
- Fix: Town variables 0x9E to 0xAD (company ratings) returned wrong values (r12247)
- Fix: Typo resulting in no players are given the engine preview offer (r12244)
- Fix: Mac OSX bundle display name should be 'OpenTTD' [FS#1798] (r12234)
- Fix: [NewGRF] Support using any base price for rail and road vehicles' running cost, show running cost of wagons if available (r12209)
- Fix: When loading a savegame fails, do not start creating a new game, just go straight back to the intro screen (r12202)
- Fix: Force AI to build rail or road instead of bridges if possible, so it does not build bridges everywhere (r12200)
- Fix: 'Transparent buildings' now only toggles buildings, so show tick when buildings are transparent [FS#1789] (r12198)
- Fix: Show correct last year profit when the train had negative income [FS#1788] (r12197)
- Fix: There can be oil rigs at map borders, do not set water class for them [FS#1787] (r12195)
- Fix: Do not start overtaking if the RV reaches wrong-way one-way-road in the next tiles (r12191)
- Fix: Assert when trying to play tile sound at NW border of map (placing buoys, levelling land) [FS#1784] (r12186)
- Fix: Take into account possible loan when AI is deciding which bridge to build, so it will not build wooden bridges every time (r12184)


### 0.6.0-beta4 (2008-02-18)

- Feature: Allow buttons to resize in NewGRF settings window (r12172)
- Feature: Change colour of autorail and autoroad selection when Ctrl is pressed (r12167)
- Feature: Separate catenary transparency settings from building transparency settings (r12103)
- Feature: Allow locking individual transparency settings so they will not be changed by pressing 'x' (r12102)
- Feature: Add some missing VarAction2 variables (r12124)
- Feature: Make snow appear on rail tiles dependent on track height, not on height of the lowest part of the tile (r12098)
- Feature: [NewGRF] Specify the purchase, rail and road description of a bridge (r12069)
- Feature: [NewGRF] Add support for var 12, Variational Action 2 (r12045)
- Feature: Allow trees on shore (r12029)
- Feature: Invisible trees are now separate from the building concept (r12022)
- Feature: Add support for passenger engine designation for AI-use, NewGRF property 0x08 for trains (r12019)
- Feature: Show all cargo sources (en-route from) in the station view cargo waiting list instead of just one (r11990)
- Feature: [NewGRF] Resizable industry view window on callback 3A (r11987)
- Feature: [NewGRF] Implement var 8F (random bits) during callback 28 [FS#1697] (r11985)
- Feature: [NewGRF] Add support for Action 0D, var 13: information about current map size (r11961)
- Feature: Support Action5 type 0D (newwater) (r11947)
- Feature: Allow building bridge heads on more slopes (r11937)
- Feature: [NewGRF] Add support for Rivers. Rivers can currently only be placed with-in the scenario editor (r11926, r11938, r11949, r12071)
- Feature: Generate.vbs script to allow project files generation for users unable to run generate bash script (r12123)
- Feature: Sort the strings in languages dropdown (r11886)
- Codechange: Drop MSVC 2003 support (r11979)
- Fix: Test purchase list loading/loaded sprites instead of unconditionally returning a possibly non-existent sprite (r12180)
- Fix: Return correct bridge price for AI when DC_QUERY_COST is set [FS#609] (r12171)
- Fix: When drag&drop mode was cancelled by keyboard input, depot/group window was not updated [FS#337] (r12166)
- Fix: Buffer overflow when drawing scrolling news [FS#1652, FS#1773] (r12165)
- Fix: If a train is 'stopping' when entering a depot, do not let it leave again [FS#1705] (r12163)
- Fix: Towns should not build over houses owned by another town [FS#1757] (r12162)
- Fix: Towns will no longer build houses > 1x1 there where should be road (with 2x2, 3x3 grid town layouts) (r12161)
- Fix: Remove the arbitrary limit of 64 waypoints per town [FS#1744] (r12160)
- Fix: Chance16I was now biased towards zero - round to nearest now (r12156)
- Fix: Adjust aircraft slowing algorithm (r12144)
- Fix: Callback 0x3D always gets a cargobit in var 0x18, independent of grf version [FS#1766] (r12142)
- Fix: Do not allow adding tram to rail-road crossing when there is a vehicle on it (r12138)
- Fix: Show cargo capacity for articulated vehicles correctly in the purchase list. Multiple cargo types can also now been shown [FS#1769] (r12137)
- Fix: With mammoth trains disabled, maximum train length was limited to 9 (r12131)
- Fix: Use tile index 0 for planes in the air, so it cannot have an invalid tile index [FS#1745] (r12109)
- Fix: X/Y axis swap for station tiles in GetNearbyTile() was wrong way around [FS#1753]( r12108)
- Fix: Loading older savegames fixes (r12096, r12097)
- Fix: When a company bankrupts, remove drive-through road stops, ship depots and buoys too. Update owners of water and road [FS#1703] (r12095)
- Fix: Do not set station owner for buoys when merging company (r12093)
- Fix: Keep production level within delimited boundaries, while using var result 0D/0E and than multiplying/dividing it [FS#1755] (r12092)
- Fix: Assert when loading savegame with wrong tiletype at south map borders (r12088)
- Fix: Check overrides only for industries when mapping NewGRF entities to 'real' entities [FS#1747] (r12086)
- Fix: Update waypoint signs when changing language (r12080)
- Fix: Use search paths when opening console scripts (r12079)
- Fix: When reusing a renamed deleted waypoint, keep the new name (r12076)
- Fix: Make docks at sea flood neighboured tiles (r12072)
- Fix: Possible deadlock when there are no houses available to build at given tile (r12062)
- Fix: Houses with zero probability could be built (r12062)
- Fix: Do not clear tiles when the town will not be able to build any buildings anyway (r12060)
- Fix: Allow building 2x2 building on slopes if not explicitly forbidden (r12060)
- Fix: It was possible to build 2x1 and 1x2 buildings on slopes even if it was not allowed (r12060)
- Fix: Teach NPF where road vehicles and trams can reverse (r12058)
- Fix: Ships can drive through opponents' ship depots (r12058)
- Fix: Slowdown train when approaching 90deg turn when 90deg turns are forbidden (r12057)
- Fix: Enable YAPF to start searching inside a wormhole [FS#1704] (r12056)
- Fix: Another way to fix AI trying to build road through depots (r12055)
- Fix: The cargo translation table was loaded at the right time, but all the other global variables were now loaded too early [FS#1737] (r12052)
- Fix: Random_func broke for desync debug (r12050)
- Fix: Memset on multibyte array with wrong byte count (r12049)
- Fix: Crash when centring on a vehicle (aircraft) that is outside of the map [FS#1741] (r12044)
- Fix: Allow building transmitters and lighthouses on tree tiles [FS#1736] (r12043)
- Fix: Reimplement how rivers and canals are stored in the map, allowing the sea/river/canal status to also be stored for buoys, docks, locks and depots. All these are now allowed on rivers and removal of them will revert to the original water type [FS#1676] (r12042)
- Fix: Change ownership of or remove statues when merging/bankrupting companies (r12038)
- Fix: For station tiles, only get road types for road stops (r12036)
- Fix: Teach YAPF where trams can reverse, and where not [FS#1702] (r12035)
- Fix: Do not show train speed as zero after loading paused game (r12033)
- Fix: When removing a statue, remove town statue flag for the statue owner, not current player (r12032)
- Fix: Prevent towns from removing or claiming ownership of player owned tiles when growing [FS#1689,FS#1719] (r12031)
- Fix: In one case trees could spread under bridges (r12024)
- Fix: Put a better suited text in the quit-dialogue [FS#1690] (r12023)
- Fix: Restore initial intent on the invisible tree while transparent building patch setting [FS#1721] (r12018)
- Fix: When you have more than 9 network interfaces you'll enter the wonderful world of overflows (r12017)
- Fix: Better work on strings in regard to gender [FS#1716] (r12015)
- Fix: Lighthouses and transmitters were never supposed to be build on a slope (r12014)
- Fix: When modifying watered tiles, mark neighboured canals and rivers dirty in more cases (r12013)
- Fix: Enable TownRatingTestMode during cost estimation with 'shift'-key (r12012)
- Fix: Do not consider one-corner-raised-shores to be watered tiles from all sides [FS#1701] (r12011)
- Fix: Avoid loading sample.cat if it 'looks' incorrect, and avoid later null pointer dereferences by moving volume lookup deeper [FS#1707] (r12009)
- Fix: Possible reading from an invalid pointer [FS#1717] (r12005)
- Fix: When skipping Action 11 or 12, also skip belonging sprites (r12001)
- Fix: Do entrance-slope-check for every tile of railstations (r11999)
- Fix: Possible remote assert by setting bit 6 of p1 for CMD_REMOVE_ROAD [FS#1692] (r11998)
- Fix: Update train statusbar when stopping from zero speed [FS#1706] (r11996)
- Fix: Resize station/road stop/dock/airport construction windows if cargo acceptance list is too long (r11993)
- Fix: When building two rail stations close to each other (with control) so they looked like one long track trains would see them as one (r11992)
- Fix: Resize autoreplace window to fit purchase information text if it is too large (r11989)
- Fix: Build system ignored changes to table/control_codes.h which require strgen to be rebuilt (r11986)
- Fix: Also draw corner shores under rail tracks (r11984)
- Fix: Use unicode glyph mapping to fix up missing/shuffled sprites in original data files instead of shuffling or skipping sprites directly [FS#1698] (r11981)
- Fix: Industries using results 0D/0E on callback cb29/35 were a bit too eager to close down (r11976)
- Fix: Shore and sea tiles under bridges were converted to canals in old savegames [FS#1684] (r11974)
- Fix: Use grass tiles for corner shores, if shores got replaced by ActionA [FS#1683] (r11973)
- Fix: Old AI should not build fast planes with a small airport in orders(r11972)
- Fix: MP_ROAD can have railbits too - OPF searching over rail of diffen t owner behind crossing (r11967)
- Fix: OPF was searching through depots and normal road stops [FS#1403, FS#1506] (r11966)
- Fix: Tropic zone data was returned incorrectly [FS#1685] (r11964)
- Fix: NewAI could not build any road vehicles when there were any tram grfs loaded (r11958)
- Fix: Disallow building locks and docks on rapids [FS#1675] (r11956)
- Fix: Do not allow modifying roadbits when other roadtypes would need different foundation (r11953)
- Fix: Loading of very old savegames was broken (r11951)
- Fix: Slope detection of bridge ramps. Helps YAPF and Trolly (r11946)
- Fix: [Windows] FileExists() failed for non latin paths (r11945)
- Fix: Allow building drive-through road/tram stops at road/tram track that has no owner (r11944)
- Fix: 'BRIDGE_TOO_LOW_FOR_TERRAIN'-check was wrong for steep slopes (r11936)
- Fix: [Autoreplace] Single to dualhead locomotive replace failed when player had enough money to replace and refit one but not enough to refit the last one as well [FS#1624] (r11929)
- Fix: [Autoreplace] Autoreplace could refit train engines to the wrong cargo type if the old engine had no cargo capacity and the new one had (r11928)
- Fix: Loading old, pre savegame version 2, savegames (r11925)
- Fix: AI was reading wrong tile slope while building road bridge (r11917)
- Fix: Set correctly crossing state after train reversal, train leaving crossing, train crash (r11900)
- Fix: Segmentation faults/wrong frees due uninitialised memory in the AI [FS#1658] (r11887)
- Fix: Assert when trying to remove rail from a house or industry tile [FS#1663,FS#1665-6-7-8,FS#1680,FS#1686-7-8 FS#1715 FS#1742 FS#1771 FS#1776](r11883)
- Fix: Crash in MP in vehicle group window if the currently selected group is deleted by another player (r11878)
- Fix: Another way to crash competitors' train in a station (r11877)
- Fix: Automatically sending aircraft to depot for autoreplace/renew is now triggered by the correct conditions (r11875)
- Fix: EngineHasReplacementForPlayer() did not look in ALL_GROUP (r11872)
- Fix: Do not update signals after each tile when building/removing a large block of track/signals/station [FS#1074] (r11871)
- Fix: Slow down train when approaching tile we cannot enter in more cases (r11870)
- Fix: Do not make crossing red when we cannot enter it in any case (r11870)


### 0.6.0-beta3 (2008-01-16)

- Feature: Replaced fixed size custom name array. Names are now attached to their object directly and there is no limit to the amount of names (r11822)
- Feature: Add drag-n-drop support to the raise/lower land tools. Land is raised/lowered at the start and the rest of the area levelled to match (r11759)
- Feature: Add support for NewGRF's train 'tilt' flag. Trains with tilt capability (specific details are per NewGRF set) will be given a 20% speed limit bonus on curves (r11741)
- Feature: Added sorting for cost, running costs and speed to road vehicles and ships build windows (r11710)
- Feature: List neutral stations where the player has service in the station list too (r11670)
- Feature: Check whether (some) characters are missing in the current 'font' for the 'currently' chosen language and give a warning when that does happen (r11646)
- Feature: Support shore replacement via Action 5 (r11726)
- Fix: When two NewGRFs 'fight' to define the same cargo it could happen that the strings are defined by one cargo and the 'action2' by another and when one assumes that both come from the same NewGRF [FS#1559] (r11862)
- Fix: Recompute town population when removing a 'newhouses' grf, or when loading a game with missing 'newhouses' grfs [FS#1335] (r11855)
- Fix: Road vehicle count was incorrect in network lobby window (r11844)
- Fix: Mark dirty canal tile even in diagonal direction from flooded tile, draw correctly canal next to half flooded rail tile (r11843, r11838)
- Fix: At least one instance of dmusic driver is needed for it to be registered and usable (r11826)
- Fix: An articulated road vehicle could split up when it turned around at a corner and then would enter a drive through station at the next tile [FS#1627] (r11825)
- Fix: Switch _screen to the output buffer and disable usage of 32bpp-anim animation buffer during giant screenshots [FS#1602] (r11813)
- Fix: Do not crash trains when leaving depot to a very long track [FS#716] (r11802)
- Fix: Take town rating into account when testing if a command can be executed [FS#1616] (r11795)
- Fix: Reversing a train when loading at a station with an adjacent station in the same axis crashed [FS#1632] (r11794)
- Fix: Group names got not deallocated in the command test run [FS#1614] (r11743)
- Fix: Run window tick events when paused, so that news pop-ups and the about window still progress. For other windows the events are ignored when paused [FS#1319] (r11742)
- Fix: Modify and possibly discard key events for code points in the unicode private use area [FS#1610] (r11740)
- Fix: Set the new scroll position after zooming in instead of before, as the zoom will cancel it out [FS#1609] (r11739)
- Fix: Do not reset loading indicator IDs when only reloading NewGRFs [FS#1574] (r11735)
- Fix: Elrail merge gave elrail, monorail & maglev unintended speed bonuses for curves, as the bonus was based on the railtype index. The bonus is now specified by a property of the railtype (r11732)
- Fix: Clear sprite override data before performing NewGRF wagon attach callback. This stopped the callback working for autoreplace and when moving wagons from train to train in a depot [FS#1582] ( r11731)
- Fix: If there are no houses that can be build in a specific year yet, force the houses with the earliest introduction year to be available [FS#1577] (r11727)
- Fix: Make it impossible (for users) to circumvent the length checking of the NewGRF 'allow wagon attach' callback by moving several wagons at a time (r11724)
- Fix: Do not put more than one Random() in function calls because parameter evaluation order is not guaranteed in the C++ standard [FS#1561] (r11716)
- Fix: Do not allow player inauguration date on scenarios to be bigger than current year [FS#1569] (r11714)
- Fix: Add more house string id ranges to MapGRFStringID so NewGRFs use the proper string ids (r11712)
- Fix: Do not allow refitting flooded (destroyed) vehicles (r11707)
- Fix: Trains could have sprites with wrong direction when reversing, also was inconsistent with save/load process [FS#1557] (r11705)
- Fix: When removing buoys, return to water or canal depending on their owner (r11666)
- Fix: Animation information should not be copied from original industry tile spec, while doing an action 00, industry tile, prop 08 (r11665)
- Fix: Do not allow modifying non-uniform stations when non-uniform stations are disabled [FS#1563] (r11659)
- Fix: 'Initialised' NewGRFs could still be deactivated in the later 'activation' pass (r11650)
- Fix: Vehicles were still followed when sold [FS#1541] (r11632)
- Fix: Many viewports could crash the scenario editor [FS#1527] (r11629)
- Fix: Popping from text reference stack must be done in a precise order. But some compiler (MSVC) over optimised it and inverted this order [FS#1532] (r11627)
- Fix: There were still some cases where one could not build a tram track, but the tram could become blocked [FS#1525] (r11621)
- Fix: Do not make crossing red behind depot the train is entering [FS#1531] (r11619)
- Fix: Buoys are just waypoints, so do not allow load/unload/transfer for them (r11618)
- Fix: Sometimes large values could go off the chart [FS#1526] (r11616)
- Fix: Temperate banks can only be built in towns (over a house) (r11615)


### 0.6.0-beta2 (2007-12-09)

- Feature: Allow setting a default password for new companies in network games (r11556)
- Feature: Signal selection GUI for the ones that really like to use that over CTRL (r11547)
- Feature: Make the bridge selection window resizable (r11539)
- Feature: [OSX] Added support for using Quartz instead of Quickdraw in windowed mode on OS X 10.4 and higher (r11496)
- Feature: Allow to resize on creation the smallmap gui in order to show all the types industry available, allow to enable/disable individually or all at once, the industries shown on small map (r11474)
- Codechange: Send and store the passwords a little more secure to/in the servers (r11557)
- Fix: Wrong error messages were shown when trying to build some industries in the scenario editor [FS#1524] (r11609)
- Fix: [NewGRF] Do not trigger industries, but only the industry's tiles (r11608)
- Fix: Wrong count of Kirby trains when a ship was build [FS#1482] (r11605)
- Fix: Tiles were not marked dirty in some cases when removing a lock or flooding (r11582, r11604)
- Fix: Make price for railtype conversion more realistic; conversion should not be more expensive than removing and rebuilding [FS#1481] (r11603)
- Fix: Do not allow changing network only patches settings from console when not in network game (r11594)
- Fix: IsSlopeRefused() result was half wrong causing banks to be built on wrong places (r11590)
- Fix: When ship depots got destroyed they always returned to water, even when it should have been canals [FS#1514] (r11589)
- Fix: The one way road button was not reset on abort (r11587)
- Fix: Windows could get completely missing when one resized the window to something very small [FS#1484] (r11583)
- Fix: Invalidate 'list trains/roadvehs/ships/planes' widgets when station part is added/removed so it does not become glitchy (r11577)
- Fix: Flood train stations when there are no trains on border tiles too (r11574, r11570)
- Fix: Reinitialise windows system before loading a savegame because not doing so can cause crashes [FS#1494] (r11572)
- Fix: Road vehicle getting to the wrong side of a station when trying to overtake in there [FS#1493] (r11571)
- Fix: Full paths sometimes did not work correctly [FS#1480] (r11568)
- Fix: Break the chain before moving a vehicle after another in the same chain instead of causing an infinite loop [FS#1512] (r11566)
- Fix: Aircraft sometimes stopped mid-air when the airport got destroyed [FS#1503] (r11562)
- Fix: Group list was not updated when removing the last group [FS#1504] (r11561)
- Fix: Overflow when drawing graphics with high company values [FS#1505] (r11558)
- Fix: If ever the air/heliport is suddenly not available while the 'chopper' is descending, just go back into flying instead of stopping mid air [FS#1496] (r11546)
- Fix: Cargo translation was sometimes done when it should not be done [FS#1501] (r11544)
- Fix: [OSX] Detect statvfs at runtime (based on OSX version) instead of compile time. This should prevent a crash on OSX 10.3 with the precompiled binaries (in the load/save windows) (r11541)
- Fix: [OSX] Do not try to compile the quartz video driver on OSX 10.3 as it will fail (r11540)
- Fix: Do not do all kinds of 'updates' for town, waypoint, station and other signs when you have not converted the map to the 'current' format as that means you are going to read data in the 'old' format when you assume that it is in the 'current' format, which is eventually going to break (r11525)
- Fix: Assertion when tram reversed at a station [FS#1485] (r11524)
- Fix: The scrollbar of the network gui could run out of bounds (r11522)
- Fix: [OSX] The cocoa video driver let the mouse cursor escape the window when using rmb scrolling (r11520)
- Fix: Signs totally illegible when transparent signs is turned on and zoomed out more than one level [FS#1463] (r11507)
- Fix: Selling vehicles could cause the window of others to scroll to that location [FS#1471] (r11506)
- Fix: Do not do standard production change if callbacks 29/35 failed, disable smooth economy for industries using callbacks 29/35 (r11502)
- Fix: Two small layout issues with the vehicle grouping GUI (r11478)
- Fix: A road vehicle must not show that it is driving max speed when it is standing still waiting for the vehicle in from of it [FS#1451] (r11477)
- Fix: OpenBSD has ALIGN already defined, causing compilation failures [FS#1450] (r11467)
- Fix: Operator priority problem resulting in problematic autoroad placement in some cases (r11466)


### 0.6.0-beta1 (2007-11-18)

- Feature: Make news messages related to the industry (production) changes better configurable; you can now disable news messages popping up for industries you are not servicing (r11442)
- Feature: When sorting stations by cargo sum, only sum the cargoes that are selected in the filter (r11437)
- Feature: Show all players who have shares, not just the first two (r11435)
- Feature: Make OpenTTD's sprites replaceable using Action 5 and make replacing contiguous subsets of sprites in for some types possible in Action 5 (r11433)
- Feature: Allow town-bridges to be build on slopes (r11395)
- Feature: Auto-road; same as auto-rail, but for road and trams and only on X and Y direction (r11339)
- Feature: OpenTTD version checking for NewGRFs. This allows NewGRFs to do something different for different versions of OpenTTD, like disabling it for too low versions or loading different graphics (r11330)
- Feature: Half tile- and anti-zig-zag-foundations (r11319)
- Feature: Control-Clicking the Centre Main View button on the vehicle window allows the main viewport to follow the chosen vehicle (r11304)
- Feature: User customisable faces (r11269)
- Feature: Make more advanced rail types more expensive to build (r11265)
- Feature: Implement the 'moreanimation' feature of TTDP, so we can properly support newindustries (r11228)
- Feature: [NewGRF] Add support for newindustries (r11204)
- Feature: Sort the NewGRFs by name, making searching a specific NewGRF a lot easier (r11175)
- Feature: Add possibility to show the bounding boxes of sprites using CTRL-B so one can get a better understanding of the used bounding boxes to fix the glitches that still exist. Note that showing the bounding boxes is not glitch free; it only gives you some knowledge where the bounding boxes are (r11174)
- Feature: Remove the arbitrary limit of 10 articulated parts for a vehicle (r11120)
- Feature: Autoslope, changing of slopes of tiles that already have something build on them. Does not work for tiles of houses/industries/stations that do not allow autosloping (r11107)
- Feature: Support for encapsulating files into a .tar file; you can pack all files in your data/ directory in how ever many .tar files you like, keeping the directory-structure equal to the unpacked version, and OpenTTD can handle them just like the files were unpacked (r11106)
- Feature: Allow slopes under statues (r11069)
- Feature: [OSX] Added more options for right click emulation (controlled from the interface tab in the patch window) (r10996)
- Feature: Allow building and removing tracks and signals when there is a train on a parallel diagonal track that does not interact with this one (r10922)
- Feature: Added TileHeight to the Land Area Information tool [FS#653] (r10878)
- Feature: [OSX] OpenTTD will now pick the same language as finder is set to if no config file is found (r10851)
- Feature: Provide an infrastructure to have resizable windows that are smaller than the default window size. Useful for playing on very low resolution systems (r10704)
- Feature: Support for autosave_on_exit in the console, so dedicated servers can use it (r10658)
- Feature: Add a soft limit of 4096 'entities' in a station's waiting queue and a hard limit of 32768 so (malicious) people cannot cause a 'denial of service' attack by filling cargo lists (r10555)
- Feature: Replace all the windows for Industry building by a more flexible one (r10496)
- Feature: Support for 'prospecting' raw industries, i.e. you pay an amount of money and then it might (with a given chance) build a raw industry somewhere on the map (r10451)
- Feature: Automatic signal completion, enabled by pressing CTRL when dragging signals. Signals will continue following track until an existing signal, junction or station are reached. This currently replaces the existing use of CTRL-drag for changing existing signal type (r10437)
- Feature: New sign editor features including switching to previous/next sign (r10401)
- Feature: Disallow (in the GUI) the building of infrastructure you do not have available vehicles for. This means that the airport building button is disabled till you can actually build aircraft. The game itself will not disallow you to build the infrastructure and this 'new' behaviour can be overridden with a patch setting [FS#669] (r10353)
- Feature: Add the possibility of automatically filling in timetables based on the times from the first (or subsequent) run-throughs (r10331)
- Feature: Option to select the 'default' rail type when you start a new game or load a game. This is done either static, i.e. rail, electrified rail, monorail and maglev, or dynamic which takes either the first or last available railtype or the railtype that is used most on the map [FS#812] (r10329)
- Feature: Give a better explanation why the loading of a savegame failed and do not crash on loading savegames that were altered by patches or branches [FS#917] (r10300)
- Feature: A sticky button for the client list window [FS#885] (r10293)
- Feature: Allow double-clicking on certain places: add NewGRF window, build-vehicle and town-action (r10265, r10267)
- Feature: Loading indicator, which shows in % how full a vehicle is while loading/unloading (r10254)
- Feature: Introduce a form of timetabling for vehicles (r10236)
- Feature: [NewGRF] Add support for action 0F (town name generator) (r10211)
- Feature: Add support for personal directories on Windows (r10182)
- Feature: Add support for anti aliased typefaces via FreeType. This is configurable for each font size in the configuration settings and requires using the 32bpp blitter and suitable fonts (r10166)
- Feature: 32 bpp sprite support and dedicated driver does not blit nor render by default. Can be overruled by user (r10121)
- Feature: Add support for articulated road vehicles (r10097)
- Feature: Allow moving of orders instead of removing them and readding them somewhere else [FS#828] (r10071)
- Feature: Replace hard coded spritecache size with a configuration option, sprite_cache_size. The default size is 2MB and the value can range from 1 to 64MB. If you experience slow-downs when scrolling the map, try increasing this setting (r10042)
- Feature: Skip to the selected order in the order list when clicking on the 'skip' button while pressing CTRL [FS#760] (r10033)
- Feature: Sort the strings in server language dropdown and the town names dropdown (r10032, r10036)
- Feature: Build windows of trains, road vehicles and ships can now be sorted by cargo capacity (planes already had this option) (r10024)
- Feature: More languages flags for servers [FS#790] (r10017)
- Feature: Allow different signal types on one tile [FS#362] (r10006)
- Feature: Support for oneway roads (r9999)
- Feature: Add smooth viewport scrolling. This must be enabled with patch setting 'smooth_scroll' (r9962)
- Feature: Allow terraforming under bridges (r9950)
- Feature: Support for trams (r9923)
- Feature: Allow building new stations adjacent to existing stations by holding down control (r9905)
- Feature: Add one new zoom-out level: 8 times (r9884)
- Feature: Advanced vehicle lists a.k.a. group interface. Now you can make groups of vehicles and perform all kinds of tasks on that given group (r9874)
- Feature: Make 'improved loading' a proper improved loading instead of loading one (semi-)random vehicle at a time. Furthermore fill multiple vehicles at once when there is enough cargo to do so (r9838)
- Feature: Add drag and drop removal of station tiles (r9810)
- Feature: Support for 'curvature info', Action 2 for train, variable 45 (r9803)
- Feature: [NewGRF] Add action 1, 2 and 3 support for canals (r9797)
- Feature: Add the possibility to choose different road patterns for towns to use (r9779)
- Feature: Add an option to automatically pause when starting a new game (r9734)
- Feature: Add the concept of cities. A (configurable) proportion of towns can start off larger, and will grow twice as quickly as other towns (r9667)
- Feature: Add NewGRF Action 5 (Sprite Replacement) support for 2cc colour maps, airport, and road stop sprites (r9645)
- Feature: Increase cargo types from 12 to 32 and enable newcargo flag in NewGRF loader (r9638)
- Feature: Make it possible to have some control over the town growth (r9613)
- Feature: Add list_patches console command. This shows all patches along with their current values (r9565)
- Feature: Add more finer control to transparency options, including a new toolbar (r9563)
- Feature: Add support for variable snow lines in the arctic climate, supplied by NewGRF files (r9371)
- Feature: [NewGRF] Add support for newhouses (r9315)
- Feature: [NewGRF] Add support for Action 13, which allows you to translate GRF-specific texts. The translations will only be shown if you are using a language with a GRF language id and if a string has not already been set specifically for the language you are using (r9037)
- Feature: Translation dependent formatting of dates (r8906)
- Feature: If an action 7/9 leads to skipping the rest of the file, disable the NewGRF if an action 8 has not been encountered yet (r8831)
- Feature: Stop loading and disable the current NewGRF if a fatal error message in Action B is encountered. Also be more strict on the values accepted (r8830)
- Feature: Build aircraft windows will no longer show aircraft that cannot use the airport in question (r8771)
- Feature: Drive-through road stops (r8735)
- Feature: Allow upgrading bridges by building a new bridge over the top (r8567)
- Feature: Provide aircraft with vertical separation depending on their altitude and velocity (r8534)
- Feature: When linking the terraform toolbar to the build toolbars place them side by side instead of on top of each other (r8436)
- Feature: The vehicle build windows are now resizable in horizontal direction as well (r8331, r8336, r8338)
- Feature: Automatically build semaphores before a configurable date, which can be set by each network player separately (r8151)
- Feature: Increase sprite limit from 16384 sprites to 16777216 sprites (r8128, r8129)
- Feature: Add the ability to load savegames when you do not have the exact GRF files in your list. GRF files that are found based on GRF ID (but not on matching md5sum) are used instead of disabling them. This does not affect MP games, there you still need an exact match (r8106)
- Feature: Show the activated status of the GRF list after pressing 'apply' in the NewGRF window, instead of the local list (r8094)
- Feature: The station list does now remember the sort settings (r8065)
- Feature: Make it possible to override the bind address and port of a dedicated server from the command line (r7802)
- Feature: Add command line option to prevent saving of high score and configuration on exit and a console command to manually initiate a configuration save (r7801)
- Feature: Add support for tractive effort to 'realistic' acceleration (r7592)
- Feature: Allow to build bridges of arbitrary rail/road combinations (including signals) (r7573)
- Codechange: Do not allow configuration changes, that NewGRFs can directly use to change their behaviour, during network games as this can cause desyncs (r11452)
- Codechange: Make opening a new toolbar not overlapping its parent one, by locating it under the parent, and aligned with the left side of it [FS#1310] (r11256)
- Codechange: Do not brute force determine the first vehicle in the chain or previous vehicle, but do it by properly accounting the previous and first pointers when updating the next pointer. This gives a performance increase of about 15% when there are a lot of vehicles in the game (r11011)
- Codechange: Cache expensive NewGRF station variables during sprite lookups/callbacks (r10509)
- Codechange: Keep track of the origin, time of travel and accumulated feeder share (transfers) of individual pieces of cargo. This means that cargo is not thrown on a big pile when it is put in a station or unloaded at a station, however the GUI does not reflect these changes yet so you will not actually see it (r10266)
- Codechange: Do not limit the cost of tunnels (r10248)
- Codechange: Add new vehicle hash table for collision detection and finding vehicles on a tile. The hash area scanned is far smaller than the old hash table, which is now used for viewport updates only. This should give a significant performance improvement for games with many vehicles (r10111)
- Codechange: Do not redraw all station tiles when cargo is added or removed if the station has no custom graphics (r10062)
- Codechange: Add some support for NewGRF var 7D, temporary storage array (r9707)
- Codechange: Add support for returning 'TTDPatch variables' (Action D) (r9701)
- Codechange: Implement NewGRF callback 36, which allows changing of various properties which were previously static (r9671 and several others)
- Codechange: Add support for multiple 'base' directories for NewGRF searching (r9560)
- Codechange: Implement actions 1/2/3 for cargoes, callback handler and custom icon sprites (rmany)
- Codechange: Rename the 'New <vehtype>' button of the global vehicle lists to 'Available <vehtype>' as it is a view-only list, not one from which you can purchase (rolling) stock (r8420)
- Codechange: Remove the landscaping button from the build toolbars (r8143)
- Codechange: [NewGRF] Do not mark as unsafe those NewGRFs that set their own parameters (via action D) and/or change only bridge sprite table layouts (action 0, property D) (r7831)
- Fix: The CHANCE16 functions were biased; a 32768 in 65536 chance was really a 32769 in 65536 chance (r11454)
- Fix: Do not create shores in canyons (r11438)
- Fix: Starting OpenTTD with DOS files made it look weird out of the box (r11433)
- Fix: Properly support genders coming from NewGRFs instead of crashing [FS#1430] (r11422)
- Fix: Do not ignore the autorenew settings for new games when creating a new game [FS#1428] (r11415)
- Fix: Do not do a 270 degree turn when 90 degrees is enough on a commuter airport [FS#1422] (r11408)
- Fix: In rare cases OpenTTD could segfault when resizing and scroll the main window (r11405)
- Fix: Manually replacing a vehicle with shared orders makes it lose it is order index and service interval [FS1384] (r11370)
- Fix: Road vehicles must not drive through each other on bridges/in tunnels [FS#1258] (r11366)
- Fix: When stopping a ship or aircraft, set their speed to 0 so they will not continue at the speed where they were stopped at [FS#1288] (r11365)
- Fix: Cloning vehicles with non-standard sub-cargotypes (i.e. livery refits) failed [FS#1380] (r11362)
- Fix: Loading too many GRFs was not handled gracefully causing crashes and such [FS#1377] (r11355)
- Fix: Add missing elrail sprites for some rail build buttons/cursors (r11350)
- Fix: Trees can now be planted on bare land without making it grassy, planting tree in desert does not make it grassy for the first tile-cycle and when a tree dies in desert, it no longer becomes a snowy tile for the first tile-cycle (r11244)
- Fix: The explosion vehicles were placed too far to the south [FS#1312] (r11234)
- Fix: One could sell vehicles that were crashed in a depot, which would still yield money/one could construct trains of crashed vehicles [FS#1307, FS#1228] (r11229, r11230)
- Fix: Electric trains were not shown as stopped in depots when converting it from elrail -> normal rail [FS#1260] (r11167)
- Fix: A lot of graphical glitches by changing some bounding boxes. It is not perfect yet, but a *very* good step into the right direction (r11128)
- Fix: When autorenew is enabled and it cannot renew the vehicle anymore (because the player cannot build the engine), the ageing warnings as if autorenew is not enabled are shown [FS#553] (r11064)
- Fix: Inconsistency between rail<->elrail conversions of different kinds of rail containing tiles (normal rail, stations, depots, etc) [FS#1182] (r11059)
- Fix: Crash when having the Finance window opened of the player you are cheating to [FS#1177] (r11028)
- Fix: Switching players (using the cheat) crashed on Big Endian machines [FS#1150] (r11023)
- Fix: The canal border determination did not take oil rigs into consideration (r11022)
- Fix: Do not display income/expenses when they do not belong to a 'valid' tile, like the money cheat/giving money [FS#1175] (r11021)
- Fix: One could not give money when they had too much money or rather: when casting the amount of money to an int32 becomes negative [FS#1174] (r11020)
- Fix: When determining the gender of a string, do not assume that the gender is in the front of the string when there can be case switching code at that location [FS#1104] (r10792)
- Fix: Determining whether there is a tunnel going under the lowered area is only needed in two directions instead of all four, so take the directions (one for each axis) to the nearest border (along the given axis) [FS#1058] (r10686)
- Fix: Graphical glitches when the 'link landscape toolbar' patch is turned on when opening one of the construction toolbars [FS#1076] (r10685)
- Fix: Trolly AI did not know about steep slopes, and used wrong tileh in some cases [FS#1070] (r10655)
- Fix: Be consistent with the space between the company name and the player number, i.e. always put a space between them [FS#1052] (r10627)
- Fix: [YAPF] Ships received curve penalty for non-diagonal straight move (r10578)
- Fix: Do not segfault when you quit in the end-of-the-game screen [FS#1020] (r10548)
- Fix: When Cheat-Window is open and a new month happens, the window was not redrawn instantly (r10547)
- Fix: You can now have both Available Train as Available Ship window open [FS#1026] (r10546)
- Fix: Cargo payment rates overflow and cargo payment rates diverge from cost rates making it impossible to make any profit after a certain number of years. Both are solved by stopping the inflation after 170 years; there is absolutely no point in continuing the inflation after that as it only makes the game have overflows at some point that cannot be solved; using larger variables only delays the inevitable [FS#1028] (r10541)
- Fix: Error dialogue was sometimes shown on all clients when a command failed instead of only the client that actually did the command [FS#1015] (r10501)
- Fix: The network protocol check for required NewGRFs sent static NewGRFs too (r10414)
- Fix: When landscape generating, allow for 200ms between screen updates instead of updating every 200ms. Previously slow screen updates would result in very slow map generation (r10396)
- Fix: One could only build a limited number of stations before one had to rename them [FS#278] (r10320)
- Fix: Acceleration not calculated properly when a train goes up a hill between tunnels [FS#786] (r10317)
- Fix: [YAPF] Now it is no longer needed to invalidate the YAPF segment cache every tick in MP (read performance increase). Segment cost now does not contain the curves between segments. As a result the cache should be now accurate (r10302)
- Fix: [YAPF] Assertion triggered in some special cases [FS#901] (r10301)
- Fix: Flush stdout on dedicated server output to ensure an update of stdout [FS#775] (r10295)
- Fix: With smooth_economy, when industry production hit 32, it stayed there for ever. Give it some chance to get out of that uber-lowness (although it is a very slim chance, at least it has one) (r10290)
- Fix: Also age engines that are not front-engines [FS#202] (r10288)
- Fix: Money overflow bugs in many locations [FS#723] (r10212)
- Fix: Fix issues related to fixed names, fixed places of files/directories and application bundles [FS#153, FS#193, FS#502, FS#816, FS#854] (r10182)
- Fix: A vehicle without visual effects is not per definition unpowered (r9802)
- Fix: Do not assume that trains running on monorail/maglev cannot smoke/spark (r9801)
- Fix: Play sound effects based on the engine class, not the rail type (r9800)
- Fix: Separate engine class and engine running cost class (r9799)
- Fix: Clone vehicles will no longer refit for free (r9689)
- Fix: Improved loading does not use a huge amount of processing power anymore when having a lot of trains [FS#423] (r9683)
- Fix: Truncate the NewGRF information text in the NewGRF GUI if it is too long (r9449)
- Fix: Cancel in password queries reduces amount of players in the network game when they have not joined the game yet [FS#688] (r9378)
- Fix: If all news-setting buttons show 'full', make the ALL-button show 'full' too (r9137)
- Fix: Open and close messages now have their own setting, so you can hide economy changes, but do show open/close of industries [FS#525] (r9097)
- Fix: Do not make owner signs transparent, as then you loose the information who it owns [FS#637] (r9067)
- Fix: Store the owner of a statue, so when it gets removed, the town is notified of it [FS#638] (r9066)
- Fix: Inactive connections are not automatically kicked, i.e. people who only open a telnet (or similar) connection to a server [FS#115] (r9038)
- Fix: Do not select a disabled platform length/number of track count when going out of drag-drop mode [FS#450] (r8999)
- Fix: Make an aircraft at 400 km/h go as fast as a train at 400 km/h (r8973)
- Fix: You were unable to build roads in the scenario editor when there is no town 0, even though there are other towns (r8608)
- Fix: Road Vehicles now can obtain a slot even if the station is very spread out [FS#577] (r8536)
- Fix: Allow lumber mill to cut trees only when they are full grown (r8535)
- Fix: Segmentation fault when the toolbar gets removed and you have selected one of the items in a sub menu of the toolbar (r8533)
- Fix: Remove phantom oil rigs sometimes present in old savegames (r8485)
- Fix: When a station is removed, vehicles do not get excessive payment any longer, as the origin TILE is now stored as long as the origin STATION for the transported cargos (r8144)
- Fix: The game could crash when the chat key (<ENTER>) is pressed too vehemently during the join of the game. Your client's id does not exist in the clients list yet, and returns NULL (r8132)
- Fix: Rail vehicles can no longer enter tunnels or bridgeheads with wrong railtype (r7976)
- Fix: When path finding onto a bridge or tunnel end from previous tile (but not warping from the opposite end) check the enter direction. This fixes signal setting if a rail ends on the top of a tunnel end (r7718)
- Fix: When following path for signals, do not skip back to the previous tile, as for tunnels and bridge ends the entering direction is wrong (r7717)
- Fix: [YAPF] Suppress 'Train is lost' message if path finding ended on the first two-way red signal due to YAPF.rail_firstred_twoway_eol option (r7628)
- Fix: [OPF] Signal update was incorrectly propagated (r7620)


## 0.5.x

### 0.5.3 (2007-09-15)

- Fix: Possible NULL pointer dereference that could be triggered remotely (r11074)
- Fix: Removing CMD_AUTO from some commands could remotely trigger an assertion [FS#1179] (r11040)
- Fix: Underflow that caused overflows in the performance rating [FS#1179] (r11039)
- Fix: [Windows] MIDI does not stop when closing openttd [FS#1164] (r11029)
- Fix: Do not unconditionally assume that a tile has a depot (r11027)
- Fix: Give a more correct error when building some things on tile 0 [FS#1173] (r11024)
- Fix: Do not display income/expenses when they do not belong to a 'valid' tile, like the money cheat and giving money [FS#1175] (r11021)
- Fix: One could not give money when they had too much money [FS#1174] (r11020)
- Fix: Disallow buying/selling shares in your own company or a bankrupt company [FS#1169] (r11018)
- Fix: Crash when quitting the game in one of the end score windows [FS#1218] (r11071)


### 0.5.3-RC3 (2007-08-30)

- Fix: Spectators are not allowed to issue commands (r11006)
- Fix: Make the AI not crash when it has ships as the AI does not support them [FS#1133] (r10942)
- Fix: Trains would not get flooded when they are at the lower part of a tile that would become a coast tile after flooding [FS#1127] (r10892)
- Fix: Removing road with the road removal tool would also work with a negative bank account, making the bank account even more negative than it was [FS#1125] (r10890)
- Fix: Some isocodes were wrong, resulting in some NewGRF not working properly for the affected languages (r10877)
- Fix: [Windows] Do not try to minimise or restore the window when closing OpenTTD [FS#998] (r10835)
- Fix: Trains going over bridges would get the 'going down hill' accelerate bonus, which causes trains to go faster on bridges than they would be going on level land [FS#1096] (r10739)
- Fix: Trains being split into two pieces when loading an old savegame [FS#1062] (r10735)
- Fix: [OS/2] Fix chdir problem with open/save dialogue (r10650)
- Fix: One could not remove locks that were build in a (very) old version of OpenTTD [FS#1038] (r10593)
- Fix: One cannot navigate using arrow keys in the game name text box [FS#1038] (r10500)
- Fix: Ship's maximum speed wrongly shown [FS#1013] (r10497)
- Fix: [OSX] Of the resolution is changed to something that is too high for the monitor, then it is reduced to fit the monitor size, solving several crashes and graphical glitches [FS#458] (r10410)
- Fix: NPF was leaking memory each time it got initialised, except for the first time (r10357)
- Fix: [YAPF] 'target_seen' flag that is set prematurely in some cases (1 tile long cached segment followed by target station) which caused asserts to trigger [FS#884] (r10199)


### 0.5.3-RC2 (2007-07-07)

- Fix: Visual glitches when a window is resized in the WE_CREATE callback (r10465)
- Fix: [Windows] _wnd.has_focus was not properly set after using ALT-TAB [FS#962] (r10399)


### 0.5.3-RC1 (2007-06-28)

- Feature: Make the client list window (for network games) stickyable (r10293)
- Feature: Console command to get the current game date (r10137)
- Fix: Waypoints could be renamed when you are not the owner (r10368)
- Fix: Smooth economy did not close primary industries and it allowed increasing of production of industries that should not have rising productions (r10348, r10347, r10290)
- Fix: Acceleration for trains on slopes is not calculated properly [FS#786] (r10344, r10317)
- Fix: The 'old' pathfinders (OPF and NPF) for road vehicles could not find a path when in a tunnel [FS#290] (r10345)
- Fix: Only add the autoreplace menu when autoreplace actually knows about the group [FS#880] (r10337)
- Fix: Signal state sometimes not properly set when the signal 'pathfinder' reached the end of a line [FS#910] (r10336)
- Fix: News messages were shown over the endgame/highscore windows [FS#943] (r10333)
- Fix: Rail could be destroyed when building tunnels (r10306)
- Fix: Flush the output of the dedicated server console (r10295)
- Fix: The 'pause' key did not work in the scenario editor (r10294)
- Fix: Age non-front engines too (so when you move engines around in the depot they do not get age 0 when they are much older [FS#202] (r10288)
- Fix: Do not make everyone spectator if 1 joining client failed to create new company (r10284)
- Fix: Remove invalid characters (for the file system) from savegame names [FS#916, FS#850] (r10272, r10116)
- Fix: Some old savegames could have the wrong bits unset (r10268, r10147)
- Fix: Do not look in every direction for tunnels when building one, one direction is enough (r10258)
- Fix: [Windows] Do not mess desktop when using ALT-TAB [FS#876] (r10251, r10186)
- Fix: Take the age of the front vehicle for station rating (r10246)
- Fix: Terraforming wipes out canals. Now you always have to remove the canal before terraforming, instead of 'just' removing the canal [FS#594] (r10240)
- Fix: Only 2 trains could crash at one time as collision checking stopped on the first hit. This could technically cause desyncs in network games as the collision hash order is not guaranteed [FS#892] (r10222)
- Fix: Land under foundations was terraform when it should not be terraformed [FS#882, FS#890] (r10219)
- Fix: Do not make a 270 degree turn on the international airport when a 90 degree turn is enough (r10187)
- Fix: Crash when trying to get the aircraft movement state of an aircraft going to a just deleted airport [FS#874] (r10165)
- Fix: Airports did not flood when there are aircraft on the airport [FS#601] (r10155)
- Fix: Some vehicles were not drawn when having a high resolution and a high zoom-out level [FS#870] (r10154)
- Fix: Vehicles disappear when crossing certain tiles [FS#869] (r10153)
- Fix: Train disconnects in some old TTD savegames [FS#862] (10151)
- Fix: OpenTTD assumes that the resolution is at least 1 by 1, so force the resolution to be always at least 1 by 1 (r10139)
- Fix: When you got a sufficiently small resolution, there is a possibility for a division by zero when a sound is played (r10138)
- Fix: When removing a dock, a ship will always try to reach the old location of the dock even when it cannot anymore because it the old location of the dock is now land instead of water [FS#810] (r10131)
- Fix: SetCurrentGrfLangID returned the wrong language ids for most languages (r10130)
- Fix: Some NewGRFs use the same (unused in the 'current' climate) sprite IDs. Normally this gives some artifacts, but when one NewGRF expects it to be a sprite and another NewGRF overwrites it with a non-sprite nasty things happen (drawing a non-sprite crashes OpenTTD) [FS#838] (r10109)
- Fix: Multiple subsequent 'give money' actions could result in duplicate messages that money has been transferred when it only happened once, or tell you paid money when you did not [FS#834, FS#839] (r10087, r10085)
- Fix: 'Deactivate Electrified Railways' did not work [FS#836] (10083)
- Fix: Memory leaks in the networking code [FS#846, FS#844] (r10082, r10075)
- Fix: Coverage area highlight was still show when it was turned off for docks [FS#835] (r10068)
- Fix: Do not use override engine type for articulated wagon parts (r10048)
- Fix: Sprite resulting from '?' substitution was reloaded into the cache entry for SPR_IMG_QUERY instead of the original sprite cache entry. This resulted in unaccounted missing sprite cache memory, and was exacerbated because the original missing sprite was not cached, so it did it again and again and again. Slowdowns and boom (r10038)
- Fix: One could build on (some) slopes when building on slopes was disabled [FS#823] (r10030)
- Fix: When deleting the first engine of a train with multiple engines, only reopen the train window if the player had the original train window open. This fixes 'random' windows opening for multiple players of the same company (r10028)
- Fix: When selling trains, if there were no wagons between multiheaded engines the rear part could be checked despite having already been deleted (10023)


### 0.5.2 (2007-05-29)

- Feature: Add threading support for MorphOS (r9759)
- Fix: Bridges and tunnels were not always removed on bankruptcy, thus leaving tunnels/bridges with an invalid owner that would crash the game when clicking with the query tool on them (r9966)
- Fix: Null pointer dereference under MorphOS and AmigaOS (r9861)


### 0.5.2-RC1 (2007-05-16)

- Feature: Windows 95/98/ME check in Windows 2000/XP/2003/Vista builds (r9834)
- Feature: Add password protected status to 'players' (network server) console command (r9771)
- Feature: Add server_lang in [network] section of openttd.cfg (r9716)
- Fix: Loading some TTDP savegames caused an instant assertion on loading (r9857)
- Fix: [NewGRF] Catch occurrence of division-by-zero in varaction handling (r9837)
- Fix: Only non dedicated servers cannot have 0 players [FS#765] (r9785)
- Fix: Remove arbitrary limit on length of NewGRF strings (r9775)
- Fix: [NewGRF] Ignore axis-bit of station tile layouts [FS#756] (r9758)
- Fix: [Windows] Dead key and open/close console (r9728)
- Fix: When you have closed the 'Load game'/'New game' windows which you started from the 'start server' menu, you should not start a server when starting a new game [SF#1244842] (r9757)
- Fix: Trains were lost after autorenewal/autoreplace [FS#732] (r9753)
- Fix: Stop flooded towns from building roads on water [FS#598] (r9743)
- Fix: Station signs were not resized when the language changed [FS#672] (r9741)
- Fix: In news history, newlines were not replaced with spaces [FS#677] (r9731)
- Fix: Crash when destroying bridge with train partially on it [FS#738] (r9726)
- Fix: Planes made a 270 degree turn instead of a 90 degree turn on the southern runway of the intercontinental airport [FS#743] (r9725)
- Fix: In-game private messages did not work for clients with high ClientIDs (r9719)
- Fix: Do not allow building of rail vehicles whose railtype is not available (r9718)
- Fix: [YAPF] The guessed path was ignored for ships [FS#736] (r9694)


### 0.5.1 (2007-04-20)

(None)


### 0.5.1-RC3 (2007-04-17)

- Feature: Add list_patches to console commands; shows all patches and values (r9565)
- Fix: Select 'Custom' in the difficulty settings gui when changing a setting [FS#733] (r9647)
- Fix: Building rail on steep slopes ignored build_on_slopes patch setting (r9602)
- Fix: Wrong characters in Finnish town names (r9641)
- Fix: When checking for no vehicle on ground-tiles, do not take into account vehicles that are in the air (r9542)
- Fix: Bankrupt AIs no longer buy over themselves (also added safeguards to prevent in future) (r9540, r9541)
- Fix: When company is removed, sell all shares of the and in the company (r9533)
- Fix: Crash when 2 or more clients joined at roughly the same time (r9529)
- Fix: Custom currency was overwritten and fix euro introduction (r9467, r9469)
- Fix: Values of diff_custom and snow_line in .cfg were not checked properly (r9455)
- Fix: When deleting a vehicle which has shared orders with one more vehicle and no orders, segfaulted (r9429)


### 0.5.1-RC2 (2007-03-23)

- Fix: Crashes when the chatbox would be drawn outside of the main window [FS#701] (r9420)
- Fix: Reading out of an array caused a segmentation fault [FS#694] (r9394)


### 0.5.1-RC1 (2007-03-20)

- Feature: Translation dependent formatting of dates (r8906)
- Feature: Kick inactive initial network connections after some time [FS#115] (r9038, r9061)
- Feature: Add an extra news group for opening and closing of industries (r9097)
- Codechange: Disable shares by default and increase the default maximum distance from edge for oil refineries (r9339)
- Codechange: When you started openttd with '-g' you got the same map every run (r9205)
- Codechange: When all news-setting buttons are 'full', make the for-all button show 'full' too (r9137)
- Codechange: Disable the ability to make flooding water with the canal build tool. In the scenario editor you can still make both canals and flood water at height level 0 [FS#622, FS#629] (r9105, r9115)
- Codechange: The station list, sorted by cargo rating, now takes stations into account that have no cargo waiting [FS#595] (r9062)
- Fix: Close the Shared Order Vehicle List if you remove the shared link with only 2 vehicles (r9338)
- Fix: A34-1000, Z-Shuttle, and Kelling K1 are now listed as small aircraft (r9298)
- Fix: Shared orders got messed up when the 'first' trains got removed in the depot [FS#685] (r9277)
- Fix: Use a less CPU-intensive algorithm to find a random industry for the AI to prevent it slowing down the game [FS#644] (r9251)
- Fix: When loading games, enroute_from was updated in the wrong place, causing issues with TTD savegames/scenarios (r9147)
- Fix: 'Train is lost' message is generated incorrectly [FS#676] (r9146)
- Fix: Difficulty level button was not selected when opening the difficulty window (r9117)
- Fix: The wrong catenary wires were drawn for tunnel entrances [FS#612] (r9077)
- Fix: The intercontinental airport used 'T-junction' runway sprites when there is no exit in the middle of the runway as in the city airport [FS#529] (r9076)
- Fix: [Windows] Dedicated console now does not need an extra 'enter' to fully quit [FS#459] (r9074)
- Fix: Take over companies properly in multiplayer games [FS#459] (r9071)
- Fix: When a bribe failed and you have not picked up cargo yet, you would never be able to do so for a given station [FS#404] (r9070)
- Fix: Do not keep on scrolling for non-numeric values in settings, but require reclick [FS#663] (r9064)
- Fix: The personal (.openttd) directories were hidden in the load/save directory listings [FS#652] (r9043)
- Fix: Desync caused by buffer overflow [FS#664] (r9027)
- Fix: When cutting strings into multiple lines also take into consideration whitespace characters of more than 1 byte length (r9012)
- Fix: Play the correct engine sound based on the engine type instead of the sprite (r9009)
- Fix: New locomotive names were not announced in the news, it said 'new railway locomotive available - railway locomotive' [FS#581] (r9000, r9001)
- Fix: [NewGRF] Do not select a disabled platform length/number of track count when going out of drag-drop mode [FS#450] (r8999)
- Fix: [Windows] Resolution doubled in cfg file when fullscreen mode used [FS#642] (r8994)
- Fix: The industry list should also be (re)set when the number of industries is 0 [FS#656] (r8980)
- Fix: [Windows] Possible buffer overflow if unicode text is pasted into an input box and needs trimming (r8975)
- Fix: [Windows] Support compilation with the Vista Platform SDK (r8974)
- Fix: Crash on loading savegames with GRFs that do not have their GRF info/name set (r8955)
- Fix: [NewGRF] Support for vehicle variable 48 was wrong (r8943)


### 0.5.0 (2007-02-27)

- Feature: Add the ability to load newer TTDP games (the tile information for coasts has changed) (r8738)
- Feature: Selecting 'end of orders' and deleting will delete all the vehicle's orders (shared mode unchanged) (r8685)
- Codechange: Call GetFirstVehicleInChain only for trains thus increasing performance in large games (r8744)
- Fix: Possible crashes, problems with aircraft and airport removal (r8921)
- Fix: Do not show the 'edit sign' window for spectators (r8808)
- Fix: Adhere order types for ship order insertion to determine destination type (r8802)
- Fix: It was possible to take over buoys by building a station next to them (r8794)
- Fix: Cloning unaware of articulated locomotives that could refit without refitting the front unit (r8777)
- Fix: Loading times for overhanging trains are miscomputed (r8709)


### 0.5.0-RC5 (2007-02-08)

- Feature: Requery gameservers that did not respond to their first query (r8520, r8542)
- Feature: Logging of the IP address and port of invalid/illegal UDP packets (r8490)
- Codechange: Replace missing sprites with a red question mark (r8634)
- Codechange: Add Korean, Simplified Chinese and Traditional Chinese languages as an official translation (r8286, r8324, r8616)
- Codechange: Increase the size of the sound/video/music-drivers to 32 bytes (instead of 16) so their actual parameters can be passed. Sound has for example bufsize' and 'hz' (r8497)
- Codechange: Be more strict about language generation and fail any languages not having the mandatory ##name, ##ownname and ##isocode pragma's (r8253)
- Fix: Draw canal edges under buoys that are in a canal (r8635)
- Fix: Buoys on canal tiles do not flood anymore (r8620)
- Fix: Store the ownership of a water tile in the buoy tile and set the ownership of the water tile when the buoy is removed. Prevents certain abuses (r8619)
- Fix: When the currently selected player in the performance details window is no longer active, choose the first active player instead of the first player as that may also be inactive [FS#582] (r8612)
- Fix: Road vehicle very close after another (slower) road vehicle gets its speed reset to 0 when entering a tunnel, which causes a traffic jam outside of the tunnel (r8609)
- Fix: Bridges do not get destroyed when the bridge head gets flooded and there is a vehicle on the bridge [FS#564] (r8593)
- Fix: Road Vehicles now can obtain a slot even if the station is very spread out [FS#577] (r8536)
- Fix: Segmentation fault when the toolbar gets removed and you have selected one of the items in a submenu of the toolbar (r8533)
- Fix: Deleting a vehicle with shared orders, but no orders would fail to reset prev_shared and next_shared (r8294)


### 0.5.0-RC4 (2007-01-18)

- Feature: Increase spritecache size to 2MB, will increase performance in games using NewGRF files (r8218)
- Feature: OS/2 support with GCC (Watcom is dropped) (r8042)
- Codechange: Add Japanese, Slovenian language as an official translation and split Norwegian into Bokmal and Nynorsk (r7987, r8084, r8069)
- Codechange: Show error messages about our own data files as a popup, or to stderr if console is available (and not to stdout) (r8013, r8134)
- Codechange: Change the ordering of the network list, compatible servers just missing grf files are below fully compatible servers, not on the bottom (r8118)
- Fix: Return proper error value when unthreaded save fails, prevents server sending 0-sized files (r8171)
- Fix: Network client crashes when a server sends a 0-sized savegame [FS#556] (r8167)
- Fix: Several desync fixes (incorrect road stop update of old games, autoreplace bugs) [FS#551] (r8137, r8147, r8157)
- Fix: Some disaster-events fixed: combat chopper shoots from right position, submarine once again moves around (r8140, r8158)
- Fix: 'out of sprite memory' warning messages due to incorrect assumption of requested memory for sprites (r8133)
- Fix: Buoys are now built and numbered 1..9 not 9..1 [FS#538] (r8123)
- Fix: Clicking for more news properly cycles through the news history backwards, and does not show the first item doubly if it is already open (r8049)
- Fix: Crash when removing a town in the scenario editor while the query window is open for one of the town's tiles (r8030)
- Fix: Overflow of system-ticks was not handled properly, resulting in a possibly unresponsive server/client (r8028)
- Fix: Automatic pause interfering with 'pause_on_join setting' in MP when <shift> is pressed [FS#486] (r8027)
- Fix: Picking up en-route cargo will also have virtual profit deducted for trains as well (r8026)
- Fix: Out-of-bounds read access on _clients array (harmless) (r7984)

### 0.5.0-RC3 (2007-01-07)

- Codechange: Add Lithuanian language as an official translation (r7806)
- Fix: The configure script did not work work for dash, a sh compatible shell [FS#485] (r7893)
- Fix: [OSX] Control + enter no longer fullscreens, interfered with team-chat (r7886)
- Fix: Offset engines/wagons by half width in details window; fixes overflowing for display (r7864)
- Fix: [OSX] Remove incorrect debug message about missing grf files (r7766)
- Fix: [SDL] Sometimes ALT-TAB could trigger the fast forward (r7727)


### 0.5.0-RC2 (2006-12-31)

- General Removed support for OSX older than 10.3.9. Either upgrade, or use 0.4.8 (compatible with OSX 10.2)
- Codechange: Drastically reduce the CPU usage in certain cases (AI using CheckStationSpreadOut()) (r7585)
- Fix: Internal bug in updating the animated_tiles table caused desyncs between (different endian) machines in MP (r7631)
- Fix: Signal update got propagated through incompatible railtypes and under certain circumstances tunnels and rail on top (r7620)
- Fix: Remove landscaping toolbar option from road construction toolbar in scenario editor [FS#473] (r7586)
- Fix: The server could under certain circumstances tell a client too late to start syncing if it has been waiting to join (r7566)
- Fix: Removing towns in scenario editor did not remove their subsidies causing possible crashes [FS#468] (r7563)
- Fix: Internal and (patches) GUI were disagreeing about autorenew settings [FS#431] (r7561)
- Fix: No new company could be created if more than 8 clients were connected, even if not all 8 companies were used (r7560)
- Fix; Clicking 'full load' could under certain circumstances change the current depot order [FS#456] (r7559)
- Fix: Do not wait till a crashed vehicle is removed before starting to load other vehicles [FS#464] (r7558)
- Fix: MorhpOS compile and install fixes (r7548)
- Fix: Removing rail station cost was calculated on occupied area not on number of tiles with an actual station on (r7547)


### 0.5.0-RC1 (2006-12-21)

- General fixes and improvements to TTDPatch's NewGRF format, most noticeable are newstations, newsounds, more callbacks and I18n
- Added languages: Bulgarian, Esperanto, Russian, Ukrainian, Languages with proper diacretics: Czech, Hungarian, Turkish
- Feature: Show NewGRF compatibility of network games; green for full compatibility, yellow for missing NewGRFs and red for invalid revision (r7505)
- Feature: Load a list of NewGRFs from the config (in the [NewGRF-static] section) that should always be loaded (r7490)
- Feature: Double the length of the cargo and rating indicators in the station list window for better visibility (r7466)
- Feature: NewGRF set up window and browser which allows modification and viewing of NewGRF settings ingame or the main menu (r7357)
- Feature: Support for saving NewGRF settings with savegames (r7348)
- Feature: Add support for gradual (un)loading of vehicles (r7326)
- Feature: Add freight trains patch option which is a multiplier for the weight of cargo on freight trains, to simulate longer heavier trains (r7269)
- Feature: UNICODE/UTF8 support, with (optional) usage of fonts rendered by Freetype instead of sprites. This means full unicode support (input, rendering, file/io) and greatly enhanced internationalisation for non-latin languages (utf8) (r7182)
- Feature: Add Slovak, Brazil and Slovenian currency [SF 1243657, 1171147; FS#131] (r7160, r5964)
- Feature: Allow towns to be built on top of trees in the scenario editor [FS#396] (r7152)
- Feature: Allow over-building of compatible railtypes, i.e. normal and electrified rail. If building electrified rail, normal rail is upgraded for you (at a cost) (r7106)
- Feature: Additional positioning for long dropdown lists with scrollbar support if dropdown list would not fit (r7086)
- Feature: [Windows] Remember the window size between restarts when quit in fullscreen mode (r7061)
- Feature: Increase the chatbuffer of chat messages, messages longer than the graphical box will be wrapped to a new line (r6956)
- Feature: Allow typing longer text than visible for an editbox; it will scroll properly now (r6954)
- Feature: Allow spectators to team-speak to each other (r6933)
- Feature: Allow for ' to be in console tokens. Escape them with \. eg \' (r6875)
- Feature: Change the functionality of the chat window. SHIFT+ENTER (SHIFT+T) sends a message to all players, CTRL+ENTER (CTRL+T) sends a message to all team mates and ENTER (T) is customisable (r6824)
- Feature: (Train is) lost message is now generated immediately when pathfinder cannot find the path (r6800)
- Feature: Add a measurement tool that will show dimensions and height differences of various draggable tools (r6758)
- Feature: Added sort options to the build aircraft and train windows (r6708)
- Feature: Depot lists are now sorted, so vehicle 1 is always first and so on (r6652)
- Feature: Ability to pause a server if not enough players are connected. The setting for this is 'min_players' (r6628)
- Feature: Ability for servers to execute a script just after a client has connected, e.g. for a MOTD, etc (r6625)
- Feature: Add refit commands to vehicle orders (can only be done in goto depot orders) (r6624)
- Feature: Support cargo subtypes in the refit window. The refit window has been altered to support resizing and scrolling (r6601)
- Feature: Depot and vehicle list windows reworked a bit with more buttons to include 'Autoreplace all' (instantly), 'Sell all', 'Start all' and 'Stop all' (r6542, r6552, r6515)
- Feature: Using goto depot with a different control selection will now alter the service/stopping in depot flag instead of cancelling the goto depot order (r6295)
- Feature: When automatically detecting the language try to first match language+territory (e.g. de_CH), then just language (e.g. de) and fall back to en_GB otherwise (r6290)
- Feature: Add a 'goto depot' button to various vehicle list windows (r6229, r6246)
- Feature: Save max_companies/clients/spectators in the config file (r6170)
- Feature: Vehicle status bar will show the heading string in different colours to visually discern the difference between a service and a forced stop (r6165, r6414)
- Feature: Control clicking Goto Depot will now make the vehicle service instead of stop in depot (r6165)
- Feature: List of vehicles with the same shared orders, accessible from the orders-window of a given vehicle (r6161)
- Feature: Added -s (source) and -d (destination) to strgen to specify paths for input and output files (r6089)
- Feature: After removing a farm, its farmland is removed too (over time) [FS#82]
- Feature: Clicking twice on the location button in the smallmap centres to your position, clicking twice centres your viewport [FS#54] (r6040)
- Feature: Change the original date format to a 32 bits format based at the year 0. Highest date is the year 5.000.000AC (r5999)
- Feature: Auto-completion in chat-window. It completes Player and Town names (in that order) using <tab> (r5968)
- Feature: Catalan Town Names generator [FS#261] (r5965)
- Feature: Possibility to generate scenarios by importing heightmaps. It can be in PNG or BMP format
- Feature: New (optional) landscape generator based on TerraGenesis Perlin noise with GUI, progress bar and fine-tuning options (r5946)
- Feature: Filter for textboxes to only allow input of certain patterns (like numbers only) (r5944)
- Feature: [Windows] Remember the maximised state of the game window and restore on start [FS#234] (r5874)
- Feature: Add an icon to the SDL openttd executable (r5872)
- Feature: Also allow horizontal and vertical rails on steep slopes (r5864)
- Feature: Allow building of (certain) rails, roads and bridge ramps on steep sloped tiles (r5833)
- Feature: Replacing from a train engine without cargo capacity to one with cargo capacity will now make autoreplace refit the engine to carry the cargo type from the last wagon in the train (r5465)
- Feature: [OSX] Macs with touchpads that support two finger scrolling can now use this 'scrollwheel' to scroll up/down (r5460)
- Feature: Allow building canals at sea-level, using ctrl to toggle canal or plain water tile. This allows building of non-raisable sea-level water ways (useful in multiplayer) and dikes for low-level areas (r5403)
- Feature: Add 4 new airports. 2 for aircraft, 2 for helicopters (r5346)
- Feature: Implement smooth horizontal depot and, vehicle list scrolling for trains (r5046)
- Feature: Add new pathfinder, YAPF. Has greatly improved performance and better, fully configurable, pathfinding (yapf) (r4987)
- Feature: Add a new console command 'players' that lists current players along with basic stats [FS#150] (r4828)
- Feature: Station List View can now be sorted and filtered (by waiting cargo type and facilities) (r4822)
- Feature: The integer-list parser now accepts a space character as an item separator next to the comma for openttd.cfg (r4490)
- Feature: Add support for electric railways as a separate tracktype. Electric trains will not run on non-electrified track unless otherwise controlled by patch option (elrails) (r4150)
- Feature: A new multi-lingual multi-measuring-unit system (r4126)
- Feature: Add proper OPENTTD <> LOCALCODE conversion using iconv. Savegames with special characters will be legible in filesystem (r4105)
- Feature: Undraw the mouse when it leaves the window and draw it again when it enters (r4075, r4083)
- Feature: It is now possible to turn a single unit in a train (CTRL+Click on unit in depot) (r3944)
- Feature: Delete news items about vehicles when they get stale (r3757)
- Feature: Save patch settings with the savegame so you are presented with the same behaviour when loading the game on another machine/installment (r3726)
- Feature: Add 2cc (two company colours) livery schemes. This replaces the original colour selection window (r3717, r6455)
- Feature: [OSX] Added support for triple binaries (binaries optimised for G3, G5 and i686) (r3674)
- Feature: Allow autoreplacing of train wagons (r3535)
- Feature: Allow sorting of vehicle lists by model or value (r3528)
- Feature: Allow trains details view to be resized (r3521)
- Codechange: Improve the usability of the signal-dragger, do not bail out at (certain) errors, just silently ignore them [FS#149] (r7127)
- Codechange: Make the zoom in/out buttons of the extra viewport into proper push-buttons (r7078)
- Codechange: Make the AI choose road vehicles based on a rating (currently max speed * capacity) instead of either the cost or the index of the vehicle (r7070)
- Codechange: Truncate text in window captions to prevent overflow (r7058)
- Codechange: Allow standard ini-file style comments (;) (r6972)
- Codechange: Send server messages with format NETWORK_ACTION_SERVER_MESSAGE so it is general colour like the rest of the server messages. Spectators speak in grey (r6932)
- Codechange: Change textmessage format a bit. Only the sender's name and target are in the sender's colour, the actual message is in white. Should improve readability (r6932)
- Codechange: Add an MD5 sum check of our own data files, and warn if they do not match (r6921)
- Codechange: Add strict bounds checking in string formatting system to check for possible buffer overflows (r6884)
- Codechange: Have the dropdown menus fall fully inside the top toolbar (r6745)
- Codechange: Determine the length of the main toolbar dropdown list based on the length of the strings in that list (r6744)
- Codechange: When vehicles never expire they will stay at peak reliability instead of the lowest to make them useful even when old (r6681)
- Codechange: Show more correct capacity of articulated wagons in the train purchase list (r6650)
- Codechange: When showing tooltips, properly position the tooltip taking into account window dimensions and cursor (r6405)
- Codechange: Speed up the animated cursors a bit so they move once in a while at least (r6367)
- Codechange: Remove the 'unsorted' vehicle sorter, because it is plain useless (r6270)
- Codechange: Remove MSVC6 support. The compiler was too stupid and too many workarounds were needed. Please switch to mingw or VC2005++ express (r5286)
- Codechange: Allow a switch in Makefile.config to disable threads in OpenTTD (r5978)
- Codechange: [Windows] Add native x64 target to VS2005 project files (r5813)
- Codechange: [Windows] The exception dialogue showed the last modification-date of win32.c instead of the last compilation-date (r5801)
- Codechange: Add owner attribute to canals and locks. This makes them more useful in multiplayer games, as only the owner can delete them. Does not affect usage (r5084)
- Codechange: [Windows] Add MSVC2005 support, project and solution files are in the _vs80.* files (r4581)
- Codechange: [OSX] Shark (Xcode's profiling tool) can now relate CPU usage to lines (r3611)
- Codechange: Rewrite the multistop slot assignment system. More resource-friendly, several slot-assignment improvements (r3730, r4259)
- Codechange: Completely remove the deprecated -p parameter (is superseded by -n) (r3508)
- Fix: Town ratings were not reset when a company went bankrupt (r7433)
- Fix: With realistic acceleration, guarantee a minimum braking force is applied. This ensures trains will stop when going down hill (r7425)
- Fix: Changed 'kick off' acceleration resulted in only a small amount of power being applied; this resulted in a perceived delay before trains moved (r7421)
- Fix: Long delay for message windows to appear. Immediately show a new message if present if no news window is open, or has just been closed instead of waiting for the timer of the current news to time out [FS#255] (r7402)
- Fix: Deleting Train in depot with autoreplace fails [FS#418] (r7385)
- Fix: Do not update vehicle images when turning a train around. During this procedure the train is split into parts which can result in incorrect images being used (r7378)
- Fix: OpenTTD could crash under certain circumstances when a vehicle as autoreplaced and a news window was open [FS#332] (r7368)
- Fix: Segmentation fault in the SDL video driver when one goes to fullscreen and there are no suitable resolutions (r7332)
- Fix: When loading a game from a dedicated server the local player set to 0, theoretically enabling the dedicated server to also play (r7312)
- Fix: TTDPatch vars are little endian (r7282)
- Fix: Always display the excavation of roadworks even when fully zoomed out or 'full details' are off (r7240)
- Fix: Window allocation and deletion messed with the actual window pointer, possibly crashing OpenTTD [FS#350, SF#1560913] (r7205)
- Fix: Callback not executed for non-player based patch changes in multiplayer for all clients; possible desync issue (r7190)
- Fix: Station sign (and base station coordinates) did not move along with station when station moved by walking [FS#388] (r7169)
- Fix: MiniMap was misplacing vehicles sometimes [FS#402] (r7166)
- Fix: Some mouse events possibly lost under high CPU load, handle mouse input right away instead of waiting for GameLoop [FS#221, SF1168820] (r7157)
- Fix: Some keyboard events possibly lost under high CPU load, handle keyboard input in place instead of global variables magic [FS#279] (r7153)
- Fix: 'Position of Main Toolbar' option is not honoured when starting new game or loading saved [FS#172] (r7130)
- Fix: Synchronise the engine-renew settings of a player when joining a multiplayer game (r7126)
- Fix: Several errors/glitches related to multiplayer and bankruptcy (mainly server), and non-updated company-information (r7125)
- Fix: Cloning a vehicle that has been refitted would incur the expense as running costs, not new vehicles [FS#371] (r7115)
- Fix: Do not let ships enter partial water tiles under bridges; they will travel up land... (r7110)
- Fix: AI tried to build road from the back or side of road stop/depot (r7069)
- Fix: Zooming out near map-borders would previously fail because the new centre would be outside the map [FS#317] (r7047)
- Fix: 'Goto' button in orders window got depressed along with all other buttons when an existing order was modified [FS#311] (r7046)
- Fix: Scenario bridges/tunnels cannot be demolished [FS#200] (r7028)
- Fix: Pressing F1 in scenario editor did not work (r7023)
- Fix: Properly guard against viewing company-sensitive information from invalid players (eg spectators) which could lead to crashes [FS#292] (r7022)
- Fix: In the replace vehicle window, the left vehicle list was not drawn when an engine was not selected (r7009)
- Fix: Crash at game end when server company is bankrupt [FS#369] (r7008)
- Fix: List of actions panel in the town authority window went underneath its scrollbar (r6885)
- Fix: Pressing ^D (EOF) at a dedicated console caused it to repeat the last command, instead of doing nothing (r6835)
- Fix: Do not add up running cost of articulated engine parts (r6765)
- Fix: If a rail is not available, do not show toolbar even with hotkey 'A' (r6740)
- Fix: Only apply the virtual transfer profit if the order is a transfer order, rather than to any unload order (r6738)
- Fix: Disable main toolbar buttons showing company list drop downs when there are no companies [FS#356] (r6695)
- Fix: Autoreplace can now use the money for selling the old vehicle to build the new one (r6640)
- Fix: A loop-hole that allowed docks to be built regardless of town authority rating (r6477)
- Fix: [Windows] The dedicated server could overwrite the keyboard input buffer before it was handled by OpenTTD (r6449)
- Fix: Reset the location of the last sound as that location can be outside the map when you are loading another, (smaller) map (r6437)
- Fix: Show an error message when executing 'scrollto x' with x < 0 or >= MapSize() instead of asserting later on [FS#340] (r6435)
- Fix: Station catchment area persists after switching tools [FS#136] (r6368)
- Fix: Do not reset the current cursor action when centring on a depot/hangar (r6360)
- Fix: Go to hangar orders for aircraft could get spuriously removed when a road or rail depot got deleted (r6355)
- Fix: Due to some off-by-one errors the width or height of a clipping rectangle could become 0, which is not sensible. This should fix a very rare and hard to trigger assertion in GfxFillRect() (r6351)
- Fix: Never allow scrolling the map in the main menu (scroll-settings were not reset if switched to mainmenu) (r6037)
- Fix: Never set I-am-a-thread bool to true IN the thread, dual-core machines could flip [FS#78] (r5977)
- Fix: Town-growth removed houses under construction to make way for road; unwanted behaviour [FS#49] (r5970)
- Fix: Cloned toad vehicles are not refitted to correct cargo [FS#275] (r5917)
- Fix: Bugfix for errors in FindNearestHangar function in aircraft_cmd.c [FS#235] (r5914)
- Fix: Sort order for produced amount and transported percentage was reversed in the industry list (r5912)
- Fix: Changing patch settings through the console did not accept on/off or true/false [FS#170] (r5903)
- Fix: Differing price calculation for tunnels depending on starting point [FS#253] (r5901)
- Fix: Goto sepot not always working for road vehicles [FS#249] (r5898)
- Fix: Bus trying to service in depot of other company [SF1519167] (r5897)
- Fix: If vehicles break down and service is turned off, the vehicles failed to enter any depots; now they will quickly go to a depot if set to be replaced (r5888)
- Fix: Incomplete removal of player owned property due to lack of money [FS#273] (r5886)
- Fix: < > boxes in patch-settings did not grey out when they hit the limit of their range (r5714)
- Fix: Check the configuration file for valid values and clamp them to their ingame minimum/maximum [SF1288024] (r3726)
- Fix: Remove the restriction that the 'patch' console command can only be run from network games [SF1366446] (r3723)


## 0.4.x

### 0.4.8 (2006-08-12)

- Fix: A ship in a depot must be stopped before it can be cloned
- Fix: After changing directory in 'Play Scenario', the default scenarios did not show up in 'New Game'


### 0.4.8-RC2 (2006-07-31)

- Feature: Add Italian town names as we have an official Italian translation
- Codechange: Verify the presence of music files in the gm/ folder. This should also solve some 100% CPU buildup for some users
- Fix: Certain combinations of trains crash when moved around inside the depot
- Fix: Reversed arrow-sign in the multiplayer list column headers on sort by name
- Fix: Industry production change button does not work for oilrig passengers
- Fix: Helicopters stopping in depot after autorenew/autoreplace
- Fix: MorphOS crashes when you go a level up in the root level
- Fix: UDP sockets were used even if network-availability was set to false
- Fix: Crash when trying to build a vehicle type that is set to a max of zero


### 0.4.8-RC1 (2006-06-28)

- Feature: Add Turkish town names as we have an official Turkish translation
- Feature: Add a fully optional configure script that is a wrapper around the cumbersome makefile.config
- Codechange: [NPF] Disable NPF totally for ships as it wholly kills performance. Only for 0.4/ branch and 0.4.8
- Fix: Redraw the screen when switching the signal side in the patches window
- Fix: It was possible to dig into a tunnel if certain rail combinations were on top of it
- Fix: A HQ could only be flooded at its northern tile, the other 3 were immune to water
- Fix: Fix several glitches concerning foundations. Houses, property (rail/road/bridge/etc.) and cursor are now aligned properly
- Fix: Prohibit altering a road tile while road works are in progress. This fixes some glitches like 'turning' the excavation by adding/removing road bits or removing the road piece
- Fix: Only advertise the server to your external IP/network (eg not to 127.0.0.1) and use proper broadcast addresses
- Fix: '-f' switch is not valid on windows, so do not show it in help
- Fix: [Autoreplace] Autoreplaced trains can leave all wagons in depot under certain circumstances
- Fix: The wrong IP could get unbanned, e.g. 'unban 1.2.3.42' could result in unbanning 1.2.3.4
- Fix: It was possible to convert the railtype of a bridge while a train was on it
- Fix: It was possible to rename signs or waypoints with the chat box
- Fix: Be more strict what it means for an aircraft to be in a hangar: It is not just being stopped on a hangar tile
- Fix: If a road vehicle is on a road depot tile and stopped does not mean it is in the depot. Use the proper test for this
- Fix: [AI] The AI should send a plane into a hangar if it is not in a hangar _or_ not stopped, not when it is not in a hangar _and_ not stopped
- Fix: [AI] The trolly AI used information from the wrong industry when calculating the amount of to be transported goods
- Fix: [NTP] Fix NTP over bridges: do not check the rail type when on a bridge
- Fix: Truncate text in dropdown lists to stop text overflowing
- Fix: 'Erroneous train reversal on waypoints'. When processing the next train order, do not even consider reversing the train if the last order was to a waypoint
- Fix: Starting a new scenario did not adhere to local difficulty settings but took it from the scenario itself. That mode is for 'play scenario'
- Fix: Vehicles on a sloped tile under a bridge were affected by the bridge speed limit
- Fix: Issue with train pathfinding over level crossings
- Fix: [AI] The AI no longer attempts to build signals under bridges
- Fix: Refresh build vehicle window (if opened) when converting rail depot
- Fix: Crash when sorting an empty server list
- Fix: The build-tree window button defaulted to a place-push-button on opening where no treetype is selected
- Fix: Game crashes when cloning/autoreplace reaches train-limit
- Fix: [NTP] Properly check for railtypes on non-plain-rail-tiles
- Fix: Trains could enter certain sloped rail tiles under bridges with incompatible rail type
- Fix: Ensure the map memory is cleared after it is allocated. This fixes random deserts that sometimes occurred
- Fix: Some weird behaviour with tile selection near bridges
- Fix: Do not allow PF to enter train depot from the back (signal updates)
- Fix: Game no longer crashes when the last vehicle servicing a station has been deleted
- Fix: Reset the last built railtype when starting a new game
- Fix: Cloned vehicles get the same service interval as the original vehicle
- Fix: Game no longer errors out when 'Many random towns' is selected in the scenario editor
- Fix: Obscure road dragging bug. The road build command did not return the appropriate error message of invalid-slope when building road
- Fix: Temperate bank will no longer appear (during game) in tropic landscape. This bug is from the original game
- Fix: Specify the 'stopall' console command as a debug command
- Fix: Fixed a problem that caused DeliverGoodsToIndustry to not work as intended
- Fix: Ships and aircraft can now be used as feeders as well
- Fix: When a multiheaded train is sold the pointers were not updated correctly causing sporadic crashes/disconnects
- Fix: New plantations now cause the correct '.. being planted ..' news item
- Fix: Danish town names were saved/loaded as Swiss
- Fix: Removing roads on crossings was done without a check for ownership
- Fix: [Autoreplace] Fix drawing of train list for outdated engines
- Fix: Malicious clients/servers could crash the game [CVE-2006-1999, CVE-2006-1998]
- Fix: [Autoreplace] Allow replacement of wagons even when the engine fails to be replaced
- Fix: Certain operations involving trains inside a depot could cause a crash
- Fix: [Autoreplace] Cost for refitting a new vehicle is added to the cost animation (player always paid for it, it just was not shown)
- Fix: [OSX] Save/Load issues solved for OSX 10.3.9 universal binaries
- Fix: Illegal servers in the master-server list could kick the client back to the main menu, effectively making Multiplayer impossible
- Fix: [NPF] Do not mark tiles when debugging in multiplayer, this will cause desyncs
- Fix: Several fixes to chatbox code, mainly plug a buffer overflow


### 0.4.7 (2006-03-26)

- Feature: [OSX] Add support for triple-binaries (PPC, PPC970, i386) (r4102)
- Fix: [OSX] Crash when going to fullscreen (r4100)
- Fix: Allow unused wagons to have their first cache set. Fixes faulty cache-warning message and noticeably speeds up depot operations (r4094)
- Fix: [NPF] Trains & buses were unable to find a route when leaving a depot or bus stop (r4072)


### 0.4.6 (2006-03-22)


- Codechange: [Windows] Show the revision in crash.txt and enable the button to show the crash text in the crash-window (r3965)
- Codechange: Add additional linker information to release builds to help figure out crashes more easily (r3526)
- Fix: [OSX] Cannot save game if name contains german umlauts (loading savegames with certain chars still look odd) [SF#1157244] (r4038)
- Fix: [OSX] Major speedup for PPC fullscreen (r4034)
- Fix: [Makefile] Make sure the ICON_DIR gets created before copying files there (r4032)
- Fix: [Windows] Change compiler settings to use the multithreaded CRT. This prevents certain crashes on multi-threaded machines (r4031)
- Fix: [NPF] Road vehicles planning through the back of depots and stations [SF#1453646] (r4029)
- Fix: Use the title of a savegame in the saveload dialogue-editbox (r4018)
- Fix: Improper resolution written to the configuration file when exiting from fullscreen (r4017)
- Fix: When removing rail track from a tile where only X and Y pieces exist, explicitly update signals in both directions (r4016)
- Fix: Default the patch-setting 'pause_on_join' to true (r4015)
- Fix: Slope and height information returned for some tile types is wrong (r4014)
- Fix: Fixes a bug introduced by r3228 which allowed steep rail tiles resulting in ... unwanted effects such as display artifacts (r4012)
- Fix: Update french translation (r3978)
- Fix: Missing glyph(s) in big-font. Added several missing glyphs for the big font [FS#56] (r3970)
- Fix: Increase client list window width so at least most languages fit [SF#1439907] (r3969)
- Fix: Update german and finnish languages (r3968)
- Fix: Properly set back the owner of a crossing/road-under bridge after removing it (r3967)
- Fix: [Autoreplace] Autoreplacing trains now keep their tile length instead of their pixel length [FS#67] (r3964)
- Fix: Mark the right tile as dirty. It is just a graphical glitch which happened in r1592 (r3962)
- Fix: Fix crash when resizing news history window (r3961)
- Fix: Correctly implement minimum search, so road vehicles head towards the closest station, not the last one in the list (r3960)
- Fix: The tooltips for raising and lowering land buttons in the scenario editor are interchanged [FS#61] (r3959)
- Fix: Correctly restore the roadside after roadworks are finished (r3957)
- Fix: [Multistop] Check the status of the destination road stop instead of a station's first road stop. This only has effect with road vehicle queueing disabled (r3956)
- Fix: Validate the setting of max_companies/spectators through the console (r3955)
- Fix: Improve game-load times (r3954)
- Fix: On loading a game, GetPlayerRailtypes() did not account for the fact that vehicles are introduced a year after their introduction date. This will also relieve possible (rare) network desyncs (r3952)
- Fix: Restore plural forms of cargo types for several languages (r3951)
- Fix: [Windows] Add directives to allow Visual Studio 2005 compilation (r3950)
- Fix: Crash in string code with openbsd/zaurus; alignment issues [SF#1415782] (r3948)


### 0.4.5 (2006-01-31)

- Feature: [NewGRF] Implement varaction2 property 0x41 and 0xDA (r2361)
- Feature: Giving server_ip a value of 'all' will make the server listen on any interface (r2374)
- Feature: Shortcut CTRL + U that clears the current input-box (r2385)
- Feature: [NewGRF] Implement the mechanism for handling NewGRF callbacks (r2389)
- Feature: [NewGRF] Implement the 'refit capacity' callback (r2389)
- Feature: Saving games happen in a separate thread (r2391)
- Feature: [NewGRF] Implement powered wagons, and the callback that goes with it (r2414)
- Feature: [NewGRF] Implement shorter train vehicles (r2428)
- Feature: New display option: 'transparent station signs' (r2438)
- Feature: You can now give transfer order to set up feeder systems (r2441)
- Feature: Removing tracks with the 'remove' tool, automatically removes signals on the tracks (r2469)
- Feature: [Localisation] Allow changing the order of parameters in translated strings (r2573)
- Feature: [Localisation] New way to specify plural forms (r2592)
- Feature: [Localisation] Support genders (r2594)
- Feature: [Localisation] Support cases (r2597)
- Feature: Add support for truncating strings to a given (pixel) length (r2607)
- Feature: Overhaul DirectMusic MIDI backend, remove 'experimental' status (r2712)
- Feature: Change the driver probing algorithm: Use the first music/sound/video which succeeds initialising instead of bailing out after the first. No need to specify -snull if no soundcard is present anymore (r2728)
- Feature: The Main Toolbar Dropdown Menu can now display disabled items (r2734)
- Feature: Clone vehicles (r2764)
- Feature: When starting without a config file determine the language on basis of the current locale (r2777)
- Feature: [NewGRF] Add support for 'extended bytes' (r2872)
- Feature: [Localisation] Major step towards ISO-8859-15: Implement missing characters (r2879)
- Feature: Implement the console command rm to remove savegames (r2941)
- Feature: Danish town names (r2957)
- Feature: Menu option to toggle console (r2958)
- Feature: Calculate proportions of non-square giant screenshot correctly (r2963)
- Feature: [NewGRF] Implement current set of action D (ParamSet) operations (r2968)
- Feature: [NewGRF] Show a wagon's speed limit in purchase list (r2969)
- Feature: [NewGRF] Support loading VarAction2 parameter for variables 0x60-0x7F (r2971)
- Feature: [NewGRF] Add patch option for wagon speed limits (r2982)
- Feature: [NewGRF] Support loading of bridge attributes and tables from GRF (r3004)
- Feature: Native Support for Win64 (r3008)
- Feature: OSX now uses quicktime to play midi files (r3022)
- Feature: [OSX] Command+Q now works in main menu (r3027)
- Feature: Allow unbanning players based on banlist-id (as well as IP) (r3067)
- Feature: 'status' and 'clients' now show the IP of the players (r3067)
- Feature: Make it possible to create a screenshot from the console that is both big and has no console, or any combination of (r3068)
- Feature: [NewGRF] Add support for rail vehicle weight greater than 255 tons (r3071)
- Feature: 'HOME' icon to saveload dialogues that jumps to the default save/load directory based on the dialogue (r3096)
- Feature: Turkish translation (r3120)
- Feature: [NewGRF] Support positioning of rail vehicle visual effects (r3132)
- Feature: [NewGRF] Support for articulated rail vehicles (r3139)
- Feature: [NewGRF] Add support for cargo refitting specification by cargo classes (r3148)
- Feature: [NewGRF] Action 7/9 new value : is it TTDPatch or OpenTTD? (r3152)
- Feature: Drag and drop rocky areas in scenario editor (r3153)
- Feature: Added patch option to link the terraform toolbar to the rail, road, water and airport toolbars (r3157)
- Feature: Right-Click-Scrolling optionally moves in the opposite direction (r3222)
- Feature: Native cocoa sound and video drivers for OSX (r3281)
- Feature: [NewGRF] Allow train running cost class to differ from engine class (r3388)
- Feature: Kick and ban now with IP numbers (r3407)
- Feature: Allow seeing and setting the maximum amount of companies and spectators for a server. This can be changed/viewed during runtime as well in the console (r3427)
- Feature: Allow the network game list to be sorted (by name/clients/compatibility ascending/descending) (r3441)
- Feature: Make it possible to ban offline clients (r3469)
- Fix: The refit window now shows the correct refit options (r2365)
- Fix: Refitting to a cargo which is already carried by some vehicles takes their capacities into account for display (r2365)
- Fix: Add 'multihead' TTDPatch option to OpenTTD NewGRF flags-emulation (r2368)
- Fix: Make install tried to install scenarios in the (non-existing) personal dir when USE_HOMEDIR is specified (r2371)
- Fix: [Console] Update the example scripts in the scripts/ directory to reflect the new console functionality (r2372)
- Fix: [Console] Any line starting with a '#' is a comment so ignore it (r2372)
- Fix: [Console] The special variables whose value can only be set by a custom process should, also print out their newly set value there (r2372)
- Fix: [NewGRF] Ignore action 0 prop 0x20 (air drag) (r2377)
- Fix: [NewGRF] Further property stubs, help prevents subsequent incorrect reading of NewGRF data (r2378)
- Fix: Build year for mail compartment of planes was not set correctly, affected station ratings (r2380)
- Fix: Endgame window on easy difficulty resulted in infinite loop (r2381)
- Fix: Check the airport type when building an airport (r2382)
- Fix: Monkey-testing turned up some command crashes (r2383)
- Fix: Check selling land and setting player colour. Also an extra map-bounds check for terraforming (r2384)
- Fix: [Realistic acceleration] Very slow trains no longer get an increase in maximum speed when part of them is in a depot (r2388)
- Fix: [NewGRF] Load power for dual-headed engines correctly (r2400)
- Fix: [NewGRF] When resolving callbacks, don't ignore wagon overrides (r2410)
- Fix: Station ratings are not affected by speed limits from realistic acceleration anymore (r2411)
- Fix: Building vehicles without depot crashed the game (r2412)
- Fix: Certain resolutions caused a crash when minimap was partly dragged outside the game window (r2424)
- Fix: Deleting canals under bridges removed bridges first in certain configurations (r2436)
- Fix: [NPF] Vehicles try to drive into a tunnel entrance from above (r2471)
- Fix: [NewGRF] Some road vehicle action 0 properties were loaded as the wrong type (int8, int16, int32) causing undefined results, like cargo types being wrong (r2474)
- Fix: The console variable autoclean_unprotected was linked to the variable _network_autoclean_protected (r2498)
- Fix: Old bug in the PCX writer: The first pixel column contained garbage, the picture was shifted one to the right, and the last column was dropped (r2512)
- Fix: Using the mouse wheel could lead to a crash if mouse was not over a widget (r2530)
- Fix: Blinking 'lock' gfx in multiplayer games (r2548)
- Fix: Remove original train pathfinder. Enhanced old pathfinder (r2553)
- Fix: Spaces in the path to the MIDI files caused the Windows MIDI player to fail (r2563)
- Fix: Set server map name to the loaded name of the game/scenario (r2610)
- Fix: Improve the old pathfinder. Changed it to A* instead of Dijkstra. Benchmark shows that NTP is now around 10x faster than NPF (r2635)
- Fix: Correctly save and load company_value, it is 64 bits wide, not 32 bits (r2684)
- Fix: Volume control works now for the DirectMusic MIDI backend (r2712)
- Fix: Change the fence algorithm so it removes fences when no farm tile is adjacent (r2739)
- Fix: Tree tiles above the snow line got redrawn disproportionately often (r2750)
- Fix: Depots could build trains of the wrong track type (r2764)
- Fix: Sort the directories in the scenario/savegame list (r2860)
- Fix: On OS/2 show the trailing \ if the current directory is a root directory (r2860)
- Fix: Return a proper version number, when testing the TTDPatch version in the SkipIf action (r2862)
- Fix: Change the way NewGRFs are loaded, this saves quite some sprite slots - about 2000 for DBSetXL for example (r2868)
- Fix: Several format string vulnerabilities and buffer overflows in the network code [CVE-2005-2764, CVE-2005-2763] (r2899)
- Fix: Fixed issue where autorenewed vehicles did not get all stats updated (r2912)
- Fix: Exit the child of the extmidi backend with _exit() instead of exit(), because we do not want any atexit handlers - especially flushing output streams - to run, if exec() fails (r2938)
- Fix: Server crash with 'say'-command (r2950)
- Fix: Fix Windows midi volume level control which did not work (r2960)
- Fix: [OSX] Quitting the game no longer leaves a process behind that eats all the CPU power (r3281)
- Fix: Fix for UFO-broken waypoint [SF#1216203] (r2961)
- Fix: [NewGRF] Include missing grf feature canal
- Fix: [NewGRF] Add bounds checking to VehicleChangeInfo for vehicles
- Fix: [NewGRF] Wagon speed limits do not apply for wagons with livery overrides
- Fix: Align settings pool items to the size of void* to fix bus errors on 64bit architectures which require aligned variables (r2976)
- Fix: Restart_game_date is an UINT16, not a BYTE. Now setting the game restart year via the console should work (r2987)
- Fix: [NewGRF] Some GRF files do not specify a name or description, in which case the Action 8 is 8 bytes, not 9 (r3005)
- Fix: The finnish markka was never abbreviated with capital letters (r3021)
- Fix: Improve handling of non-existent sprite sets (r3044)
- Fix: Do not attempt to map and empty sprite group to a vehicle (r3045)
- Fix: Fixed typo and hang for BeOS Networking (r3053)
- Fix: On Win98 and lower when you go to the root directory of a drive (eg. C:\) you were stuck there indefinitely and could not change any directories or see any files (r3056)
- Fix: Complete rewrite of autoreplace; multiheaded train engines are replaced correctly (r3081)
- Fix: A new train is now made if the front unit is an engine and the former front engine is moved away (r3144)
- Fix: There are only 2 possible directions for ship depots, not 4 (r3199)
- Fix: Allow bribing up to the maximum rating for bribing, do not disable this option at some arbitrary value early (r3201)
- Fix: Do not lower land on tunnel, even with diag tracks on it (r3228)
- Fix: Crash when making a screenshot in the main menu (r3235)
- Fix: Crash when starting a scenario via 'New Game' fails (r3235)
- Fix: Determine clicked status of sticky icon from window flags rather than the widget click state (r3247)
- Fix: Graphical glitch with autorail tool on a certain tile-types (r3254)
- Fix: Centre the X of the window close button (r3302)
- Fix: [NewGRF] Unload engine names before loading grf files (r3316)
- Fix: Network window crash when it receives invalid information for example from the integrated nightly, so validate the network-input when it is received (r3322)
- Fix: Build failed if SDL is built without pthread support (r3326)
- Fix: Move initialisation of vehicle random_bits to DC_EXEC blocks to allow use of Random() instead of InteractiveRandom(), which will alleviate some possib le network desyncs (r3352)
- Fix: The default AI tried to change the service intervals of vehicles via the CMD_CHANGE_TRAIN_SERVICE_INT command - regardless of the type of the vehicle (r3367)
- Fix: Out-of-bounds array access when road vehicles overtook in a curve caused desyncs (r3371)
- Fix: Update signal states when building or removing rail station blocks (r3372)
- Fix: Do not allow trains to get bigger than 100 via drag and drop (r3374)
- Fix: Do not reset date in the scenario editor when pressing RandomLand (r3376)
- Fix: [NewGRF] Running cost should be halved for dual head vehicles (r3384)
- Fix: No fence was placed when placing fences and the neighbouring tile is a rail configuration which permits a fence but has a signal (r3389)
- Fix: [NewGRF] Ignore non-climate dependent cargo types (r3394)
- Fix: [NewGRF] Only add a random number of days to an engine's base introduction date if that date is not 0 (r3410)
- Fix: When changing the server password via the console, actually set the password as well as flag whether it is required (r3411)
- Fix: Under certain conditions placing a road tile parallel under a bridge would, instead of failing, succeed and place a perpendicular piece (r3413)
- Fix: Disable the Fund New Industry menu item and window when connected to a server as a spectator (r3414)
- Fix: Disable the clone and refit buttons in the train view when viewing another player's vehicles, or as a spectator (r3415)
- Fix: Disallow building an oil rig above sea level (r3416)
- Fix: When removing a town-owned tunnel the player's rating was not reduced (r3418)
- Fix: (Possible) game crash on removing track/road under bridge if a vehicle was on the track/road under the bridge and the track/road sloped (r3419)
- Fix: [NewGRF] Only power should decide whether a rail vehicle is an engine or a wagon (r3424)
- Fix: Incorrect validating of tree-planting command which can allow a buffer-overflow (r3446)
- Fix: [NewGRF] When changing the sprite ID of a vehicle, if it is not FD (custom graphics), the value needs to changed from a 16bit array offset to an array index (r3449)
- Fix: You could not remove an item from a list-type of config ingame from the configuration file (r3475)
- Fix: [NewGRF] Always reinitialise the TTDPatch flags as patch settings may have changed (r3486)
- Fix: Price for demolishing a bridge was dependent on orientation and map size (r3487)


### 0.4.0.1 (2005-05-21)


- Feature: Add 'clear' command and CTRL+L to empty console window
- Feature: Add the possibility to print out the current debug-level
- Fix: [MacOSX] Default path for midi player on mac is now correct again
- Fix: Updated makefile for FreeBSD
- Fix: Text overflows in about box
- Fix: Link error while compiling as dedicated server
- Fix: Do not execute empty commands
- Fix: Make OpenTTD icon look good on Win2K and earlier
- Fix: NetworkUDPRemoveAdvertise was not completely correct
- Fix: Signs in multiplayer did not work
- Fix: Dedicated server desyncs
- Fix: Error: !invalid string id 0 in GetString, dedicated server endgame crash [SF#1197216]
- Fix: Do not allow things to be renamed to nothing
- Fix: Windows installer deletes spritecache files on uninstall
- Fix: Depot window did not get redrawn when a non-train-engine was sold
- Fix: Do not scroll the game with the arrow keys when the chatbox is open
- Fix: Remove warning from release build when assertions are no longer active
- Fix: It was possible to open more than one tree window


### 0.4.0 (2005-05-15)

- Feature: Bigger maps. Enjoy playing up to 2028x2048 (64 times as big as you were used to!)
- Feature: New realistic acceleration; should be much better. Includes bigger penalty on narrow curves and speedlimits in depots/stations
- Feature: It is now possible to build multiple road stations (up to 8) on a single station
- Feature: New PathFinder (NPF). Support for train/road and ship based on A*. No more braindead pathfinding
- Feature: Dynamic towns/industries/stations/vehicles/signs/orders/everything, up to 64K
- Feature: Brand new OldLoader so OpenTTD is TTD(Patch) compatible again. Also endian safe
- Feature: Even better NewGRF support, except for callbacks, everything works (ok, almost)
- Feature: Improved multiplayer. More console options, less desyncs and more fun
- Feature: Protected OpenTTD from interference of hacked clients, so it should be safe to play again
- Feature: Saving vehicle sorting criteria for each vehicle type [SF#1093261]
- Feature: Resizable orders GUI [SF#1107690]
- Feature: Focus keyboard on input-box in Multiplayer Menu [SF#1166978]
- Feature: Terrain hotkeys nonfunctional in scenario editor (D,Q,W,E,R,T,Y,U fltr) [SF#1174313]
- Feature: Complete rework of console and new commands like ls, save, load, help, etc
- Feature: Signs are shown in the colour of the player who created them
- Feature: Add cheat option to set production of raw-material industries in game
- Feature: Replace train GUI remembers railtype selected from the dropdown menu
- Feature: Improved Autoreplace
- Feature: Many more smaller features
- Fix: A wrong error message was displayed when trying to [SF#1108618]
- Fix: Game does not crash any more when a NewGRF file does not exist [SF#1110407]
- Fix: Clearing land for free by reallocating HQ [SF#1112469]
- Fix: Clearing land for free by reallocating HQ [SF#1112469]
- Fix: Crash when accessing hi-scores in editor, it is now disabled [SF#1113037]
- Fix: Game no longer crashes when right-clicking a disabled Full Load button [SF#1113399]
- Fix: Dedicated server boots again [SF#1114100]
- Fix: Game crashed sometimes when there were no industries in the map [SF#1114950]
- Fix: In the main menu, when starting a new game while the load game dialogue is open, openttd asserts [SF#1115200]
- Fix: Non-stop orders are no longer accidentally skipped [SF#1117538]
- Fix: Generate the correct smoke type for diesel trains [SF#1116619]
- Fix: Max passengers/mail variables are now 32 bit [SF#1119308]
- Fix: Better test if a string actually contains any console command [SF#1109400]
- Fix: 'Play scenario' now loads game options and difficulty, 'Load game' starts game with user-selected values [SF#1108637]
- Fix: Carriages of NewGRFs can be refitted again [SF#1143587]
- Fix: Production values of temperate-climate banks can now be altered [SF#1117730]
- Fix: Mapwrap fixed in ship_cmd.c (was implicitly ok before biggermaps) [SF#1118810]
- Fix: Assertion error on kick. When a company is cleaned all its windows need to be closed. For global vehicle lists, the no-station index of -1 was not taken into account [SF#1117327]
- Fix: Speeding up when pressing ALT+TAB (Windows) [SF#1114261]
- Fix: Signals disappear after typing text and pressing enter!. Signs in Scenario Editor have no owner so ignore that [SF#1149403]
- Fix: Single tile Bridge in Volcano City scenario. Some bridges still had the old single-tile bridge bug that was caused by improper town growth in combination with DC_AUTO. Fixed the scenario [SF#1149766]
- Fix: Stop startup memory corruption crash using optimised MSVC6. MSVC6 workaround as it is too stupid again for its own good [SF#1119147]
- Fix: Dedicated server now accepts '-g' (load game) as param [SF#1101874]
- Fix: Crash with German umlauts in station names [SF#1155696]
- Fix: Segmentation fault when loading savegame, out of bounds array check [SF#1158618]
- Fix: Autosave ignoring settings [SF#1149487]
- Fix: [Windows] Infinite access for A:\. Only requery drive(s) if the user changes a directory, also suppress the OS error box that pops up on some windows machines [SF#1024703]
- Fix: Create Lake and draggable Create Desert tools [SF#1095110]
- Fix: Trains 'Go to depot' button: click twice skip to next order [SF#1172878]
- Fix: Engine power not updated w/auto replace' autoreplace now forces an update of the cache [SF#1146215]
- Fix: [Windows] Path displaying as 'C:\\' [SF#1173690]
- Fix: Click & drag removal of road assertion fail [SF#1179892]
- Fix: Max loan always in euros, use _opt_ptr instead of _opt [SF#1174237]
- Fix: AI orders its vehicles to a competitor's truck stop [SF#1184201]
- Fix: Song in main menu screen should loop when it ends [SF#1188986]
- Fix: Non-existing sprite #5125 (presignal). The DOS grf file trgi.grf has 6 less sprites than the windows one [SF#1188777]
- Fix: Changing mapsize crashes game with highlighting [SF#1190625]
- Fix: [NPF] Trains ignoring their railtype (mono, maglev) [SF#1190896, SF#1184378]
- Fix: Clicking ship list on buoy asserts GetPlayer() [SF#1202115]
- Fix: No HQ present for competitor, disable 'View HQ' button [SF#1187613]
- Fix: Pre-signal stays red when there is only a single exit signal [SF#1193048]
- Fix: Train in tunnel is not properly detected by signal code [SF#1185176]
- Fix: [NewGRF] Rotors of custom helicopters are displayed correctly in the hangar window
- Fix: Scenario Editor now handles human-made roads better (try to build a city layout before placing the city, finally that works very nice)
- Fix: [NewGRF] Helicopters are correctly recognised
- Fix: [Autoreplace] Made sure that planes only show planes in replace GUI and helicopters only show helicopters
- Fix: Crash when generating tropical maps
- Fix: [Autoreplace] Cheaters can no longer exploit autoreplace to get vehicles, that is not invented yet
- Fix: [Autoreplace] Fixed a stupid bug introduced in r1687, that made a crash if anybody tried to autoreplace anything but an aircraft
- Fix: Expand rail stations beyond maximum spread
- Fix: [Autoreplace] Fixed a typo that could prevent autoreplaced aircraft from automatically go to a hangar
- Fix: Hacked clients can no longer be used to build vehicles that are not available yet
- Fix: Minimum profit of vehicles was calculated wrong for Performance Rating
- Fix: No longer a station where you only unload is bad for your town-rating
- Fix: Crash in scenario-editor with terraforming out-of-map bounds
- Fix: Game would crash if you full-screened with the 'fullscreen' button than chose a resolution from the dropdown box that was no longer valid
- Fix: Scrolling with the arrow keys is now smooth and it now also scrolls exactly in tile direction if e.g. up and left are pressed


## 0.3.x

### 0.3.6 (2005-01-24)

- Feature: Resizeable windows. All useful windows are already made resizeable
- Feature: Highscore chart (accessible from the difficulty window) with top 5 companies for a given difficulty (select the difficulty in the menu)
- Feature: Endgame score on 1 Jan 2051 where you are added to the highscore if sufficiently large points have been accumulated. Game is paused while
- Feature: Visually enhanced autorail placing
- Feature: Autoreplace Vehicles (accessible from the vehicle lists)
- Feature: A counter to tell how many engines you have of each type to the autoreplace vehicle windows
- Feature: A display for the total map population to the town display
- Feature: [Network] RCon (Remote console)
- Feature: Hotkeys for dock and airport toolbar (see http://wiki.openttd.org/index.php/Hotkeys)
- Feature: [Network] Banning system (mostly tnx to guru3) A server can ban people via ClientList using 'ban', 'unban', 'banlist'
- Feature: [Network] Server can now pause and unpause a game through the console. Use 'pause' and 'unpause'
- Feature: [OS/2] OS/2 support is now finished (Fixes for networking, file selection, keyboard input, plus many other minor issues)
- Feature: [SDL] Show revision number in window title
- Feature: [Unix] Check which gcc version is present and only set available compiler flags
- Feature: [Windows] CTRL+V (Paste) now works on all editboxes. This includes 'Add Server', chat, etc
- Feature: [Windows] Dedicated server is now functioning correctly
- Feature: Added keyboard shortcuts for the order window
- Feature: Aircraft refit options have been restricted to 'sane' values
- Feature: Allows setting the production values of the raw material producing industries in the editor
- Feature: Console support for loading maps. Use 'load', 'list_files' and 'goto_dir' to navigate and load games
- Feature: Display server port in the multiplayer game info window
- Feature: Dynamite in landscaping toolbar (hotkey 'D')
- Feature: Improved Network Lobby GUI with a green dot if company income is positive (else red dot) and lock icon if company is password protected
- Feature: Make OpenTTD compile on Zeta
- Feature: MD5 hash check for TTD files
- Feature: New companies receive a 5-year protection period against buying-up
- Feature: Norwegian townnames
- Feature: Order Checking is only execute for ONE vehicle in an order-share system
- Feature: Passengers aircraft now ignore the amount of mail for 'full load any' options
- Feature: Place multiple accepting industries nearby in the editor mode if the appropriate patches are set
- Feature: Population in label of the town (patch setting)
- Feature: Scrolling credits list (in alphabetical order)
- Feature: Train window now shows the number of vehicles per row
- Feature: Swiss town-names [SF#1039061]
- Feature: Adding 16:10 resolutions for mainly laptops [SF#1090950]
- Feature: (dis)Allow Shares. Add patch options to allow buying/selling of shares [SF#1098254]
- Add: A brand new set of icons
- Change: AutoRenew is now a client-side patch instead of a game-side patch
- Change: Removed the 'close ALL windows' from the toolbar since shift+del does this
- Fix: Catchment area shows when buying sign [SF#1031451]
- Fix: Flood and wagons in depot [SF#1040119]
- Fix: Buying trains sometimes accounted for incorrectly [SF#1050990]
- Fix: Delayed news messages [SF#1084074]
- Fix: Slopes under high bridges were not flooded [SF#1090495]
- Fix: In scenario editor, when trees are placed randomly, they are no longer placed on farmland [SF#1092473]
- Fix: On create, the scrollbar of the server-list was not updated [SF#1092661]
- Fix: Placing rocks in scenario editor. You can place rocks on trees and vice versa [SF#1092707]
- Fix: Drive side in new games. Setting the driver side is possible during the game until someone buys road vehicles. In networked games only the server can change it [SF#1093200]
- Fix: No more glitches with many maps in the scenario list when creating server [SF#1093466]
- Fix: Disappearing rocks in Scenario Editor [SF#1093485]
- Fix: Toolbars accessible via keyboard in spectator mode [SF#1094092]
- Fix: When all stations in an aircraft's order list are demolished, the plane eventually crashes (running out of fuel) [SF#1095020]
- Fix: Servers list now also saves the port [SF#1095143]
- Fix: Crash when all vehicles from a vehicles per station list had been removed [SF#1098553]
- Fix: Starting year patch goes out of range. Clamped year between 1920-2090 [SF#1099101]
- Fix: Bug Fix - Vehicle Lists not updated at Acquisition [SF#1099225]
- Fix: Game crashes after the click on Rename (see also Bug 10992). There was no check for non-selected engine [SF#1099451]
- Fix: Wrong tooltip for place desert button [SF#1100736]
- Fix: Fast forward in main menu [SF#1100767]
- Fix: Crash if generating land while industry window is open. This also happened for towns and the land information window [SF#1101179]
- Fix: Configure Patches window text overflow [SF#1101906]
- Fix: Console in dedicated server [SF#1101963]
- Fix: Game crashed when clicking 'new face' or 'company colour' twice [SF#1102275]
- Fix: Vehicle lists are now redrawn when a vehicle arrives in a depot. Station-specific vehicle lists are now redrawn daily as well (not only the master list) [SF#1099535, SF#1102776]
- Fix: Font size changing. Dedicated server did not have code filtering, 'tab' could result in bigger fonts [SF#1103113]
- Fix: Order Check messages are now validated before displayed [SF#1103187]
- Fix: Rail road tracks on slopes were not flooded [SF#1103301]
- Fix: Crashed trains do not initiate the lost vehicle message anymore [SF#1104350]
- Fix: On horizontal/vertical tracks you are also charged for building/removing signals on the parallel track on the same tile [SF#110452]
- Fix: Aircraft in hangar messages are now revalidated before display [SF#1104969]
- Fix: Destroyed train locks crossings [SF#1105112]
- Fix: Upgrade rail fails when train under bridge [SF#1105281]
- Fix: Trains do not think they are on a slope any more while they drive around in a tunnel [SF#1105959]
- Fix: Buoys can now only be removed if no ship has it in their schedule. This makes buoys more usable in multiplayer games again, as buoys cannot be deleted by other players if they are used [SF#1105963]
- Fix: Graph's keys get confused [SF#1106354]
- Fix: Placing signals with 2x1 drags is treated as placing a single signal [SF#1106930]
- Fix: Console ignoring return character occasionally [SF#1107350]
- Fix: Scenario creation bug; engines are of correct year when scenario is saved [SF#1108008]
- Fix: Little red box in scenario editor [SF#1092474]
- Fix: Scrolling through console sometimes crashed the whole game [SF#1099197]
- Fix: Catchment area with drag&drop stations [SF#1099209]
- Fix: [Network] 'kick 1' did crash dedicated servers
- Fix: [Network] A server no longer crashes when a client sends an invalid DoCommand, but drops the client instead
- Fix: [Network] Added packet protection. No longer a client or server
- Fix: [Network] Bug in bind system. Advertising failed on systems with more than 1 ip, and server_bind active to one of them
- Fix: [Network] Disabled 'money-cheat' (read: bug which could give people a lot of money)
- Fix: [SDL] Now the binary never links to SDL if DEDICATED is set
- Fix: [Windows] Somehow mousewheel was disabled on windows using SDL; re-enabled again
- Fix: A modified client could try to replace a vehicle to an invalid engine ID and crash the server
- Fix: Autoreplace vehicle lists are now redrawn when a new vehicle becomes available
- Fix: Buy Vehicle GUI now shows HPs bigger than 32000 correctly
- Fix: Console alias, load_game functionality and load fix
- Fix: Correct error message for when trying to build a rail station over a bus/truck/etc-station
- Fix: Correct landscaping buttons in monorail and maglev toolbars
- Fix: Dedicated server also writes to log file if active
- Fix: Desert-landscape does no longer crash
- Fix: Expand town is a bit more aggressive
- Fix: Finally zooming in/out always works
- Fix: Fixed chat-bug (that from a certain moment, nobody could talk)
- Fix: Fixed weight for double-head trains and with that the acceleration (now maglev lvl4 can reach their top speed, and are faster than lvl3)
- Fix: Full-Loading trains no longer get 'lost' after a while
- Fix: Graphs were not updated correctly when one graph with a certain selection was already open and another graph window was opened
- Fix: In multiplayer clientlist can only be opened once
- Fix: Loan does not count against the company value
- Fix: Nasty bug where one could build one station OVER the other
- Fix: No crash when creating a game with New English town names any more
- Fix: Now helicopters will use a hangar in schedule to be replaced in, even if they are only set to service there. Since helicopters are serviced at helipads, they will only go there if they needs to be replaced or renewed. They will also use a hangar in an airport in the schedule if needed
- Fix: Only a server can rename a town in a MP game
- Fix: Really old maps do load again
- Fix: Refit engine button is now disabled when cargo capacity equals zero
- Fix: Server issue where some company names were wrong
- Fix: Ship Vehicle Lists are now redrawn correctly
- Fix: Signal stays red if a track is removed
- Fix: Solve AI related order-problem
- Fix: Starting openttd with -g <invalid_name> now acts normal
- Fix: The cost for an autorenew was not always send to the right player ;)
- Fix: Autorenewing multiheaded train engines now costs the correct amount. Used to be twice the correct price
- Fix: The scrollbar in the network gui (server list) now updates when scrolling
- Fix: Train crashes should no longer desync the game
- Fix: When deleting an order, the next pointer was not cleared, resulting in some unusual behaviour from time to time
- Fix: You can now also delete automatically found servers by pressing 'del'
- Fix: You should no longer be able to delete bridges on any type of underground when there is a vehicle on it


### 0.3.5 (2004-12-24)

- Feature: [Network] New network, very stable, a lot of new features
- Feature: [Network] Ingame Serverlist (with online game-servers to join)
- Feature: [Network] Webbased Serverlist: http://servers.openttd.org/
- Feature: [Network] Added dedicated server support
- Feature: [Network] Cheat protection in MultiPlayer
- Feature: [Network] Patch settings are also synced with the server
- Feature: [Network] Chat
- Feature: Custom currency settings
- Feature: Per-station vehicle lists
- Feature: More realistically sized catchment areas
- Feature: Sticky windows
- Feature: Even better support for NewGRF-files
- Feature: Implement improved vehicle loading algorithm
- Feature: Even more advanced console
- Feature: Game compiles under BEOS_SERVER
- Feature: Game compiles under OS/2 (no network-support)
- Feature: OpenTTD runs with the grf files of the DOS version
- Feature: [Big Endian computers, which are mac and MorphOS] Load savegames by TTD(Patch)
- Add: 'l' opens the landscaping toolbar globally
- Add: Make the town sometimes build streets on slopes
- Add: Manpage
- Add: New checkpoint graphics
- Add: SHIFT+DEL now deletes all non-vital windows (only status bar and main bar remain)
- Add: Windows now shows revision, release information in title bar
- Add: Windows snap at each other
- Add: Spanish, Catalan and Icelandic
- Change: [OSX] Moved data and lang folders inside OpenTTD. This got rid of the package system too, making installing/updating easier
- Fix: [OSX] Music is now on by default again
- Fix: [OSX] Made error opens the console
- Fix: [SDL] Added a confirmation dialogue when quitting the game
- Fix: A train can leave and enter the same depot at the same time, then the train simply got stuck
- Fix: Crash when making png screenshot with odd resolution
- Fix: Directories in *nix are now sorted alphabetically in ascending order
- Fix: Do not consider a road station as street when growing the town
- Fix: Engines from other climates do not appear any more when never_expire_vehicles is enabled
- Fix: Game options (like drive side) are not taken from the scenario when using 'new game' command
- Fix: Order checker now correctly detects station with invalid facilities
- Fix: Polished GUI in a lot of ways
- Fix: Saving or loading a map doesn't pauses the game anymore
- Fix: Some bridge part is not displayed transparent in transparent mode
- Fix: Starting with -r option allows all resolutions
- Fix: The pathfinder no longer sees rail with another owner as a possible route
- Fix: Unable to select other screenshot format in Game Option
- Fix: Unwanted town renaming
- Fix: Vehicles slow down under bridge if the track is on a foundation
- Fix: You can no longer change name of waypoints whom are owned by somebody else
- Fix: Shares are now also sold when a company goes bankrupt [SF#1090313]
- Fix: It is no longer possible to crash trains of other companies by building a depot close to a station; trains do no longer enter tiles that do not belong to their owner [SF#1087701]
- Fix: Crashed trains are not reported to have too few orders any more [SF#1087403]
- Fix: Backup-order-list was not closed with an OT_NOTHING, [SF#1086375]
- Fix: Docks now have a button to display the catchment area [SF#1085255]
- Fix: Invisible trains. Weird macros and MSVC optimising do not always mix [SF#1070274]
- Fix: Number of passengers and mail in exclusive test offer window is swapped [SF#1068269]
- Fix: Pause key pauses the game [SF#1066504]
- Fix: Resetting file name after deleting a file [SF#1066121]
- Fix: Code error in win32.c Thanks Shai [SF#1066114]
- Fix: Windows can be placed behind toolbar [SF#1065247]
- Fix: Editor Map-Menu wrong String [SF#1064742]
- Fix: Always report a bus/lorry station as impassable [SF#1058809]
- Fix: Refit train window stays open [SF#1053397]
- Fix: Incorrect Tooltip in Road Vehicle List [SF#1050993]
- Fix: Monorail and Maglev sounds are swapped [SF#1048596]
- Fix: Flooded wagons in depots do not keep constantly exploding any more [SF#1040119]
- Fix: Bug about lowering tracks built on slopes [SF#1035303]
- Fix: 'Allow goto depot' turned off, no checkpoints in orders [SF#1035066]
- Fix: Place sign and blue message box [SF#1034318]
- Fix: Wrong mapping between music titles and songs [SF#1033947]
- Fix: Some screen sizes crashes OpenTTD. Fix in general bug that only allows resolutions which were multiple of 8 in width and height. Also use closest possible resolution in fullscreen if window size is not a valid resolution [SF#1030393]
- Fix: 'Service at' orders ignored after 2090. After 2090 year is reset to 1. Jan 2090, so most of the time, last service was in the future and no service ensured [SF#1030275]
- Fix: Building a station acted weird in some rare situations [SF#1029064]
- Fix: Ships could unload cargo at stations without docks [SF#1022227]
- Fix: Wrong trees (toyland's) in sub-tropical landscape style [SF#999669]
- Fix: High bridge rendering error [SF#993500]
- Fix: Disabled buttons flicker no more [SF#991101]
- Fix: Start/stop flag in train depots always works, regardless of the horizontal scroll position [SF#985925]
- Fix: Un-owned rail. Trains could cross competitor's tracks if there was a road-crossing over it [SF#985439]
- Fix: Pathfinding bug; train likes the roundabout. If train needs servicing it will now look 16 tiles along the track instead of 12 tiles Manhattan style [SF#982611]
- Fix: Fullscreen. New button 'Fullscreen' in 'Game Options' menu which lets you set fullscreen ingame [SF#967096]
- Fix: No longer road/rail crossing signals hang when a train is reversed at the wrong moment [SF#958098]
- Fix: Ctrl + d bug. Longest outstanding bug has been fixed [SF#926105]


### 0.3.4 (2004-09-14)

- Add: Dutch translation
- Add: Generalised A* Algorithm
- Add: Generalised queues (Fifo, Stack, InsSort, BinaryHeap)
- Change: Changed 'terraforming' to 'landscaping'
- Change: Changed default options (road side, distance units, currency) to most commonly used options
- Change: Disable 'Submit Report' and 'Show Details' on OpenTTD error window on Windows. Currently of no use, since no developers have assembly knowledge
- Change: Removed patch no_train_service. Instead you can set the default service interval for any vehicle type to 'disabled'
- Codechange: Comments added to the code
- Codechange: Made bridge building code more readable [SF#996244]
- Feature: 'None' as option for number of industries in difficulty settings
- Feature: Add many random industries and towns in scenario editor
- Feature: Added Autosignals, just like Autorail. Can copy signal style, convert signal<->semaphore, etc
- Feature: Added level land button to scenario editor
- Feature: Added never_expire_vehicles to patches GUI
- Feature: Added new icons for landscaping toolbar
- Feature: Added original vehicle names file. Select it from the list. Vehicles will have real name, all other strings are in English
- Feature: Added/heavily modified patch by truesatan cheat change date
- Feature: Align toolbar left/centre/right patch
- Feature: All TTDLX kind of savegames are supported (.SS1, .SV1, .SV2, .SV0, .SS0)
- Feature: Alpha version of a new AI
- Feature: Autodetect server in LAN via udp
- Feature: Build_date of station (viewable with Query tool)
- Feature: Cheat switch climate
- Feature: Company HQ can now be moved somewhere else (cost 1% of company value). Water floods HQ
- Feature: Competitors menu under patches
- Feature: Copy/share orders now works from ship depot window for ships and hangar window for aircraft
- Feature: Difficulty settings window has been changed
- Feature: Enable/disable all buttons in message settings
- Feature: Executable is now openttd(.exe) always
- Feature: General protection around Sprites
- Feature: Ingame console
- Feature: Invalid (void) orders in schedule are highlighted in red
- Feature: Invisible trees when in transparent mode (patch entry)
- Feature: Option to sort vehicles in vehicle-list window by different criteria
- Feature: Performance details window in company league menu
- Feature: Proper crediting to graphics artists to about box
- Feature: Removing town roads has been fine tuned
- Feature: Safeguard against invalid values in Patches window. Values will stick to their defined min and max values
- Feature: Sorting savegames, scenarios by name/date
- Feature: Terraforming toolbar (in the plant tree menu)
- Feature: The extra dynamite patch has been changed a bit
- Feature: Warning when a vehicle has invalid orders
- Feature: Water floods everything, including vehicles
- Feature: Working multiplayer gui
- Feature: No extra frequent jet crash on small airports [SF#976127]
- Feature: Scrollto Station in Orders. CTRL click on orders of a vehicle and main-window scrolls to that station [SF#992998]
- Feature: Improved industry directory [SF#997115]
- Feature: Euro introduction news item [SF#1003350]
- Feature: Percent-based service intervals. Send a vehicle to depot after it has lost X% of its reliability [SF#1009708]
- Feature: Extra Viewport [SF#1009710]
- Feature: Show max loan in finances window [SF#1024044]
- Fix: (Unix) loading old scenarios (.sv0) works again
- Fix: 64bit CPU fixes
- Fix: 64x64 stations are now nicely painted
- Fix: A lot of network fixing
- Fix: A lot of old AI fixed
- Fix: All scenarios, savegames show up with their correct name
- Fix: Automatic oil refinery generation in editor
- Fix: Autosave folder was not created on MorphOS
- Fix: Bridge slope fix again
- Fix: Bulldozing stuff with cheat magic_dynamite turned on does not lower city ratings
- Fix: Change SDL_HWSURFACE back to SDL_SWSURFACE (Diablo-3D); better performance
- Fix: Coast line near edge of map and near oilrigs
- Fix: Company-value was not updated immediately if legend was changed
- Fix: Delete canal under bridge was not possible
- Fix: Disable Fast Forward in network games visually (did not work anyways, just showed graphical output)
- Fix: Error message for 'game load failed' when no town is in a scenario
- Fix: Game not pausing when saveload dialogue is clicked in main menu
- Fix: Load Scenario fix
- Fix: Make Endianness check 100% accurate
- Fix: Memory leak in news system
- Fix: Monorail/maglev became available around 1927
- Fix: Move around sort-widgets a bit so it looks more natural
- Fix: Music now finally works on WinXP. DirectMusic is now default for an OS >= WinNT4 (WinNT4, Win2k, WinXP), and MIDI driver for lower OS's (Win95, Win98, WinME, etc)
- Fix: Old scenarios have correct colour
- Fix: Placing/editing signs signs is possible in paused mode
- Fix: Player window fixes, Getstring id0 fixes, Finances window is now ok
- Fix: Playing new game with scenarios in windows works
- Fix: Possible to disable some patches (e.g. default service interval) again by setting them to 0
- Fix: Problems around exclusive transport rights
- Fix: Rail road crossings on slopes are now possible
- Fix: Random crash when player-face was displayed in error-dialogue
- Fix: Rare mousewheel scrolling with scrollbar crash
- Fix: Road vehicles do not get stuck any more at stations
- Fix: Savegames are sorted with newest date first by default
- Fix: Scenario editor now asks before it generates a random landscape
- Fix: Slopes graphics fix
- Fix: Small gap between station button and signal button in rail toolbar
- Fix: Some minor fixes around GetTileTrackStatus
- Fix: Sorter icon pointing down 'v' sorts in every window lowest value first, '^' highest value first
- Fix: Starting a new game in DesertLandscape crashed the game
- Fix: Stupid bug in company league window if non-player is first
- Fix: Two non-AI players when loading a scenario
- Fix: Unix uses same sorting of directories, files as windows
- Fix: When adding parts to a station max size is not 15x15 anymore, but _patches.station_spread
- Fix: Win98 crashes related to music/sound
- Fix: Wrong building of road-slopes for a future AI/Town
- Fix: Wrong pathfinding when northern station tile is missing
- Fix: You cannot take ownership of an oilrig by building right next to it
- Fix: [Makefile] Fixed issue where sdl-config was needed even on systems without SDL
- Fix: [SDL] Performance fix for palette animation and mouse jumping
- Fix: [SDL] Same resolution was displayed more than once in game options
- Fix: [SDL] Smoother mouse and performance fix, like in the Windows video driver
- Fix: Wrong trains you can buy with scenarios [SF#963056]
- Fix: Minimap crash [SF#972087]
- Fix: Bug in 'weird non-uniform stations handling' [SF#972247]
- Fix: Parent_list was too small [SF#976583]
- Fix: Memory leak in parent_list [SF#981934]
- Fix: Max_loan in editor bug [SF#982666]
- Fix: Bridge building over boats [SF#987888]
- Fix: Cargo delivery area patch for bug [SF#990770, SF#989322]
- Fix: No tunnel crash [SF#992726]
- Fix: Light House Placement Bug [SF#993339]
- Fix: Pressing alt locks the game - sort of a bug [SF#993374]
- Fix: Buildings on water [SF#993493]
- Fix: No canal building under bridge [SF#993512]
- Fix: UDP Fixes [SF#993829]
- Fix: Train drivers dies two times [SF#994067]
- Fix: Road depot - bus/lorry station [SF#994720]
- Fix: _local_player fixes. Fixes wrong memory access [SF#996025]
- Fix: Bridge Bug fixed bug fixed again [SF#996065]
- Fix: Weird two tile bridges on slopes [SF#996065]
- Fix: Empty strings in signs [SF#997303]
- Fix: Junction after tunnel bug [SF#997703]
- Fix: 'autosave' directory creation (MorphOS/AmigaOS) [SF#999592]
- Fix: I lost all wagons. Half-assed fix for lost wagons. But now users can at least fix this problem. Consolecommand 'resetengines' [SF#1001540]
- Fix: BuildRoadOutsideStation fix [SF#1006530]
- Fix: Autorenew issues [SF#1006715]
- Fix: Copy orders between bus/truck possible [SF#1007272]
- Fix: Scenario editor pause bug [SF#1007630]
- Fix: Signals not updated after ClearTunnel Bug [SF#1008605, SF#985920]
- Fix: Too many save games prevented loading [SF#1009385]
- Fix: Problem with transferred cargo crashes game [SF#1009567]
- Fix: Build in pause is now a cheat instead of a patch [SF#1009621]
- Fix: Wrong multihead selling [SF#1009631]
- Fix: Turning on the magic bulldozer removes oil rigs [SF#1010833]
- Fix: Drunk pilot [SF#1012086]
- Fix: TileAddWrap() gave wrong results [SF#1014278]
- Fix: Cached_sprites does now work again [SF#1016954]
- Fix: Bug when dragging a part of a multiheaded engine to 'sell-whole-train' [SF#1022689]
- Fix: Fix for MouseWheel assert error in non-zoomable viewports. Zooming now will only occur if mousepointer is either in an extra viewport window, or main game-window [SF#1023971]
- Fix: Company value problem (again). Now company value rightly shows the value, including ALL your money [SF#1025836]
- Fix: Company values bigger than int32 were put to negative [SF#1025836]
- Fix: Long bridges had negative value [SF#1025836]
- Fix: Vehicle depots not transparent with transparent buildings [SF#1026271]


### 0.3.3 (2004-07-13)

- Feature: MorphOS/AmigaOS network support
- Feature: Improved German town name generator
- Feature: Transparent station signs
- Feature: Show total cargo per wagon type in train details window
- Feature: Bridges on slopes
- Feature: Added Galician translation
- Feature: Extra dynamite, allow the removal of town-owned roads, bridges, tunnels for a popularity rating penalty
- Feature: Magic bulldozer cheat, that lets you remove industries, unmovables and town-owned buildings, roads and bridges
- Feature: Enabled 'remove' button for stations
- Feature: Cheat GUI (activate with ctrl-alt-c) The game remembers if you have used a cheat
- Feature: Station sort implemented using qsort()
- Feature: Station list shows #of stations owned by player
- Feature: Split canal/lock tool in two tools, one for building canals, one for locks
- Feature: Make the HQ generate passengers and mail
- Feature: Display number of houses in town overview window
- Feature: Land info now shows type of signal
- Feature: Realistic train reversing
- Feature: Added support for 64 bit CPUs
- Feature: Added water quantity level 'very low', which is the default for easy mode now
- Feature: Realistic acceleration turned on, train must first slow down and stop before it can reverse
- Feature: [MorphOS] Various small improvement to make the the game feel more native
- Feature: Alt + f now toggles full screen (alt + enter still works)
- Feature: [OSX] Command + q shows the quit window and command + f or enter toggles full screen (alt and control still works too)
- Feature: Autorenew, autorenews vehicles if enabled
- Feature: (Incomplete) news history window
- Feature: Larger smallmap size
- Feature: Austrian Citynames
- Feature: Repaying most possible debt
- Feature: Added Polish translation
- Feature: Added Danish translation
- Feature: Initial GRF support.You have to enable it in openttd.cfg using [NewGRF] setting
- Feature: Smooth economy changes
- Feature: TTDPatch-style gotodepot. Ship depots and aircraft hangars can be inserted in the schedule as well
- Feature: Ability to add 'service if needed' orders (the 'full load' button changes to 'service' after selecting a depot order)
- Feature: If a vehicle has depot orders in its schedule, automatic servicing is disabled
- Feature: Patch setting so that helicopters get serviced automatically on helipad
- Feature: Centre toolbar on screen
- Feature: Sort savelist by date
- Feature: Allow scrolling in both directions
- Feature: Two new airports (metropolitan in 1980 and international in 1990)
- Feature: Resizing the window in all SDL builds
- Feature: Added MIDI flag to makefile to set custom path to midi player
- Change: Autosaves are now placed in save/autosave
- Change: Default savegame directory is /save in Linux
- Change: Screenshots are saved to PERSONAL_DIR (unix)
- Change: Scenarios now have the file extension .scn
- Change: Default network port from 12345 (known trojan) to 3979
- Change: Crossing tunnels is now considered a cheat
- Change: Made helicopters able to land on small airports again
- Fix: Removing and upgrading tracks under a bridge when a train is on the bridge
- Fix: Pause button was not synced in network games
- Fix: Crash caused by invalid screen resolutions
- Fix: AI can not build tubular bridges in 1950, etc. Same restrictions apply to it, as to human players
- Fix: Volume, litres, was x100, should be x1000
- Fix: Bridge building by towns was screwed when executed without testing first
- Fix: Better AI route finding
- Fix: AI builds less inner-city bus stations
- Fix: Better industry spreading on random maps
- Fix: Two industries that accept the same goods can never be very close to each other
- Fix: Destroying bridge (over water or 'higher bridge' with vehicle on it)
- Fix: Game crashes when you hit the build rail button
- Fix: Some scenarios had a max_railtype of 0
- Fix: Bribe Authority. A failed attempt to bribe is now also stored in savegame
- Fix: 80% CPU load paused in fast-forward
- Fix: Some airport runways were treated
- Fix: Minor minimap glitch
- Fix: Station sorting scroll fails with not enough stations
- Fix: Desert ground for depots in the desert
- Fix: Trains could run on wrong track type under bridges
- Fix: Screenshot hangs
- Fix: Wrong sound with ships
- Fix: Toy shop closes even though it has supply
- Fix: Nordic characters
- Fix: Also restore Service Interval when rebuying vehicle
- Fix: Crash with map bits > 8
- Fix: UFO crash in bus stop
- Fix: Town actions has empty row
- Fix: Train stuck with the head in one depot and tail in another
- Fix: Optimised random radio tower spreading
- Fix: Ground below trees is sometimes not covered by snow
- Fix: Fast forward button in scenario editor
- Fix: Screenshot hotkey does not function in scenario editor
- Fix: Allow deleting a bridge if a vehicle is below
- Fix: Crash loading a scenario
- Fix: Build tracks on water
- Fix: Fast forward button pressed with tab
- Fix: Vehicles do not get old
- Fix: Finance bug with some original scenarios
- Fix: 'Stopped' is shown when train is stopping and 'Reverse' is clicked
- Fix: 100% CPU bug
- Fix: Crash when AI builds airport
- Fix: Plays wrong music on main screen
- Fix: Inflation was way too high when interest rate = 0
- Fix: Cannot sell anything if money is TOO negative
- Fix: Fast forward button resets
- Fix: 'Refit train' button remains
- Fix: Enable up/down scrolling with the mouse
- Fix: 1920 all trains
- Fix: Wrong heli breakdown speed
- Fix: Station list cargo waiting display bug
- Fix: Bug that could allow rails on steep slopes
- Fix: Train depots and checkpoints not flooded by water
- Fix: Added command line option (-i) to deactivate the grf check
- Fix: Signal bug [SF#949929]


### 0.3.2.1 (2004-05-23)

- Feature: Now builds on FreeBSD
- Feature: Now builds on MorphOS
- Fix: Use english.lng by default
- Fix: No bridges available in 1920
- Fix: Czech file was missing


### 0.3.2 (2004-05-22)

- Feature: HP for trains limited to 16bit int
- Feature: Added Czech translation
- Feature: Train refitting
- Feature: Auto euro
- Feature: Industry directory
- Feature: Added extend vehicle life/noexpire patch
- Feature: Show revision number in title bar
- Feature: Random network games
- Feature: Smallmap remembers size
- Feature: Remember value of show town names in smallmap
- Feature: Norwegian translation
- Feature: Norwegian currency
- Feature: Slovak language
- Feature: Use SO_REUSEADDR on listen socket
- Feature: Unix sigabort handling
- Feature: Hungarian translation
- Feature: Added Norwegian translation
- Feature: Added more default resolutions
- Feature: Return error message if DOS grf files are used
- Feature: Bemidi support
- Feature: Added Icelandic currency
- Change: Plant area of trees now allowed for 20x20 area
- Change: 'kmh^-1' to 'km/h'
- Change: Show original savegame names for oldstyle savegames
- Change: Autosave go to autosave/
- Fix: Do not allow building rail stations on airports or bus stations
- Fix: Canal tool resets after 1 use
- Fix: Enable mouse wheel scrolling and zooming in SDL
- Fix: Construct industries producing raw materials
- Fix: Loading TTD saves gave incorrect reliability parameters for wagons
- Fix: Fixed order restore bug in network play
- Fix: Network sync fix for train goto depot
- Fix: Only one statue per player per town
- Fix: Enhanced patch configurator
- Fix: If realistic acceleration was enabled, train did not accelerate if they entered a tunnel right after a slope
- Fix: Remove SDL frameskip message
- Fix: Road vehicle on hills speedfix
- Fix: CompanyValueGraph window too small for currency
- Fix: Mkdir() problem in unix.c
- Fix: Client kills server if it leaves a networkgame
- Fix: Smoother mouse cursor
- Fix: Fixed a couple of overlapping memcpys
- Fix: Quit to beos
- Fix: Dragging to build canals sometimes crashed
- Fix: Cactus plants died on desert
- Fix: Invalid letters in Spanish town names
- Fix: Rail upgrade button
- Fix: Makefile reorganisation
- Fix: Zoom out button not greyed out
- Fix: No space between some values and units
- Fix: Station catchment outline-tiles were not shown properly on slopes
- Fix: Oil rig station was not properly deleted
- Fix: Fixed making screenshots in scenario editor
- Fix: Mac patches
- Fix: Fixed alignment issue in station drawing


### 0.3.1 (2004-04-26)

- Feature: Bridge pillars for higher bridges
- Feature: Remember cargo payment rates selection, default to all
- Feature: Fast forward button
- Feature: Copy/share orders from trains in depot
- Feature: Swedish translation
- Feature: Dragging to construct canals
- Feature: Can now have more than 128 towns
- Feature: Always allow building small airports patch
- Feature: Colourful newspaper after a certain date
- Feature: Build while paused patch
- Feature: Polish town names
- Feature: Clear area now works in scenario editor
- Feature: Drag&drop stations
- Feature: More realistic train starting and stopping
- Change: New directory structure (*.grf+sample.cat in data subdir, *.lng in lang subdir)
- Fix: Shift+arrows keys scrolls faster
- Fix: 'Monorail in 1985' which allowed you to build monorail/maglev at any year [SF#941880]
- Fix: Town ratings when companies are deleted/merged
- Fix: Vehicle reliability calculation in third phase
- Fix: Random world button in scenario editor does not build cities, industries, trees
- Fix: Loading worlds with no towns now fails
- Fix: Outdated sort order after station renaming
- Fix: Better train detection for copy orders
- Fix: Euro currency bug [SF#938481]
- Fix: Go to xxx road depot selection bug (2) [SF#938170]
- Fix: Scrolling and newspaper in title screen [SF#934520]
- Fix: Incorrect cargo_days for trains
- Fix: Array bounds error with train breakdown speeds
- Fix: Towns deleting random tiles around houses
- Fix: Incorrect road vehicle list caption for competitors
- Fix: Vehicle menu greying after a bankruptcy
- Fix: Selective road removal
- Fix: Make houses available in 1920 to prevent hang
- Fix: Duration of breakdown smoke
- Fix: Slope bug under bridges
- Fix: Do not play invalid sounds (fixes road reconstruction crash)
- Fix: Display correct train power with multihead engines
- Fix: Buffer overflow caused by too long string in english.lng
- Fix: Destroying things with no money


### 0.3.0 (2004-04-14)

- Feature: Cost estimation with Shift
- Feature: Added patch for starting_date, takes a value on the form yyyy, yyyymm or yyyymmdd
- Feature: Support for multiheaded trains
- Feature: Sell whole train by dragging loco to special trashcan
- Feature: Drag the whole train with ctrl in depot
- Feature: Added convert rail tool
- Feature: Patch to select what vehicle types the ai will build
- Feature: Better slope graphics
- Feature: New pathfinding algorithm for trains (enable with new_pathfinding)
- Feature: Added patch to use timidity for BeOS
- Feature: Mousewheel can now be used to scroll in windows
- Feature: Added coordinate display to landinfo window
- Feature: Change default servicing interval for vehicles
- Feature: Change max # of vehicles per player
- Feature: Nonuniform stations patch
- Feature: Moved error message box out of the way
- Feature: Canals/shiplifts
- Feature: Build tree of random type
- Feature: Build trees on area
- Feature: Added colour coded vehicle profits
- Feature: Ability to close error messages with space
- Feature: Network games (currently unsupported)
- Feature: Bigger demolish tool
- Feature: Two more bridges
- Feature: Improved depot finding
- Feature: Bribe the town authority
- Feature: Allow building many trees on a single tile
- Feature: Added snow_line_height setting, only affects new games
- Feature: Errmsg_duration controls how long error messages are displayed
- Feature: Fullscreen_bpp setting in [win32] sets the bpp to use in fullscreen mode
- Feature: Euro symbol
- Feature: High bridges
- Feature: ZLIB savegames (smaller than before)
- Feature: PNG, PCX screenshot support
- Feature: Indicate with grey in vehicle popup menus if company has no vehicles of that type
- Feature: Clicking on the money brings up finances
- Feature: [OSX] Distribution now uses Apples package system for easier updates
- Feature: [OSX] Application is now a proper bundle application
- Change: [Windows] Use save/ as save folder
- Change: Moved date in news window
- Change: Do not check if tiles around the clicked station is a station in order gui
- Change: Keep checkpoint button down after placing
- Change: [Windows] Moved disk devices to bottom of list
- Change: Changed speedkey from Shift to Tab
- Change: Enhanced patches window with pages
- Change: Do not slow down trains as much on hills
- Change: Limit amount of radiotowers
- Change: Changed intro graphics
- Change: All player stuff is deleted when you load a scenario
- Fix: Aircraft terminal was not properly freed if aircraft crashed
- Fix: Fixed station acceptance bug
- Fix: Fixed buy shares in company
- Fix: Only deliver goods to stations that have a rating != 0
- Fix: Added F hotkeys in scenario editor
- Fix: Unable to raise land next to signal
- Fix: Aircraft was shown instead of ships in player overview window
- Fix: Updated installer to take care of savegames more carefully
- Fix: Do not make a new subsidy if there already exists one that is currently active by a company
- Fix: Town directory sometimes showed huge numbers
- Fix: Fixed bugs when changing owners of items (pieces of rail were not always deleted),
- Fix: Fixed bug with large stations in train pathfinder
- Fix: Deleting docks does not produce land
- Fix: Deleting ship depot does not produce land
- Fix: Buoy is now treated as water when flooding
- Fix: Combo presignals bug fix
- Fix: Prevent going to 0,0 if airport/docks is deleted
- Fix: French town names had bad letters in them
- Fix: Order list when replacing train did not work properly
- Fix: Start in the middle of the map
- Fix: More error tolerant saveload code
- Fix: [OSX] Now runs even if SDL is not present on the system
- Fix: [OSX] Now runs on systems older than 10.3
- Fix: [OSX] Altered compiler settings to make a completely stable app


## 0.2.x

### 0.2.1 (2004-04-04)

- Feature: 'A' hotkey now always opens autorail
- Feature: X can be used to toggle transparent buildings
- Feature: Hotkeys 1-9 can be used to build a bridge in the bridge window
- Feature: Added more hotkeys in the road build window
- Change: Moved autorail button
- Fix: Copy orders crashed if you clicked on a wagon
- Fix: Do not show transparent buildings in intro
- Fix: Installer does not delete savegames


### 0.2 (2004-04-03)

- Feature: Autoscroll (only works to left/right)
- Feature: Train checkpoints, instead of TTDPatch's nonstop handling
- Feature: TTDPatch compatible nonstop handling
- Feature: Refresh rate configuration setting
- Feature: Town directory sorting options
- Feature: Pre-signals (ctrl-click on existing signals to change signal type)
- Feature: Show semaphores on the right side if right-sided traffic
- Feature: Patch options configuration window
- Feature: Autorail build tool
- Feature: 'Show yearly finances window' option
- Feature: 'Signals on drive side' patch
- Feature: 'Show full date in statusbar' option
- Feature: Italian translation
- Feature: Road and rail removal by dragging a selection
- Feature: News item for 'train is unprofitable'
- Feature: News item for 'train is lost'
- Feature: [Windows] Double size mode (Ctrl-d to toggle)
- Feature: 'Multiple similar industries in close proximity' option
- Feature: 'Multiple industries per down' option
- Feature: 'Crossing tunnels' option
- Feature: Order sharing and copying ('goto' on other vehicle to copy, ctrl+'goto' to share)
- Feature: Remember last built rail type
- Feature: 'Debtmax' faster loan management with ctrl key
- Feature: 'Go to depot' orders option
- Feature: 'Long bridges' option
- Feature: 'Select goods' option
- Feature: 'No train service' option
- Feature: 'No inflation' option
- Feature: Automatically detect available resolutions
- Feature: 'Full load any' option, as in TTDPatch
- Feature: Automatic detection of available language files
- Feature: German translation
- Feature: Finnish town names
- Feature: Remember custom difficulty settings
- Feature: Configuration file system
- Feature: Show vehicle speed in vehicle view windows
- Feature: Train depot window now has horizontal scrollbar
- Feature: Mammoth trains
- Feature: On-the-fly language selection
- Feature: Load old premade ttd maps (must be renamed to .sv1 extension)
- Change: Increased number of windows on screen to 20
- Change: [OSX] Start when doubleclicked
- Change: [OSX] Significant performance increase
- Change: Optimised startup time
- Change: Sorted savegame list
- Fix: News window was moved strangely when resizing
- Fix: Fixed sign drawing bug in max zoom out mode
- Fix: Road vehicles sometimes getting stuck
- Fix: Connecting tracks behind depot causing incorrect signal behaviour
- Fix: Save/load diskspace bug
- Fix: Incorrect bridge cost for long bridges
- Fix: Disallow buoy in north corner
- Fix: Shift key now increases game speed only when game window is active
- Fix: Ctrl button now works with SDL driver
- Fix: Incorrect weight displayed in 'new trains' window
- Fix: Incorrect train running cost in newspaper


## 0.1.x

### 0.1.4 (2004-03-25)

- Feature: Crash submit system on Windows
- Feature: Autosave
- Feature: In-game resolution selection via settings window
- Feature: Dutch town names
- Feature: Added load game menu item
- Feature: Build on coasts
- Feature: Allow building transmitters, lighthouses and company headquarters on slopes
- Feature: Now builds on MacOSX
- Change: New savegame format
- Change: New format for english.lng
- Fix: Train smoke clouds
- Fix: Train engine sounds
- Fix: Play all sounds at 11025 hz (fixes certain sounds)
- Fix: Scenario editor desert button now makes desert instead of lighthouse
- Fix: Creating random town in scenario editor crash
- Fix: Candy bubbles sometimes caused crash
- Fix: Wrong speed was shown in news window for some vehicles
- Fix: Graph colour bleeding
- Fix: Arrow keys with SDL driver
- Fix: Do not allow trains to road depots
- Fix: Road vehicle was sometimes shown inside depot
- Fix: Arrow keys in sdl driver were wrong
- Fix: Endianness bugs in save/load
- Fix: Now builds on FreeBSD
- Fix: Screenshot feature now works
- Fix: Rail foundations sometimes displayed unnecessarily
- Fix: Minor AI bugs
- Fix: Fixed industry sounds
- Fix: Bug where ship depots were very expensive
- Fix: BeOS build
- Fix: Yearly expenses data being the same for the past two game years
- Fix: Adding songs to playlists other than custom1 and custom2
- Fix: First and last tracks playing the wrong music
- Fix: Palette animation for SDL video
- Fix: Get remaining disk space on most Unix-en
- Fix: Screen went black when resizing


### 0.1.3 (2004-03-18)

- Feature: Swedish town names
- Feature: More currencies
- Feature: Better window resizing/zooming
- Feature: Added goto road vehicle depot for road vehicle orders
- Feature: Possibility to use either semaphores or signals (Ctrl key)
- Feature: Limited the scrolling rate for year selector in scenario editor
- Feature: Improved mouse scroll zooming
- Feature: Larger stations and possibility to join stations
- Fix: Message options window
- Fix: Company takeover/purchase
- Fix: Station code so it is not possible to steal another player's temporarily deleted station
- Fix: Subsidy owner bug when deleting station
- Fix: Crash when deleting a bridge with a train on it
- Fix: Missing candy initial cargo payment values
- Fix: Goods and Food/FizzyDrinks subsidies
- Fix: Graphical glitch in subsidies window
- Fix: Take over company dialogue was not shown properly
- Fix: Crash if player windows were open while the company went bankrupt
- Fix: Train slowness on hills


### 0.1.2 (2004-03-15)

- Feature: Mouse wheel can be used to zoom in out on Windows
- Feature: Implemented some support for resizing the window dynamically in Windows
- Fix: Tunnel mouse icon for maglev and monorail


### 0.1.1 (2004-03-14)

- Feature: Preliminary presignal support
- Feature: Centre windows properly in higher resolutions
- Feature: Command line -g flag now optionally takes a game to load
- Add: External MIDI driver for Unix version
- Add: DirectMusic driver for Windows version
- Add: 'build tracks on slopes' feature
- Fix: Problem where directories were not displayed under Linux
- Fix: Colours in map window for routes
- Fix: Road drive side
- Fix: 'Fund road construction' not clickable when unavailable
