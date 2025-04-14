.. NIDAR documentation master file, created by
   sphinx-quickstart on Tue Apr  8 21:27:17 2025.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

NIDAR documentation
===================

Add your content using ``reStructuredText`` syntax. See the
`reStructuredText <https://www.sphinx-doc.org/en/master/usage/restructuredtext/index.html>`_
documentation for details.

.. task-list::
    :name: task_list_example
    :custom:

    1. [x] Task A
    2. [ ] Task B

       .. task-list::
           :clickable:

           * [x] Task B1
           * [x] Task B2
           * [] Task B3

           A rogue paragraph with a reference to
           the `parent task_list <task_list_example>`.

           - A list item without a checkbox.
           - [ ] Another bullet point.

    3. [ ] Task C

.. toctree::
   :maxdepth: 2
   :caption: Contents:

