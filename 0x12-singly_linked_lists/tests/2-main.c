{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x12-singly_linked_lists/tests":{"items":[{"name":"0-main.c","path":"0x12-singly_linked_lists/tests/0-main.c","contentType":"file"},{"name":"1-main.c","path":"0x12-singly_linked_lists/tests/1-main.c","contentType":"file"},{"name":"100-main.c","path":"0x12-singly_linked_lists/tests/100-main.c","contentType":"file"},{"name":"2-main.c","path":"0x12-singly_linked_lists/tests/2-main.c","contentType":"file"},{"name":"3-main.c","path":"0x12-singly_linked_lists/tests/3-main.c","contentType":"file"},{"name":"4-main.c","path":"0x12-singly_linked_lists/tests/4-main.c","contentType":"file"}],"totalCount":6},"0x12-singly_linked_lists":{"items":[{"name":"tests","path":"0x12-singly_linked_lists/tests","contentType":"directory"},{"name":"0-print_list.c","path":"0x12-singly_linked_lists/0-print_list.c","contentType":"file"},{"name":"1-list_len.c","path":"0x12-singly_linked_lists/1-list_len.c","contentType":"file"},{"name":"100-first.c","path":"0x12-singly_linked_lists/100-first.c","contentType":"file"},{"name":"101-hello_holberton.asm","path":"0x12-singly_linked_lists/101-hello_holberton.asm","contentType":"file"},{"name":"2-add_node.c","path":"0x12-singly_linked_lists/2-add_node.c","contentType":"file"},{"name":"3-add_node_end.c","path":"0x12-singly_linked_lists/3-add_node_end.c","contentType":"file"},{"name":"4-free_list.c","path":"0x12-singly_linked_lists/4-free_list.c","contentType":"file"},{"name":"README.md","path":"0x12-singly_linked_lists/README.md","contentType":"file"},{"name":"_putchar.c","path":"0x12-singly_linked_lists/_putchar.c","contentType":"file"},{"name":"lists.h","path":"0x12-singly_linked_lists/lists.h","contentType":"file"}],"totalCount":11},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x09-static_libraries","path":"0x09-static_libraries","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"0x17-doubly_linked_lists","path":"0x17-doubly_linked_lists","contentType":"directory"},{"name":"0x18-dynamic_libraries","path":"0x18-dynamic_libraries","contentType":"directory"},{"name":"0x1A-hash_tables","path":"0x1A-hash_tables","contentType":"directory"},{"name":"0x1C-makefiles","path":"0x1C-makefiles","contentType":"directory"},{"name":"0x1E-search_algorithms","path":"0x1E-search_algorithms","contentType":"directory"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":27}},"fileTreeProcessingTime":8.211797,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":400077526,"defaultBranch":"master","name":"alx-low_level_programming","ownerLogin":"Gedeonobae","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2021-08-26T07:19:00.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/85337093?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1629964498.2562811","canEdit":false,"refType":"branch","currentOid":"bf314a21eb329c9e8da5ee0ed3bb3dd49f24f8ff"},"path":"0x12-singly_linked_lists/tests/2-main.c","currentUser":null,"blob":{"rawLines":["#include <stdlib.h>","#include <string.h>","#include <stdio.h>","#include \"lists.h\"","","/**"," * main - check the code"," *"," * Return: Always 0."," */","int main(void)","{","    list_t *head;","","    head = NULL;","    add_node(&head, \"Alexandro\");","    add_node(&head, \"Asaia\");","    add_node(&head, \"Augustin\");","    add_node(&head, \"Bennett\");","    add_node(&head, \"Bilal\");","    add_node(&head, \"Chandler\");","    add_node(&head, \"Damian\");","    add_node(&head, \"Daniel\");","    add_node(&head, \"Dora\");","    add_node(&head, \"Electra\");","    add_node(&head, \"Gloria\");","    add_node(&head, \"Joe\");","    add_node(&head, \"John\");","    add_node(&head, \"John\");","    add_node(&head, \"Josquin\");","    add_node(&head, \"Kris\");","    add_node(&head, \"Marine\");","    add_node(&head, \"Mason\");","    add_node(&head, \"Praylin\");","    add_node(&head, \"Rick\");","    add_node(&head, \"Rick\");","    add_node(&head, \"Rona\");","    add_node(&head, \"Siphan\");","    add_node(&head, \"Sravanthi\");","    add_node(&head, \"Steven\");","    add_node(&head, \"Tasneem\");","    add_node(&head, \"William\");","    add_node(&head, \"Zee\");","    print_list(head);","    return (0);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":24,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":20,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":8,"cssClass":"pl-en"},{"start":9,"end":13,"cssClass":"pl-smi"}],[],[{"start":4,"end":10,"cssClass":"pl-smi"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-s1"}],[],[{"start":4,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":15,"cssClass":"pl-c1"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":31,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":27,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":30,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":29,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":27,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":30,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":28,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":28,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":26,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":29,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":28,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":25,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":26,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":26,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":29,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":26,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":28,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":27,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":29,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":26,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":26,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":26,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":28,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":31,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":28,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":29,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":29,"cssClass":"pl-s"}],[{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-s1"},{"start":20,"end":25,"cssClass":"pl-s"}],[{"start":4,"end":14,"cssClass":"pl-en"},{"start":15,"end":19,"cssClass":"pl-s1"}],[{"start":4,"end":10,"cssClass":"pl-k"},{"start":12,"end":13,"cssClass":"pl-c1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/Gedeonobae/alx-low_level_programming/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/Gedeonobae/alx-low_level_programming/security/dependabot","repoSecurityAndAnalysisPath":"/Gedeonobae/alx-low_level_programming/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"2-main.c","displayUrl":"https://github.com/Gedeonobae/alx-low_level_programming/blob/master/0x12-singly_linked_lists/tests/2-main.c?raw=true","headerInfo":{"blobSize":"1.06 KB","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"9e19884","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FGedeonobae%2Falx-low_level_programming%2Fblob%2Fmaster%2F0x12-singly_linked_lists%2Ftests%2F2-main.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"46","truncatedSloc":"44"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/Gedeonobae/alx-low_level_programming/discussions/new","newIssuePath":"/Gedeonobae/alx-low_level_programming/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/Gedeonobae/alx-low_level_programming/blob/master/0x12-singly_linked_lists/tests/2-main.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/Gedeonobae/alx-low_level_programming/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/Gedeonobae/alx-low_level_programming/raw/master/0x12-singly_linked_lists/tests/2-main.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"Gedeonobae","repoName":"alx-low_level_programming","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"main","kind":"function","identStart":140,"identEnd":144,"extentStart":140,"extentEnd":150,"fullyQualifiedName":"main","identUtf16":{"start":{"lineNumber":10,"utf16Col":4},"end":{"lineNumber":10,"utf16Col":8}},"extentUtf16":{"start":{"lineNumber":10,"utf16Col":4},"end":{"lineNumber":10,"utf16Col":14}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/Gedeonobae/alx-low_level_programming/branches":{"post":"0KZFXbvD9d1eMzG1HiBEVJEu-fiDMZX4lFgsWuCinSzAhj06SCPdIDJJYG-OdD9cmSs-J0Yh2WiD0FXJkQZvwg"},"/repos/preferences":{"post":"FSkDlilAkVQeoI47KqpmnmiTfgDVNA4wbX4cdr85jFJtCn8XwjvrRBNOP0EdnMs35J7ltdJ8jwytbR_9ZbKIVA"}}},"title":"alx-low_level_programming/0x12-singly_linked_lists/tests/2-main.c at master · Gedeonobae/alx-low_level_programming"}